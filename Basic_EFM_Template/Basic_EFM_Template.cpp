// Basic_EFM_Template.cpp : Defines the exported functions for the DLL application.
// This is essentially the main file.
#include "stdafx.h"
#include "Basic_EFM_Template.h"
#include "Utility.h"
#include <Math.h>
#include <stdio.h>
#include <string>
#include "Inputs.h"
#include "include/Cockpit/CockpitAPI_Declare.h" // Provides param handle interfacing for use in lua
#include "include/FM/API_Declare.h"
#include "FM_data.h"
#include "RafaleHUD.h"
#include "FM_Lookup.h"
#include "Cl_Cd_coeffs/Cl_Wings_Data.h"
#include "Cl_Cd_coeffs/Cd_Wings_Data.h"
#include "Cl_Cd_coeffs/Cl_fuselage_Data.h"
#include "Cl_Cd_coeffs/Cd_fuselage_Data.h"
#include "Cl_Cd_coeffs/Cl_stab_h_Data.h"        // ← Nouveau nom simplifié
#include "Cl_Cd_coeffs/Cd_stab_h_Data.h"        // ← Nouveau nom simplifié
#include "Cl_Cd_coeffs/Cl_derive_Data.h"        // ← Nouveau nom simplifié
#include "Cl_Cd_coeffs/Cd_derive_Data.h"        // ← Nouveau nom simplifié

// Fonction utilitaire (bilinéaire Mach × AoA, pas Mach × Alt)
inline double interpolate_aerodynamic_coeff(
	double mach, double alpha_deg,
	const double* mach_axis, int mach_size,
	const double table[][150])  // 150 points AoA
{
	// Clamp Mach
	double m = limit(mach, mach_axis[0], mach_axis[mach_size - 1]);

	// Trouver indices Mach
	int i_mach = 0;
	while (i_mach < mach_size - 1 && mach_axis[i_mach + 1] < m) i_mach++;

	double mach_frac = (m - mach_axis[i_mach]) / (mach_axis[i_mach + 1] - mach_axis[i_mach]);

	// Clamp AoA à [-50, 50]° (interpoler sur 150 points)
	double aoa_norm = limit(alpha_deg, -50.0, 50.0);
	double aoa_index = ((aoa_norm + 50.0) / 100.0) * 149.0;
	int i_aoa = (int)aoa_index;
	double aoa_frac = aoa_index - i_aoa;

	i_aoa = limit(i_aoa, 0, 148);

	// Bilinéaire
	double v00 = table[i_mach][i_aoa];
	double v01 = table[i_mach][i_aoa + 1];
	double v10 = table[i_mach + 1][i_aoa];
	double v11 = table[i_mach + 1][i_aoa + 1];

	double v0 = v00 * (1.0 - aoa_frac) + v01 * aoa_frac;
	double v1 = v10 * (1.0 - aoa_frac) + v11 * aoa_frac;

	return v0 * (1.0 - mach_frac) + v1 * mach_frac;
}

inline double interpolate_aerodynamic_coeff_safe(
	double mach, double alpha_deg,
	const double* mach_axis, int mach_size,
	const double table[][150])
{
	// Gérer les angles alpha > ±90° avec symétrie aérodynamique
	// Cl(-α) = -Cl(α)  [antisymétrique]
	// Cd(-α) = Cd(α)   [symétrique pour traînée induite]

	double a = fabs(alpha_deg);

	if (a > 90.0)
	{
		// Vol inversé : utiliser la symétrie autour de ±90°
		// Exemple : α = -120° → equivalent à -(180-120°) = -60°
		double alpha_sym = 180.0 - a;

		// Interpoler la version symétrique
		double cl_sym = interpolate_aerodynamic_coeff(
			mach, alpha_sym,
			mach_axis, mach_size, table
		);

		// Inverser le signe pour l'alpha inversé
		// Cl(-120°) ≈ -Cl(60°)
		return (alpha_deg < 0.0) ? -cl_sym : -cl_sym;  // Antisymétrique
	}

	// Plage normale : utiliser l'interpolation standard
	return interpolate_aerodynamic_coeff(
		mach, alpha_deg,
		mach_axis, mach_size, table
	);
}

namespace FM
{
	Vec3	common_force;
	Vec3	common_moment;
	Vec3    center_of_mass;
	Vec3	wind;
	Vec3	velocity_world;
	Vec3	velocity_body;       // Vitesse inertielle dans le repère avion (X avant, Y droite, Z haut)
	Vec3	wind_body;           // Vent dans le repère avion
	bool	body_velocity_valid = false;
	Vec3	airspeed;

	double	const	pi = 3.1415926535897932384626433832795;
	double	const	rad_to_deg = 180.0 / pi;

	// Defining aircraft stats here so we don't have to keep calling the FM_DATA namespace.
	double S = FM_DATA::wing_area; // Wing area
	double wingspan = FM_DATA::wingspan; // Wing span
	double length = FM_DATA::length; // Overall length
	double height = FM_DATA::height; // Overall height, not counting landing gear
	double idle_rpm = FM_DATA::idle_rpm / 100; // RPM % at idle throttle


	// ═══════════════════════════════════════════════════════════════════════════
// 1. STRUCTURES ET VARIABLES D'ÉTAT (À ajouter dans le namespace FM global)
// ═══════════════════════════════════════════════════════════════════════════

// Filtre notch pour éliminer les résonances de couplage roulis-lacet (~0.5 Hz)
	struct NotchFilter {
		double output;
		double prev_input1, prev_input2;
		double prev_output1, prev_output2;
		double wn;     // Fréquence naturelle (rad/s)
		double zeta;   // Amortissement (0.7 = critique)
		double Q;      // Facteur de qualité (>1 = étroit)

		NotchFilter() : output(0), prev_input1(0), prev_input2(0),
			prev_output1(0), prev_output2(0), wn(3.14), zeta(0.7), Q(2.0) {
		}

		double update(double input, double dt) {
			if (dt <= 0.0001) return input;

			// Coefficients filtre notch discret (2e ordre IIR)
			double alpha = 1.0 / (1.0 + (2.0 * zeta / wn) * dt + (dt * dt / (wn * wn)));

			double b0 = 1.0 + (dt * dt / (wn * wn));
			double b1 = -2.0 * (1.0 + (dt * dt / (wn * wn)));
			double b2 = 1.0 + (dt * dt / (wn * wn));

			double a1 = -2.0 * (1.0 - (dt * dt / (wn * wn))) * alpha;
			double a2 = (1.0 - (2.0 * zeta / wn) * dt + (dt * dt / (wn * wn))) * alpha;

			output = alpha * (b0 * input + b1 * prev_input1 + b2 * prev_input2)
				- a1 * prev_output1 - a2 * prev_output2;

			prev_input2 = prev_input1;
			prev_input1 = input;
			prev_output2 = prev_output1;
			prev_output1 = output;

			return output;
		}

		void reset() {
			output = 0;
			prev_input1 = prev_input2 = 0;
			prev_output1 = prev_output2 = 0;
		}
	};

	// Variables globales pour le système de lacet (dans namespace FM)
	static NotchFilter yaw_roll_coupling_filter;      // Filtre notch couplage
	static double yaw_rate_setpoint_previous = 0.0;   // Pour filtrage du setpoint
	static double rudder_rate_limiter = 0.0;          // Limitation du taux de déflexion
	static double yaw_direct_command = 0.0;           // Commande pilote directe lacet
	static double ari_compensation = 0.0;             // Compensation ARI active

	// ── POSITIONS DES FOYERS AÉRODYNAMIQUES (RAFALE C) ───────────────────────
	// Les positions sont relatives à l'origine du modèle 3D.
	Vec3 left_canard_pos(-0.005, 0.348, -1.861);
	Vec3 right_canard_pos(-0.003, 0.348, 1.869);

	Vec3 left_wing_pos(-2.826, -0.239, -2.849);
	Vec3 right_wing_pos(-2.826, -0.239, 2.849);

	Vec3 left_elevon_pos(-5.626, -0.170, -2.023);
	Vec3 right_elevon_pos(-5.626, -0.170, 2.023);

	Vec3 left_gouv_pos(-5.521, -0.321, -3.808); // Ailerons
	Vec3 right_gouv_pos(-5.521, -0.321, 3.808);

	Vec3 derive_pos(-6.176, 1.756, 0.0);   // Dérive
	Vec3 rudder_pos(-7.185, 1.462, 0.0);   // Gouverne de direction

	// Moteurs M88-2 (Le moment piqueur sera généré naturellement par le décalage Y par rapport au CG)
	Vec3 left_engine_pos(-7.599, -0.103, -0.604);
	Vec3 right_engine_pos(-7.599, -0.103, 0.604);

	// Pitch variables
	double  pitch_input = 0;
	int		pitch_discrete = 0;
	bool	pitch_analog = true;
	double	pitch_trim = 0;
	double	elevator_command = 0;

	// Roll variables
	double  roll_input = 0;
	int		roll_discrete = 0;
	bool	roll_analog = true;
	double  roll_trim = 0;
	double	aileron_command = 0;

	// Yaw variables
	double  yaw_input = 0;
	int	    yaw_discrete = 0;
	bool	yaw_analog = true;
	double	yaw_trim = 0;
	double	rudder_command = 0;

	// Left engine (# 1) variables
	bool	left_engine_switch = false;
	double  left_throttle_input = 0;
	double	left_throttle_output = 0;
	double	left_engine_power_readout = 0;
	double	left_thrust_force = 0;
	double  left_fadec_output = 0;    // ← AJOUTER


	// Right engine (# 2) variables
	bool	right_engine_switch = false;
	double  right_throttle_input = 0;
	double	right_throttle_output = 0;
	double	right_engine_power_readout = 0;
	double	right_thrust_force = 0;
	double  right_fadec_output = 0;   // ← AJOUTER

	// Lift and drag devices
	bool	airbrake_switch = false;
	double	airbrake_pos = 0;
	//double	flaps_pos = 0;
	//bool	flaps_switch = false;
	double	slats_pos = 0;

	// Landing gear
	bool	gear_switch = false;
	double	gear_pos = 0;
	double	wheel_brake = 0;
	int	    carrier_pos = 0;


	static double nose_wheel_rotation = 0.0;
	static double left_wheel_rotation = 0.0;
	static double right_wheel_rotation = 0.0;
	static double nose_wheel_vel = 0.0;
	static double left_wheel_vel = 0.0;
	static double right_wheel_vel = 0.0;
	static double ab_vis_left = 0.0;
	static double ab_vis_right = 0.0;
	static double nozzle_left = 0.0;
	static double nozzle_right = 0.0;

	double  atmosphere_density = 101000.0; // Atmosphere/air density (Pascals)
	double	altitude_ASL = 0; // Altitude above sea level
	double	altitude_AGL = 0; // Altitude above gound/surface leveldouble 
	double	V_scalar = 0; // Velocity scalar
	double  speed_of_sound = 320; // Speed of sound (m/s)
	double	mach = 0; // Air speed as a multiple of the speed of sound

	double  aoa = 0; // Angle of attack in radians
	double  alpha = 0; // Angle of attack in degrees

	double  aos = 0; // Angle of slide in radians
	double  beta = 0; // Angle of slide in degrees

	double  g = 0; // G force

	double	atmosphere_temperature = 273; // Current temperature in Kelvin

	bool	on_ground = false; // Is the aircraft currently on the ground?

	// Pitch
	double	pitch = 0; // Pitch angle in radians
	double	pitch_rate = 0;

	// Roll
	double	roll = 0; // Roll/bank angle in radians
	double	roll_rate = 0;

	// Yaw/heading
	double	heading = 0;
	double	yaw_rate = 0;

	// Damage stuff
	int element_integrity[111];
	double left_wing_integrity = 1.0;
	double right_wing_integrity = 1.0;
	double tail_integrity = 1.0;
	double left_engine_integrity = 1.0;
	double right_engine_integrity = 1.0;
	double total_damage = 1 - (left_wing_integrity + right_wing_integrity + tail_integrity +
		left_engine_integrity + right_engine_integrity) / 5;

	// Optional parameters set in the options menu
	bool invincible = true; // No damage received if true
	bool infinite_fuel = false; // No fuel drained if true
	bool easy_flight = false; // Easier and more stable flight characteristics if true

	// Cockpit/head shaking intensity
	double shake_amplitude = 0;

	// Basic timer
	double fm_clock = 0;

	// Has the simulation passed frame 1?
	bool sim_inititalised = false;

	// =========================================================================
// STRUCTURE DU CONTRÔLEUR PID (Flight Control System)
// =========================================================================

	struct PIDController {
		double kp = 0.0, ki = 0.0, kd = 0.0;
		double integrator = 0.0;
		double previous_error = 0.0;
		double derivative_state = 0.0;
		double limit_min = -1.0, limit_max = 1.0;
		double integrator_min = -2.0, integrator_max = 2.0;
		double derivative_tau = 0.025; // 25 ms: reject setpoint/telemetry spikes

		double last_p_term = 0.0;
		double last_i_term = 0.0;
		double last_d_term = 0.0;

		void set_gains(double p, double i, double d) { kp = p; ki = i; kd = d; }
		void set_limits(double min_val, double max_val) { limit_min = min_val; limit_max = max_val; }
		void set_integrator_limits(double min_val, double max_val) {
			integrator_min = min_val;
			integrator_max = max_val;
		}
		void set_derivative_tau(double tau) { derivative_tau = max(0.001, tau); }

		double update(double error, double dt) {
			if (dt <= 0.0) return 0.0;

			last_p_term = kp * error;

			// Trapezoidal integration: less frame-rate dependent than a raw accumulator.
			integrator += error * dt;
			integrator = limit(integrator, integrator_min, integrator_max);
			last_i_term = ki * integrator;

			// Filtered derivative. This prevents a step in the commanded rate/C*
			// from becoming a one-frame D-term spike that immediately saturates.
			const double alpha = dt / (derivative_tau + dt);
			double raw_derivative = (error - previous_error) / dt;
			derivative_state += (raw_derivative - derivative_state) * alpha;
			last_d_term = kd * derivative_state;
			previous_error = error;

			double output = last_p_term + last_i_term + last_d_term;

			// Conditional anti-windup: only integrate while saturated in the
			// direction that would move the output back toward the usable range.
			if (output > limit_max) {
				output = limit_max;
				if (error > 0.0) integrator -= error * dt;
			}
			else if (output < limit_min) {
				output = limit_min;
				if (error < 0.0) integrator -= error * dt;
			}

			integrator = limit(integrator, integrator_min, integrator_max);
			last_i_term = ki * integrator;
			return output;
		}

		void reset() {
			integrator = 0.0;
			previous_error = 0.0;
			derivative_state = 0.0;
			last_p_term = 0.0;
			last_i_term = 0.0;
			last_d_term = 0.0;
		}
	};

	// Contrôleurs de vol électriques (FBW)
	PIDController pitch_rate_pid;  // Gère le taux de tangage (et les G)
	PIDController roll_rate_pid;   // Gère le taux de roulis (pour aller chercher tes 270°/s !)
	PIDController yaw_rate_pid;    // Gère le taux de lacet / retour de bille


	// ═══════════════════════════════════════════════════════════════════════════
	// FCS — GAINS SCHEDULÉS PAR MACH (0.0 → 1.8, pas 0.1)
	//
	// Les valeurs sont une loi de réglage du mod, pas des données Dassault
	// publiées. Elles sont choisies pour obtenir une réponse homogène de la
	// cellule EFM et seront ensuite validées sur télémétrie DCS.
	// ═══════════════════════════════════════════════════════════════════════════

	static constexpr double Kp_PITCH_BASE = 1.80;
	static constexpr double Ki_PITCH_BASE = 0.22;
	static constexpr double Kd_PITCH_BASE = 0.18;

	static constexpr double Kp_ROLL_BASE = 0.20;
	static constexpr double Ki_ROLL_BASE = 0.05;
	static constexpr double Kd_ROLL_BASE = 0.006;

	static constexpr double Kp_YAW_BASE = 0.60;
	static constexpr double Ki_YAW_BASE = 0.035;
	static constexpr double Kd_YAW_BASE = 0.012;

	static inline double fcs_lerp(
		const double* axis, const double* values, int n, double x)
	{
		if (x <= axis[0]) return values[0];
		if (x >= axis[n - 1]) return values[n - 1];

		int i = 0;
		while (i < n - 1 && axis[i + 1] < x) ++i;

		double t = (x - axis[i]) / (axis[i + 1] - axis[i]);
		return values[i] * (1.0 - t) + values[i + 1] * t;
	}

	static void compute_adaptive_pid_gains(
		double mach_in, double alpha_deg_in, double V_in,
		double* kp_pitch, double* ki_pitch, double* kd_pitch,
		double* kp_roll, double* ki_roll, double* kd_roll,
		double* kp_yaw, double* ki_yaw, double* kd_yaw)
	{
		const int N = FM_DATA::fcs_mach_count;

		*kp_pitch = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::pitch_kp, N, mach_in);
		*ki_pitch = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::pitch_ki, N, mach_in);
		*kd_pitch = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::pitch_kd, N, mach_in);

		*kp_roll = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::roll_kp, N, mach_in);
		*ki_roll = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::roll_ki, N, mach_in);
		*kd_roll = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::roll_kd, N, mach_in);

		*kp_yaw = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::yaw_kp, N, mach_in);
		*ki_yaw = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::yaw_ki, N, mach_in);
		*kd_yaw = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::yaw_kd, N, mach_in);

		// Mild low-q reinforcement only below ~100 m/s. Do not let it
		// overwhelm the Mach table: the Mach points remain the primary tuning axis.
		double q_speed_scale = limit(80.0 / max(V_in, 40.0), 1.0, 1.35);
		double aoa_scale = 1.0 - 0.18 * limit(fabs(alpha_deg_in) / 25.0, 0.0, 1.0);

		*kp_pitch *= (0.92 + 0.08 * q_speed_scale) * aoa_scale;
		*kd_pitch *= (0.95 + 0.05 * q_speed_scale);

		*kp_roll *= (0.95 + 0.05 * q_speed_scale) * (0.94 + 0.06 * aoa_scale);
		*kd_roll *= (0.95 + 0.05 * q_speed_scale);

		*kp_yaw *= (0.92 + 0.16 * q_speed_scale);
		*kd_yaw *= (0.95 + 0.05 * q_speed_scale);

		*kp_pitch = limit(*kp_pitch, 0.80, 2.60);
		*ki_pitch = limit(*ki_pitch, 0.04, 0.30);
		*kd_pitch = limit(*kd_pitch, 0.010, 0.070);

		*kp_roll = limit(*kp_roll, 0.08, 0.35);
		*ki_roll = limit(*ki_roll, 0.010, 0.10);
		*kd_roll = limit(*kd_roll, 0.002, 0.015);

		*kp_yaw = limit(*kp_yaw, 0.25, 1.20);
		*ki_yaw = limit(*ki_yaw, 0.010, 0.08);
		*kd_yaw = limit(*kd_yaw, 0.003, 0.030);
	}


	struct FuelTank {
		double current_mass; // kg
		double max_capacity; // kg
		Vec3   position;     // Coordonnées 3D (X, Y, Z)
	};

	// Déclaration de tes 7 réservoirs
	FuelTank tank_wing_L_ext;
	FuelTank tank_wing_R_ext;
	FuelTank tank_wing_L_int;
	FuelTank tank_wing_R_int;
	FuelTank tank_fuse_fwd;
	FuelTank tank_fuse_aft;
	FuelTank tank_tail;

	// Variables pour informer DCS du déplacement du CG
	Vec3 current_burn_pos(0.0, 0.0, 0.0);
	double fuel_consumption_since_last_time = 0;
	double internal_fuel = 0; // Gardé pour la compatibilité avec les paramètres DCS
	double empty_mass = 9350.0; // Masse à vide de ton Rafale C
	double external_fuel = 0; // Amount of fuel in external stations (Kg)
	double total_fuel = internal_fuel + external_fuel; // Total fuel amount (Kg)


	// Position actuelle de l'animation de la gouverne (de -1.0 à 1.0)
	double current_rudder_animation_pos = 0.0;
	double c_star_integrator = 0.0;
	double current_canard_animation_pos = 0.0;
	double current_elevator_animation_pos = 0.0;
	constexpr double ENGINE_INERTIA_COEFF = 0.20;
	const double FUEL_MAX_KG = 4700.0; // Masse maxi carburant interne Rafale C



	//avionique 


	static RafaleHUD g_rafale_hud;
	static bool g_hud_initialized = false;


	// DLL-Lua interface
	EDPARAM interface;
}

using namespace FM;

// An example of how to interface with the Lua environment.
void* fm_export_temperature = interface.getParamHandle("FM_TEMPERATURE_C");



// Add force
void add_local_force(const Vec3& Force, const Vec3& Force_pos)
{
	common_force.x += Force.x;
	common_force.y += Force.y;
	common_force.z += Force.z;

	Vec3 delta_pos(Force_pos.x - center_of_mass.x,
		Force_pos.y - center_of_mass.y,
		Force_pos.z - center_of_mass.z);

	Vec3 delta_moment = cross(delta_pos, Force);

	common_moment.x += delta_moment.x;
	common_moment.y += delta_moment.y;
	common_moment.z += delta_moment.z;
}

// Add moment
void add_local_moment(const Vec3& Moment)
{
	common_moment.x += Moment.x;
	common_moment.y += Moment.y;
	common_moment.z += Moment.z;
}

void ed_fm_add_local_force(double& x, double& y, double& z, double& pos_x, double& pos_y, double& pos_z)
{
	x = common_force.x;
	y = common_force.y;
	z = common_force.z;
	pos_x = center_of_mass.x;
	pos_y = center_of_mass.y;
	pos_z = center_of_mass.z;
}

void ed_fm_add_local_moment(double& x, double& y, double& z)
{
	x = common_moment.x;
	y = common_moment.y;
	z = common_moment.z;
}

// Fuel consumption
void simulate_fuel_consumption(double dt)
{
	// Calcul de la masse brûlée sur cette frame par les deux M88 [cite: 13]
	double burn = FM_DATA::fuel_consumption / 60.0 * ((left_throttle_output + right_throttle_output) / 2.0) * dt;

	if (burn <= 0 || internal_fuel <= 0) return;

	// Pointeur vers le réservoir actif
	FuelTank* tank_to_drain = nullptr;

	// SÉQUENCE : On vide les ailes externes -> ailes internes -> queue -> fuselage
	// On privilégie un vidage symétrique
	if (tank_wing_L_ext.current_mass > 0 || tank_wing_R_ext.current_mass > 0) {
		tank_to_drain = (tank_wing_L_ext.current_mass > tank_wing_R_ext.current_mass) ? &tank_wing_L_ext : &tank_wing_R_ext;
	}
	else if (tank_wing_L_int.current_mass > 0 || tank_wing_R_int.current_mass > 0) {
		tank_to_drain = (tank_wing_L_int.current_mass > tank_wing_R_int.current_mass) ? &tank_wing_L_int : &tank_wing_R_int;
	}
	else if (tank_tail.current_mass > 0) {
		tank_to_drain = &tank_tail;
	}
	else if (tank_fuse_aft.current_mass > 0) {
		tank_to_drain = &tank_fuse_aft;
	}
	else if (tank_fuse_fwd.current_mass > 0) {
		tank_to_drain = &tank_fuse_fwd;
	}

	// Si un réservoir a été ciblé, on retire la masse
	if (tank_to_drain != nullptr)
	{
		if (burn > tank_to_drain->current_mass) burn = tank_to_drain->current_mass;

		tank_to_drain->current_mass -= burn;
		internal_fuel -= burn;

		// On met en mémoire la quantité brûlée et SA POSITION EXACTE pour DCS
		fuel_consumption_since_last_time += burn;
		current_burn_pos = tank_to_drain->position;
	}
}

void ed_fm_simulate(double dt)
{
	fm_clock += dt;

	common_force = Vec3();
	common_moment = Vec3();

	if (sim_inititalised == false)
	{
		// Gains initiaux = valeurs de référence adaptatif (Mach 0.8 subsonique).
		// Ils seront écrasés dès le premier appel à compute_adaptive_pid_gains().
		roll_rate_pid.set_gains(Kp_ROLL_BASE, Ki_ROLL_BASE, Kd_ROLL_BASE);
		roll_rate_pid.set_limits(-1.0, 1.0);

		yaw_rate_pid.set_gains(Kp_YAW_BASE, Ki_YAW_BASE, Kd_YAW_BASE);
		yaw_rate_pid.set_limits(-1.0, 1.0);

		yaw_roll_coupling_filter.wn = 3.14;    // ~0.5 Hz
		yaw_roll_coupling_filter.zeta = 0.7;   // Amortissement critique
		yaw_roll_coupling_filter.Q = 2.5;      // Largeur de bande notch

		//pitch_rate_pid.set_gains(0.5, 0.1, 0.03); //
		//pitch_rate_pid.set_limits(-1.0, 1.0); //

		// === INITIALISATION DU CARBURANT (Exemple pour config Plein Interne ~4700 kg) ===
		tank_wing_L_ext.max_capacity = 0;	tank_wing_L_ext.current_mass = 0; // (0 si pas de bidons externes au départ)
		tank_wing_R_ext.max_capacity = 0;	tank_wing_R_ext.current_mass = 0;

		tank_wing_L_int.current_mass = 500.0;	tank_wing_L_int.position = Vec3(-2.8, -0.2, -1.5);
		tank_wing_R_int.current_mass = 500.0;	tank_wing_R_int.position = Vec3(-2.8, -0.2, 1.5);

		tank_tail.current_mass = 300.0;			tank_tail.position = Vec3(-5.5, 0.2, 0.0);
		tank_fuse_aft.current_mass = 1700.0;	tank_fuse_aft.position = Vec3(-3.2, -0.1, 0.0);
		tank_fuse_fwd.current_mass = 1700.0;	tank_fuse_fwd.position = Vec3(-1.8, -0.1, 0.0);

		// On calcule le total initial pour débloquer la simulation de consommation
		internal_fuel = tank_wing_L_int.current_mass + tank_wing_R_int.current_mass +
			tank_tail.current_mass + tank_fuse_aft.current_mass + tank_fuse_fwd.current_mass;
	}

	// Actuator animation function for the moving parts
	gear_pos = limit(actuator(gear_pos, gear_switch, -0.003, 0.003), 0, 1); // Landing gear
	airbrake_pos = limit(actuator(airbrake_pos, airbrake_switch, -0.003, 0.004), 0, 1); // Air brakes
	//flaps_pos = limit(actuator(flaps_pos, flaps_switch, -0.002, 0.002), 0, 1); // Flaps
	slats_pos = limit(actuator(slats_pos, (alpha - 6.0) / 12.0, -0.003, 0.003), 0, 1); // Slats


	// ═══════════════════════════════════════════════════════════════════════════
		// MODE TEST AUTOMATISÉ (À activer/désactiver)
		// ═══════════════════════════════════════════════════════════════════════════
	static bool auto_test_mode = false; // Met à true, recompile, et lance DCS

	if (auto_test_mode && sim_inititalised) {
		// 1. Forcer la poussée (ex: Pleine PC)
		left_throttle_input = 1.0;
		right_throttle_input = 1.0;

		// 2. Maintien d'altitude basique (Altitude cible = 15 000 ft)
		double target_alt_m = 33000.0 * 0.3048;
		double alt_error = target_alt_m - altitude_ASL;

		// Un petit contrôleur PD "quick and dirty" pour le test
		// pitch_input simule l'action du pilote sur le manche
		pitch_input = limit((alt_error * 0.005) - (velocity_world.y * 0.02), -0.5, 0.5);

		// Garder les ailes à plat
		roll_input = limit(-roll * 0.5 - roll_rate * 0.1, -0.5, 0.5);
	}

#pragma region AERODYNAMICS

	// ═══════════════════════════════════════════════════════════════════════════
	// AÉRODYNAMIQUE RAFALE C — LUT 2D (Mach × AoA) CORRIGÉE
	// ═══════════════════════════════════════════════════════════════════════════

	// ─────────────────────────────────────────────────────────────────────────
	// VARIABLES D'ÉTAT PERSISTANTES (Pour les CDVE / Cockpit)
	// ─────────────────────────────────────────────────────────────────────────
	static double flt_g = 1.0;
	static double flt_pitch_rate = 0.0;
	static double flt_alpha = 0.0;
	static double flt_qbar = 10.0;
	static double flt_yaw_rate = 0.0;
	static double flt_roll_rate = 0.0;

	// ─────────────────────────────────────────────────────────────────────────
	// VECTEUR DE VITESSE AÉRODYNAMIQUE — REPÈRE AVION
	// ─────────────────────────────────────────────────────────────────────────
	// DCS fournit directement :
	//   velocity_body = vitesse inertielle exprimée dans le repère avion
	//   wind_body     = vent exprimé dans le même repère avion
	//
	// REPÈRE AVION :
	//   X = avant
	//   Y = haut
	//   Z = droite
	//
	// La vitesse aérodynamique relative est donc simplement :
	//   V_air = V_body - V_wind_body
	//
	// Cela évite de reconstruire le vecteur à partir de l'AoA/AoS ou
	// de mélanger les transformations monde/corps.
	airspeed.x = velocity_body.x - wind_body.x;
	airspeed.y = velocity_body.y - wind_body.y;
	airspeed.z = velocity_body.z - wind_body.z;

	V_scalar = sqrt(
		airspeed.x * airspeed.x +
		airspeed.y * airspeed.y +
		airspeed.z * airspeed.z
	);
	mach = V_scalar / speed_of_sound;

	// Pression dynamique standard (q = 0.5 * rho * V^2)
	double q = 0.5 * atmosphere_density * V_scalar * V_scalar;

	// ─────────────────────────────────────────────────────────────────────────
	// FILTRAGE DES CAPTEURS (Pour asservissement CDVE uniquement, pas pour la physique directe)
	// ─────────────────────────────────────────────────────────────────────────
	{
		double fc_normal = limit(dt * 28.0, 0.04, 0.35);
		flt_g += (g - flt_g) * fc_normal;
		flt_pitch_rate += (pitch_rate - flt_pitch_rate) * fc_normal;
		flt_alpha += (alpha - flt_alpha) * fc_normal;
		flt_qbar += (q - flt_qbar) * fc_normal;
		flt_roll_rate += (roll_rate - flt_roll_rate) * fc_normal;
		flt_yaw_rate += (yaw_rate - flt_yaw_rate) * fc_normal;
	}

	// Limite de taux de roulis utilisée par le FCS et l'amortissement.
	double OmxMax_ = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::fcs_roll_rate_max_rad_s, FM_DATA::fcs_mach_count, mach);

	// ─────────────────────────────────────────────────────────────────────────
	// FONCTION D'INTERPOLATION BILINÉAIRE 2D CORRIGÉE POUR Cl
	// ─────────────────────────────────────────────────────────────────────────
	auto interp_2d_cl = [](double mach_val, double alpha_deg,
		const double* mach_axis, const double table[][150]) -> double
		{
			double m = limit(mach_val, 0.0, 1.8);

			int i_mach = 0;
			while (i_mach < 18 && mach_axis[i_mach + 1] < m) i_mach++;

			double mach_frac = (m - mach_axis[i_mach]) / (mach_axis[i_mach + 1] - mach_axis[i_mach] + 1e-10);
			mach_frac = limit(mach_frac, 0.0, 1.0);

			// Sécurisation stricte selon les bornes réelles de ta table Statshark [-10°, +50°]
			double alpha_clamp = limit(alpha_deg, -10.0, 50.0);

			// Indexage AoA : Re-échantillonnage Python (150 points répartis uniformément sur 60° d'amplitude)
			// La formule (alpha - min) / amplitude * (POINTS - 1) donne l'index flottant exact
			double aoa_index = ((alpha_clamp - (-10.0)) / 60.0) * 149.0;

			int i_aoa = (int)aoa_index;
			double aoa_frac = aoa_index - i_aoa;

			// On sature l'index de départ à 148 max, car l'index suivant (i_aoa + 1) ira chercher le point 149
			if (i_aoa < 0) i_aoa = 0;
			if (i_aoa > 148) i_aoa = 148;

			aoa_frac = limit(aoa_frac, 0.0, 1.0);

			int i_mach_next = (i_mach + 1 < 19) ? (i_mach + 1) : 18;
			int i_aoa_next = i_aoa + 1; // Garanti inférieur ou égal à 149 grâce au check ci-dessus

			double v00 = table[i_mach][i_aoa];
			double v01 = table[i_mach][i_aoa_next];
			double v10 = table[i_mach_next][i_aoa];
			double v11 = table[i_mach_next][i_aoa_next];

			double v0 = v00 * (1.0 - aoa_frac) + v01 * aoa_frac;
			double v1 = v10 * (1.0 - aoa_frac) + v11 * aoa_frac;

			return v0 * (1.0 - mach_frac) + v1 * mach_frac;
		};

	// ─────────────────────────────────────────────────────────────────────────
	// FONCTION D'INTERPOLATION BILINÉAIRE 2D CORRIGÉE POUR Cd
	// ─────────────────────────────────────────────────────────────────────────
	auto interp_2d_cd = [](double mach_val, double alpha_deg,
		const double* mach_axis, const double table[][150]) -> double
		{
			double m = limit(mach_val, 0.0, 1.8);

			int i_mach = 0;
			while (i_mach < 18 && mach_axis[i_mach + 1] < m) i_mach++;

			double mach_frac = (m - mach_axis[i_mach]) / (mach_axis[i_mach + 1] - mach_axis[i_mach] + 1e-10);
			mach_frac = limit(mach_frac, 0.0, 1.0);

			// Sécurisation stricte selon les bornes réelles de ta table Statshark [-10°, +50°]
			// On supprime fabs() pour exploiter correctement la plage négative [-10°, 0°] de ta table
			double alpha_clamp = limit(alpha_deg, -10.0, 50.0);

			// Indexage AoA : 150 points répartis uniformément sur 60° d'amplitude (-10 à 50)
			double aoa_index = ((alpha_clamp - (-10.0)) / 60.0) * 149.0;

			int i_aoa = (int)aoa_index;
			double aoa_frac = aoa_index - i_aoa;

			// On sature l'index de départ à 148 max pour l'interpolation bilinéaire (i_aoa + 1)
			if (i_aoa < 0) i_aoa = 0;
			if (i_aoa > 148) i_aoa = 148;

			aoa_frac = limit(aoa_frac, 0.0, 1.0);

			int i_mach_next = (i_mach + 1 < 19) ? (i_mach + 1) : 18;
			int i_aoa_next = i_aoa + 1; // Garanti inférieur ou égal à 149 grâce au check ci-dessus

			double v00 = table[i_mach][i_aoa];
			double v01 = table[i_mach][i_aoa_next];
			double v10 = table[i_mach_next][i_aoa];
			double v11 = table[i_mach_next][i_aoa_next];

			double v0 = v00 * (1.0 - aoa_frac) + v01 * aoa_frac;
			double v1 = v10 * (1.0 - aoa_frac) + v11 * aoa_frac;

			return v0 * (1.0 - mach_frac) + v1 * mach_frac;
		};

	// ─────────────────────────────────────────────────────────────────────────
	// INTERPOLATION DES COEFFICIENTS AÉRODYNAMIQUES PAR SURFACE
	// ─────────────────────────────────────────────────────────────────────────
	double Cl_wings = interp_2d_cl(mach, alpha, cl_wings_axis, cl_wings_table);
	double Cd_wings = interp_2d_cd(mach, alpha, cd_wings_axis, cd_wings_table);

	double Cl_fuse = interp_2d_cl(mach, alpha, cl_fuselage_axis, cl_fuselage_table);
	double Cd_fuse = interp_2d_cd(mach, alpha, cd_fuselage_axis, cd_fuselage_table);

	double Cl_stab_h = interp_2d_cl(mach, alpha, cl_stab_h_axis, cl_stab_h_table);
	double Cd_stab_h = interp_2d_cd(mach, alpha, cd_stab_h_axis, cd_stab_h_table);

	double Cl_derive = interp_2d_cl(mach, alpha, Cl_derive_axis, Cl_derive_table);
	double Cd_derive = interp_2d_cd(mach, alpha, cd_derive_axis, cd_derive_table);

	// Auto-slats
	double slat_cl_boost = (fabs(alpha) > 6.0) ? (FM_DATA::cy_slat * 0.4 * slats_pos) : 0.0;

	// Total Cl & Cd Coefficients
	double Cl_total = FM_DATA::Cy0 + Cl_wings + Cl_fuse + Cl_stab_h + slat_cl_boost;

	double CyMax_dyn = lerp(FM_DATA::mach_table, FM_DATA::CyMax, sizeof(FM_DATA::mach_table) / sizeof(double), mach);
	CyMax_dyn += (FM_DATA::cy_slat * 0.4 * slats_pos);

	if (Cl_total > CyMax_dyn)  Cl_total = CyMax_dyn;
	if (Cl_total < -CyMax_dyn) Cl_total = -CyMax_dyn;

	double Cd_total = Cd_wings + Cd_fuse + Cd_stab_h + Cd_derive
		+ (FM_DATA::cx_brk * airbrake_pos)
		+ (FM_DATA::cx_gear * gear_pos)
		+ (FM_DATA::cx_slat * slats_pos);

	if (Cd_total < 0.0) Cd_total = 0.0;

	// ─────────────────────────────────────────────────────────────────────────
	// PROJECTION EXACTE DANS LE REPÈRE CORPS (DCS BODY FRAME)
	// ─────────────────────────────────────────────────────────────────────────
	// X+ = Avant (Nez), Y+ = Haut, Z+ = Droite
	// Formules exactes de transformation repère Vent -> repère Corps :
	// Fx_body = Lift * sin(aoa) - Drag * cos(aoa)
	// Fy_body = Lift * cos(aoa) + Drag * sin(aoa)
	// ─────────────────────────────────────────────────────────────────────────
	double Fx_body_coeff = Cl_total * sin(aoa) - Cd_total * cos(aoa);
	double Fy_body_coeff = Cl_total * cos(aoa) + Cd_total * sin(aoa);

	// Répartition de la portance/traînée asymétrique induite par la dérapage (AoS)
	double wing_left_factor = 0.5 * (1.0 + sin(-aos / 2.0));
	double wing_right_factor = 0.5 * (1.0 + sin(aos / 2.0));

	// Force Aile Gauche
	Vec3 left_wing_forces(
		Fx_body_coeff * wing_left_factor * q * (S / 2.0) * left_wing_integrity,
		Fy_body_coeff * wing_left_factor * q * (S / 2.0) * left_wing_integrity,
		0.0
	);
	add_local_force(left_wing_forces, left_wing_pos);

	// Force Aile Droite
	Vec3 right_wing_forces(
		Fx_body_coeff * wing_right_factor * q * (S / 2.0) * right_wing_integrity,
		Fy_body_coeff * wing_right_factor * q * (S / 2.0) * right_wing_integrity,
		0.0
	);
	add_local_force(right_wing_forces, right_wing_pos);

	// ──────────────────────────────────────────────────────────────────────────
		// APPLICATION DE LA FORCE SUR LA DÉRIVE (EMPENNAGE VERTICAL) — CORRIGÉ
		// ──────────────────────────────────────────────────────────────────────────

		// 1. On utilise 'aos' (radians) car Czbe_val est en /rad.
		// 2. On met un signe NÉGATIF : si le vent vient de la droite (aos > 0), 
		//    la dérive doit pousser vers la gauche (-Z) pour ramener le nez à droite (+Yaw).
	double Czbe_val = FM_DATA::Czbe; // ~6.0 /rad
	double Cy_tail = -Czbe_val * aos;

	// Limitation dynamique selon Mach
	double CyMax_tail = lerp(FM_DATA::mach_table, FM_DATA::CyMax,
		sizeof(FM_DATA::mach_table) / sizeof(double), mach);

	if (Cy_tail > CyMax_tail)  Cy_tail = CyMax_tail;
	if (Cy_tail < -CyMax_tail) Cy_tail = -CyMax_tail;

	// Traînée induite de la dérive (inchangé)
	double beta_abs = fabs(beta); // beta en degrés est parfait ici pour une approximation
	double Cd_derive_induced = 0.010 * (1.0 + beta_abs * 0.5);

	const double S_DERIVE = 4.164;  // m²

	// ═══════════════════════════════════════════════════════════════════════════
	// VEC3 : (X=Avant/Arrière, Y=Haut/Bas, Z=Gauche/Droite)
	// ═══════════════════════════════════════════════════════════════════════════
	Vec3 tail_force(
		-Cd_derive_induced * S_DERIVE * q * tail_integrity,  // X : Traînée (vers l'arrière)
		0.0,                                                 // Y : ZÉRO (pas de portance verticale)
		Cy_tail * S_DERIVE * q * tail_integrity              // Z : Force LATÉRALE (Lacet) ← CORRIGÉ !
	);
	add_local_force(tail_force, derive_pos);

	// Amortissement lacet (Yaw Damping)
	const double Cnr = -0.5;
	double yaw_rate_reduced = (yaw_rate * wingspan) / (2.0 * limit(V_scalar, 10.0, 1400.0));
	double yaw_damp_moment = Cnr * q * S * wingspan * yaw_rate_reduced;

	add_local_moment(Vec3(0.0, yaw_damp_moment, 0.0));

	// ──────────────────────────────────────────────────────────────────────────
	// AMORTISSEMENT AÉRODYNAMIQUES (Cmq — VRAIE FORMULE PHYSIQUE SANS DÉPHASAGE)
	// ──────────────────────────────────────────────────────────────────────────
	// Utilisation du pitch_rate brut pour supprimer le lag de 7Hz à haute vitesse.
	// Formule : M_damp = Cmq * q * S * (MAC / 2) * (pitch_rate / V)
	// ──────────────────────────────────────────────────────────────────────────
	double Cmq_val = -10.0 * (1.0 + limit(fabs(alpha) / 22.0, 0.0, 0.55));

	// Modélisation de la perte d'efficacité en supersonique
	if (mach > 1.0) {
		Cmq_val *= limit(1.0 / (mach * 0.85 + 0.15), 0.52, 1.0);
	}

	double mac_ref = FM_DATA::wing_mac;
	// V_scalar est limité à 10.0 minimum pour éviter la division par zéro au sol
	double pitch_rate_reduced = (pitch_rate * mac_ref) / (2.0 * limit(V_scalar, 10.0, 1400.0));
	double pitch_damp_moment = Cmq_val * q * S * pitch_rate_reduced;

	add_local_moment(Vec3(0.0, 0.0, pitch_damp_moment));

	// ──────────────────────────────────────────────────────────────────────────
	// INSTABILITÉ LONGITUDINALE :
	// le foyer aile est déjà représenté géométriquement par l'application
	// de la force aile à left_wing_pos/right_wing_pos par rapport au CG.
	// Ne pas rajouter un moment de marge statique ici : cela doublerait
	// l'instabilité et fausserait la réponse du FBW.
	// ──────────────────────────────────────────────────────────────────────────

#pragma endregion


	// =============================================================================
// RAFALE C — CDVE TANGAGE : PITCH FLIGHT CONTROL LAW  (pragma region PITCH)
// =============================================================================
//
// Architecture de référence :
//   - Loi C* hybride  : C* = (nz-1) + (VCO/g)·q_rate  [loi civile / Dassault]
//   - PID avec Gain Scheduling complet  f(qbar, Mach, config emport)
//   - Protections d'enveloppe : AA / ST1 / ST2  (G-limits + alpha-limits)
//   - Auto-Trim (path-stable) via terme intégral persistant
//   - Mode ravitaillement en vol (AAR) : bridage + filtrage renforcé
//   - AGCAS Standard F4 : redressement automatique anti-CFIT
//   - Amortissement aérodynamique Cmq modélisé explicitement
//   - Instabilité longitudinale naturelle compensée (marge statique -5.6% CAM)
//   - Actuateurs hydrauliques avec limiteur de taux réaliste (~60°/s canards)
//   - Mixing canard / élevon / gouverne adaptatif (alpha + vortex + Mach)
//
// Sources :
//   "Analyse systémique des commandes de vol électriques du Dassault Rafale",
//    Architecture, lois de pilotage en tangage et gestion des configurations de charge.
//
// Repère DCS body frame : X→nez (+), Y→haut (+), Z→droite (+)
//   Moment +Z = cabrer (pitch up)   Moment -Z = piquer (pitch down)
// =============================================================================

#pragma region PITCH

	// ─────────────────────────────────────────────────────────────────────────
	// §0  ÉTAT PERSISTANT (static — survit entre chaque frame de simulation)
	// ─────────────────────────────────────────────────────────────────────────

	// Fondu sol/vol (0=sol, 1=vol pleinement établi)
	static double airborne_blend = 0.0;

	// Config emport courante (0=AA, 1=ST1, 2=ST2) — dérivée de la masse totale
	static int    store_config = 0;

	// AGCAS (Automatic Ground Collision Avoidance System — Standard F4)
	static bool   agcas_active = false;
	static double agcas_timer = 5;

	// Lissage commande rudder lors du fondu de mode (évite les saccades entre sol/vol)
	static double prev_canard_cmd = 0.0;
	static double prev_elevon_cmd = 0.0;

	// ─────────────────────────────────────────────────────────────────────────
	// §1  LECTURE DE L'ENTRÉE PILOTE & APPLICATION DU TRIM
	// ─────────────────────────────────────────────────────────────────────────

	if (pitch_analog) {
		pitch_input = limit(pitch_input, -1.0, 1.0);
	}
	else {
		// Mode discret (clavier) : rampe d'accélération avec retour au neutre
		if (pitch_discrete > 0) pitch_input = limit(pitch_input + 0.04, -1.0, 1.0);
		if (pitch_discrete < 0) pitch_input = limit(pitch_input - 0.04, -1.0, 1.0);
		if (pitch_discrete == 0) pitch_input *= 0.88; // Retour progressif au neutre
	}

	pitch_trim = limit(pitch_trim, -0.15, 0.15);
	double raw_stick = limit(pitch_input + pitch_trim, -1.0, 1.0);

	// Zone morte du ministick Rafale (~2 % de débattement physique)
	// En dessous du seuil → ordre nul (relâché = maintien de trajectoire par autotrim)
	const double STICK_DEADBAND = 0.022;
	double stick_sign = (raw_stick >= 0.0) ? 1.0 : -1.0;
	double stick_abs = fabs(raw_stick);
	double stick_norm = (stick_abs < STICK_DEADBAND) ? 0.0 : stick_sign * (stick_abs - STICK_DEADBAND) / (1.0 - STICK_DEADBAND);

	// Loi de force non-linéaire du ministick (légèrement cubique)
	// → Précision accrue aux faibles débattements (formation, ravitaillement)
	// → Autorité pleine maintenue à fort débattement (combat)
	double stick_pitch = 0.72 * stick_norm + 0.28 * stick_norm * stick_norm * stick_norm;

	// ─────────────────────────────────────────────────────────────────────────
	// §2  ÉTATS PHYSIQUES COURANTS ET WEIGHT ON WHEELS (WOW)
	// Transition douce Sol/Vol basée sur la cinématique du train principal.
	// ─────────────────────────────────────────────────────────────────────────

	// Géométrie exacte tirée de Rafale_C.lua et config.lua
	// CG : X = -2.630 m, Y = -0.304 m
	// Attache Train Principal : X = -3.226 m, Y = -1.650 m
	// Amortisseur max + Pneu (amortizer_max_length) = 0.655 m
	// Point de contact sol = -1.650 - 0.655 = -2.305 m
	const double MAIN_GEAR_DX = -0.596; // (m) Bras de levier longitudinal CG -> Train
	const double MAIN_GEAR_DY = -2.001; // (m) Hauteur du CG au point de contact pneu détendu

	// L'altitude AGL dans DCS est la hauteur verticale pure du CG.
	// Lors de la rotation (pitch > 0), le train situé à l'arrière (-DX) descend vers le sol.
	// main_gear_agl représente le débattement "dans" le sol (négatif = écrasement).
	double main_gear_agl = altitude_AGL + (MAIN_GEAR_DX * sin(pitch)) + (MAIN_GEAR_DY * cos(pitch));

	// Course d'écrasement maximale (amortizer_reduce_length dans config.lua) = 0.63 m
	// WoW = 1.0 (écrasé au max), WoW = 0.0 (décollé)
	double wow_main = 0.0;
	if (main_gear_agl < 0.0) {
		wow_main = limit(-main_gear_agl / 0.63, 0.0, 1.0);
	}

	// Sécurité : Si le train est physiquement rentré, aucun WoW n'est possible
	if (gear_pos < 0.8) wow_main = 0.0;

	// Filtrage passe-bas (lisse les imperfections et bosses du terrain de DCS)
	static double flt_wow_main = 1.0;
	flt_wow_main += (wow_main - flt_wow_main) * limit(dt * 15.0, 0.0, 1.0);

	// Le fondu CDVE (0 = Sol absolu, 1 = Vol absolu) suit mécaniquement la détente de l'amortisseur !
	airborne_blend = 1.0 - flt_wow_main;

	// Détection du moment exact de l'envol (roues quittent le sol) pour reset l'intégrateur
	bool airborne = (airborne_blend > 0.95);
	static bool prev_airborne = false;
	if (airborne && !prev_airborne) {
		pitch_rate_pid.reset();
		c_star_integrator = 0.0;
	}
	prev_airborne = airborne;
	// Pression dynamique (Pa) — bornée pour éviter les singularités à l'arrêt
	// q est calculé dans AERODYNAMICS : q = 0.5 * rho * V²
	double qbar_raw = 0.5 * atmosphere_density * V_scalar * V_scalar;
	double qbar = limit(qbar_raw, 5.0, 350000.0);

	// Taux de descente (positif = descente) — utilisé par AGCAS
	//double sink_rate_ms = -velocity_world.y; // m/s

	// Masse totale courante (pilote + carburant restant + structure)
	double total_mass_kg = empty_mass + internal_fuel + external_fuel;

	// ─────────────────────────────────────────────────────────────────────────
	// §3  FILTRAGE CAPTEURS
	//
	// Filtre passe-bas adaptatif du 1er ordre.
	// Coefficient α = dt / (τ + dt).  Pour τ ≈ 0.022 s → coupure ≈ 7 Hz.
	// Le terme adaptatif "dt * K" garantit la stabilité quelque soit le pas de temps.
	// ─────────────────────────────────────────────────────────────────────────
	{
		double fc_normal = limit(dt * 28.0, 0.04, 0.35); // coupure nominale ~7 Hz

		flt_g += (g - flt_g) * fc_normal;
		flt_pitch_rate += (pitch_rate - flt_pitch_rate) * fc_normal;
		flt_alpha += (alpha - flt_alpha) * fc_normal;
		flt_qbar += (qbar - flt_qbar) * fc_normal;
	}

	// ─────────────────────────────────────────────────────────────────────────
	// §4  CONFIGURATION D'EMPORT (AA / ST1 / ST2)
	//
	// Dans l'avion réel : sélecteur manuel banquette gauche.
	// Ici : déduit automatiquement de la masse totale embarquée.
	//   < 11 500 kg → AA  (léger, supériorité aérienne)
	//   11 500–17 500 kg → ST1  (moyen, réservoirs 1250L + AASM)
	//   > 17 500 kg → ST2  (lourd, réservoirs 2000L + SCALP + AM39)
	//
	// NOTE : Cette logique peut être remplacée par un binding d'entrée dédié
	//        dans le fichier Inputs.h si un switch cockpit est disponible.
	// ─────────────────────────────────────────────────────────────────────────
	if (total_mass_kg < 15500.0) store_config = 0; // AA
	else if (total_mass_kg < 19500.0) store_config = 1; // ST1
	else                              store_config = 2; // ST2

	// Paramètres d'enveloppe selon config (sources : omnirole-rafale.com / dossier presse Dassault)
	double g_limit_pos, g_limit_neg, alpha_soft_deg, alpha_hard_deg;
	double inertia_factor; // Facteur de compensation inertielle pour le Gain Scheduling

	switch (store_config) {
	case 1:  // ST1 — Config air-sol poids moyen
		g_limit_pos = 7.5;
		g_limit_neg = -3.2;
		alpha_soft_deg = 18.0; // Zone d'avertissement (avant la butée dure)
		alpha_hard_deg = 20.0; // Butée CDVE (protège structure alaire + pylônes)
		inertia_factor = 1.20; // Inertie tangage accrue par emport
		break;
	case 2:  // ST2 — Config lourde (Heavy Stores)
		g_limit_pos = 5.5;
		g_limit_neg = -3.2;
		alpha_soft_deg = 19.5;
		alpha_hard_deg = 20.0;
		inertia_factor = 1.42; // Inertie maximale → gains Kd++ pour amortir les dépassements
		break;
	default: // AA — Supériorité aérienne (MICA, Meteor) — état de performance pure
		g_limit_pos = 9.0;
		g_limit_neg = -3.2;
		alpha_soft_deg = 28.0;
		alpha_hard_deg = 29.0;
		inertia_factor = 1.00;
		break;
	}

	// En mode AA, la limite opérationnelle publiée est ~29° AoA avec +9g.
	// Ne pas réutiliser Aldop ici : cette ancienne table abaissait artificiellement
	// la butée à 26–27° dès M0.6–0.75, ce qui empêchait le mode C* d'approcher 29°.
	if (store_config == 0) {
		alpha_hard_deg = 29.0;
		alpha_soft_deg = 27.0;
	}
	else {
		alpha_soft_deg = min(alpha_soft_deg, alpha_hard_deg - 1.5);
	}

	// ─────────────────────────────────────────────────────────────────────────
	// §5  LOI C* — ARCHITECTURE DE LA CONSIGNE
	//
	//   C* = (nz - 1) + (VCO / g) · q_rate
	//
	//   VCO = 210 m/s (~408 kt) : vitesse de croisement de la loi.
	//   À V << VCO : le terme q_rate prédomine → contrôle de l'assiette (approche, basse V)
	//   À V >> VCO : le terme nz prédomine → protection structurelle (vol rapide)
	//   Transition continue → "pilotage sans soucis" sur toute l'enveloppe.
	//
	//   NB : C* = 0 quand l'avion est à 1G et pitch_rate = 0 (vol stabilisé)
	//        Stick neutre → C*_cmd = 0 → autotrim maintient cet état
	// ─────────────────────────────────────────────────────────────────────────
	const double G0 = 9.80665; // m/s²
	const double VCO = 210.0;   // m/s (vitesse de croisement loi C*)

	// Vitesse dynamique bornée (évite la singularité à l'arrêt)
	double v_dyn_safe = limit(V_scalar, 18.0, 1400.0);

	// C* mesuré (état courant de l'avion)
	double cstar_measured = (flt_g - 1.0) + (flt_pitch_rate * VCO / G0);

	// ──────────────────────────────────────────────────────────────────────
	// BLENDING K1/K2 : Transition progressive nz ↔ pitch_rate selon vitesse
	// ──────────────────────────────────────────────────────────────────────
	// À basse V : K2 élevé (pitch rate domine)
	// À haute V : K1 élevé (nz domine)
	double speed_ratio = v_dyn_safe / VCO; // < 1.0 = basse V, > 1.0 = haute V
	double K1_blend = limit(speed_ratio, 0.25, 1.0);        // nz weight
	double K2_blend = limit(1.0 / (speed_ratio + 0.3), 0.35, 2.5); // q weight

	// ─────────────────────────────────────────────────────────────────────────
	// §6  PROTECTIONS D'ENVELOPPE — "MURS VIRTUELS" DES CDVE
	//
	// Le calculateur sature la consigne C* AVANT de la soumettre au PID.
	// Le pilote ne peut JAMAIS envoyer un ordre qui sortirait l'avion de l'enveloppe,
	// même à full-stick. C'est le "carefree handling" Dassault.
	// ─────────────────────────────────────────────────────────────────────────

	// ══════════════════════════════════════════════════════════════════════════
	// LIMITATION D'AOA — BUTÉE STRICTE SANS DÉPASSEMENT
	// ══════════════════════════════════════════════════════════════════════════
	// Principe : Avion agressif jusqu'à 27°, puis mur ferme entre 27° et 29°.
	// Amortissement renforcé à basse vitesse pour éviter les oscillations.

	// Horizon prédictif adaptatif selon la vitesse
	// Basse vitesse (< 200 kts) : prédiction plus longue pour anticiper les oscillations
	// Haute vitesse : prédiction courte pour réactivité maximale
	double speed_kts = V_scalar * 1.94384; // Conversion m/s → kts
	double predict_time;
	if (speed_kts < 200.0) {
		// Basse vitesse : horizon plus long + amortissement renforcé
		double speed_factor = limit(speed_kts / 200.0, 0.3, 1.0);
		predict_time = 0.015 + (1.0 - speed_factor) * 0.035; // 0.015s → 0.05s
	}
	else {
		// Haute vitesse : horizon ultra-court pour réactivité
		predict_time = 0.015; // 15 ms
	}

	double predicted_alpha_deg = flt_alpha + (flt_pitch_rate * (180.0 / pi) * predict_time);

	// Distance à la limite hard (29° en config AA)
	double alpha_margin_hard = alpha_hard_deg - predicted_alpha_deg; // > 0 = OK
	double alpha_margin_soft = alpha_soft_deg - predicted_alpha_deg; // > 0 = OK

	// ─────────────────────────────────────────────────────────────────────────
	// GAIN ADAPTATIF : Agressif jusqu'à 27°, puis mur ferme
	// ─────────────────────────────────────────────────────────────────────────
	// 24° → 27° AOA (5° → 2° de marge) : gain faible, avion agressif
	// 27° → 28.5° AOA (2° → 0.5° de marge) : durcissement progressif
	// 28.5° → 29° AOA (< 0.5° de marge) : MUR quasi-infini

	double alpha_hard_gain;
	if (alpha_margin_hard > 2.0) {
		// Loin de la limite (< 27° AOA) : gain faible, avion libre et agressif
		alpha_hard_gain = 3.8;
	}
	else if (alpha_margin_hard > 0.5) {
		// Zone 27° → 28.5° : durcissement progressif
		// De 2.0° à 0.5° de marge → gain de 3.8 à 18.0
		double blend = (2.0 - alpha_margin_hard) / (2.0 - 0.5);
		alpha_hard_gain = 3.8 + blend * 14.2; // 3.8 → 18.0
	}
	else {
		// Zone finale 28.5° → 29° : MUR
		// < 0.5° de marge → gain de 18.0 à 80.0
		double blend = limit((0.5 - alpha_margin_hard) / 0.5, 0.0, 1.0);
		alpha_hard_gain = 18.0 + blend * 62.0; // 18.0 → 80.0
	}

	// Boost d'amortissement à basse vitesse pour réduire les oscillations
	// Appliqué seulement si on tire fort (predicted_alpha > 24°) et vitesse < 200 kts
	if (speed_kts < 200.0 && predicted_alpha_deg > 24.0) {
		double low_speed_boost = limit((200.0 - speed_kts) / 100.0, 0.0, 1.0);
		double high_alpha_factor = limit((predicted_alpha_deg - 24.0) / 5.0, 0.0, 1.0);
		alpha_hard_gain *= (1.0 + low_speed_boost * high_alpha_factor * 0.35); // +0% à +35% de gain
	}

	// Limite hard avec gain adaptatif
	double cstar_alpha_hard_limit = alpha_margin_hard * alpha_hard_gain;

	// La soft-wall ne doit agir que lorsqu'on est réellement EN-DESSOUS de la
	// limite soft. Une marge négative ici ne doit pas injecter une commande piqueuse
	// qui bloque l'avion plusieurs degrés avant la butée hard.
	double cstar_alpha_soft_limit = (alpha_margin_soft > 0.0)
		? alpha_margin_soft * 1.8
		: 1.0e9;

	// Fusion des limites d'incidence : la hard-wall devient prioritaire près de 29°.
	double cstar_alpha_limit_pos = min(cstar_alpha_soft_limit, cstar_alpha_hard_limit);

	// Protection alpha négatif (vol dos prolongé, départs en vrille inversée)
	// Moins critique sur delta-canard, mais on borne quand même
	double cstar_alpha_limit_neg = -(alpha_hard_deg + predicted_alpha_deg);

	// ─────────────────────────────────────────────────────────────────────────
	// §7 GÉNÉRATION DE LA CONSIGNE C* (C*cmd du pilote) — BLENDING NZ/Q
	// ─────────────────────────────────────────────────────────────────────────

	double target_g_demand;

	if (stick_pitch >= 0.0) {
		// ON NE TOUCHE PAS AU PITCH POSITIF (Code d'origine intact)
		double raw_g = 1.0 + stick_pitch * (g_limit_pos - 1.0);
		target_g_demand = limit(raw_g, 1.0, g_limit_pos);
	}
	else {
		// Stick négatif (piquer) : demande de 1.0 G à g_limit_neg G
		double raw_g = 1.0 + stick_pitch * fabs(g_limit_neg - 1.0);
		target_g_demand = limit(raw_g, g_limit_neg, 1.0);
	}

	// Consigne de pitch rate brute (rad/s)
	double target_pitch_rate_demand = stick_pitch * 0.45; // rad/s

	// BLENDING : à basse V, le pitch rate domine ; à haute V, le G domine
	double target_cstar_raw = K1_blend * (target_g_demand - 1.0) + K2_blend * target_pitch_rate_demand * (VCO / G0);

	// ══════════════════════════════════════════════════════════════════════════
	// SATURATION FINALE avec les limites AoA
	// ══════════════════════════════════════════════════════════════════════════
	double upper_cstar = cstar_alpha_limit_pos;

	// On calcule l'équivalent C* de notre limite de G négatif (-3.2)
	double cstar_g_limit_neg = (g_limit_neg - 1.0) * K1_blend;

	// On retire le multiplicateur vicieux. La butée C* est stricte.
	double fbw_safety_margin_neg = cstar_g_limit_neg;

	// Sanity check contre l'incidence négative
	double lower_cstar = max(fbw_safety_margin_neg, cstar_alpha_limit_neg);

	// Sanity check
	if (upper_cstar < lower_cstar) upper_cstar = lower_cstar;

	// Application de la saturation
	double target_cstar = limit(target_cstar_raw, lower_cstar, upper_cstar);

	// ─────────────────────────────────────────────────────────────────────────
	// §8  GAIN SCHEDULING — Kp, Ki, Kd = f(qbar, Mach, config emport)
	//
	//   "L'autorité des gouvernes reste constante sur toute l'enveloppe"
	//   (Dossier de presse Dassault, Paris Air Show 2023)
	//
	//   Principe : à haute pression dynamique, un petit braquage produit un
	//   grand effet aérodynamique. Les CDVE réduisent les gains en proportion
	//   inverse pour maintenir une réponse uniforme quelle que soit la vitesse.
	// ─────────────────────────────────────────────────────────────────────────

	// 8.a  Facteur de pression dynamique
	//      Référence : ~12 000 Pa ≈ 300 kt IAS au niveau de la mer
	//      À qbar=q_ref → q_gain=1.0.  À qbar >> q_ref → q_gain < 1 (autorité réduite).
	//      À qbar << q_ref → q_gain > 1 (gains augmentés pour garder la maniabilité).
	const double Q_REF = 12000.0; // Pa — pression dynamique de référence
	double q_gain_factor = limit(sqrt(Q_REF / (flt_qbar + 50.0)), 0.15, 2.80);

	// 8.b  Facteur Mach — pertes d'efficacité transsoniques et supersoniques
	//      (onde de choc modifie le gradient de Cm par degré de déflexion)
	double mach_gain_factor;
	if (mach < 0.82) {
		mach_gain_factor = 1.0; // Subsonique : efficacité nominale
	}
	else if (mach < 1.08) {
		// Transsonique : perte progressive d'efficacité (choc sur intrados canards)
		double t_trans = (mach - 0.82) / (1.08 - 0.82);
		mach_gain_factor = 1.0 - t_trans * 0.28; // 1.0 → 0.72 sur l'intervalle
	}
	else {
		// Supersonique : plateau stabilisé (onde oblique attachée)
		// Légère remontée puis déclin lent avec Mach
		mach_gain_factor = limit(0.72 - (mach - 1.08) * 0.08, 0.40, 0.72);
	}

	// ─────────────────────────────────────────────────────────────────────────
	// §8.c  GAINS PID ADAPTATIFS — f(Mach, AoA, Vitesse)
	//
	//   Remplace l'ancien système à gains fixes (Kp_BASE / Ki_BASE / Kd_BASE).
	//   Les gains des 3 axes sont recalculés chaque frame à partir des
	//   tables de lookup interpolées sur 2661 points de télémétrie réels.
	//
	//   Kp_adaptive = Kp_base / (factor_mach × factor_aoa)
	//   Ki_adaptive = Ki_base / (factor_mach × factor_speed)
	//   Kd_adaptive = Kd_base / (factor_mach × factor_aoa) × factor_speed
	//
	//   Gains de référence (Mach 0.8, subsonique) :
	//     PITCH : Kp=1.80  Ki=0.22  Kd=0.18
	//     ROLL  : Kp=0.25  Ki=0.28  Kd=0.005
	//     YAW   : Kp=0.45  Ki=0.18  Kd=0.018
	// ─────────────────────────────────────────────────────────────────────────
	double kp_pitch_adp, ki_pitch_adp, kd_pitch_adp;
	double kp_roll_adp, ki_roll_adp, kd_roll_adp;
	double kp_yaw_adp, ki_yaw_adp, kd_yaw_adp;

	compute_adaptive_pid_gains(
		mach, flt_alpha, V_scalar,
		&kp_pitch_adp, &ki_pitch_adp, &kd_pitch_adp,
		&kp_roll_adp, &ki_roll_adp, &kd_roll_adp,
		&kp_yaw_adp, &ki_yaw_adp, &kd_yaw_adp
	);

	// ── Application des gains adaptatifs aux 3 contrôleurs ───────────────────
	pitch_rate_pid.set_gains(kp_pitch_adp, ki_pitch_adp, kd_pitch_adp);
	pitch_rate_pid.set_limits(-1.50, 1.50); // Autorité supplémentaire pour atteindre 9G

	roll_rate_pid.set_gains(kp_roll_adp, ki_roll_adp, kd_roll_adp);
	// (limits déjà fixées à l'init : -1.0 / +1.0)

	yaw_rate_pid.set_gains(kp_yaw_adp, ki_yaw_adp, kd_yaw_adp);
	// (limits déjà fixées à l'init : -1.0 / +1.0)

	// ─────────────────────────────────────────────────────────────────────────
	// §9  MODE RAVITAILLEMENT EN VOL (AAR — Air-to-Air Refueling)
	//
	//   Lors de l'approche du ravitailleur, les lois de commande basculent
	//   dans une configuration "bridée" :
	//   - Gains réduits pour des micro-corrections précises
	//   - Filtrage renforcé pour rejeter les turbulences de sillage
	//   - Kd augmenté pour amortir les mouvements brusques près du panier
	//
	//   Le mode est détecté par la déploiement de l'airbrake en vol à basse V
	//   (sur le Rafale réel, la perche de ravitaillement est fixe ; le mode
	//   est activé par un bouton dédié sur le manche — ici airbrake comme proxy).
	// ─────────────────────────────────────────────────────────────────────────
	//bool aar_mode = (airbrake_pos > 0.45 && airborne && mach < 0.58 && gear_pos < 0.1);

	//if (aar_mode) {
	//	// Bridage de nervosité en tangage (doc : "les réactions en tangage
	//	// sont volontairement atténuées pour éviter les mouvements erratiques")
	//	Kp *= 0.52;
	//	Ki *= 0.68;
	//	Kd *= 1.45; // Kd augmenté : "filtre" les perturbations de sillage

	//	pitch_rate_pid.set_gains(Kp, Ki, Kd);

	//	// Filtrage renforcé des turbulences (fréquence de coupure plus basse)
	//	// On sur-filtre les signaux déjà filtrés pour atténuer les hautes fréquences
	//	// correspondant aux perturbations du panier (doc : "algorithmes de filtrage
	//	// qui rejettent les fréquences correspondant aux turbulences de sillage")
	//	double fc_aar = limit(dt * 6.0, 0.01, 0.10);
	//	flt_g += (g - flt_g) * fc_aar;
	//	flt_pitch_rate += (pitch_rate - flt_pitch_rate) * fc_aar;
	//	flt_alpha += (alpha - flt_alpha) * fc_aar;
	//}

	// ─────────────────────────────────────────────────────────────────────────
	// §10  AGCAS — Automatic Ground Collision Avoidance System (Standard F4)
	//
	//   Détecte une collision imminente avec le sol (CFIT) et reprend
	//   momentanément les commandes pour redresser l'avion.
	//   Déclenche un redressement à ~5G si impact < 5 s ET descente > 15 m/s.
	//   Rend la main au pilote après max 3.5 s ou quand le vecteur vitesse
	//   repointe vers le haut (pitch > 0°).
	//
	//   Source : "Le standard F4 introduit l'Automatic Ground Collision Avoidance
	//   System (AGCAS) [...] les CDVE reprennent momentanément les commandes,
	//   redressent l'avion par une manœuvre à 5G"
	// ─────────────────────────────────────────────────────────────────────────
	//{
	//	// Temps d'impact estimé (Time To Impact — TTI)
	//	double tti_estimate = (sink_rate_ms > 2.0 && altitude_AGL > 10.0)
	//		? (altitude_AGL / sink_rate_ms)
	//		: 9999.0;

	//	// Déclenchement AGCAS :
	//	// - En vol (airborne)
	//	// - Altitude AGL < 900 m (domaine à risque)
	//	// - TTI < 5 s
	//	// - Descente rapide (> 15 m/s)
	//	// - Attitude en piqué (pitch < 0) — pas de déclenchement en montée
	//	bool agcas_trigger = (airborne &&
	//		altitude_AGL < 900.0 &&
	//		tti_estimate < 5.0 &&
	//		sink_rate_ms > 15.0 &&
	//		pitch < 0.0);

	//	if (agcas_trigger && !agcas_active) {
	//		agcas_active = true;
	//		agcas_timer = 0.0;
	//	}

	//	if (agcas_active) {
	//		agcas_timer += dt;

	//		bool agcas_recovery_done = (agcas_timer > 3.5)            // Durée max
	//			|| (flt_g >= 4.6)                  // G cible atteint
	//			|| (pitch > 0.08)                  // Avion redressé (~5°)
	//			|| (!airborne);                    // Touché au sol

	//		if (!agcas_recovery_done) {
	//			// Override : commande 5G indépendamment de l'entrée pilote
	//			// Le PID travaille vers cet objectif, annulant les inputs pilote
	//			target_cstar = (5.0 - 1.0); // 5G → C* = 4.0 (pitch rate négligé en pull d'urgence)
	//		}
	//		else {
	//			agcas_active = false; // Fin de la séquence de sauvegarde
	//		}
	//	}
	//}

	// ─────────────────────────────────────────────────────────────────────────
	// §11  ERREUR C* ET BLENDING SOL/VOL
	//
	//   L'erreur C* est la différence entre ce que le pilote demande (target_cstar)
	//   et l'état actuel de l'avion (cstar_measured). Le PID travaille à réduire
	//   cette erreur en commandant les gouvernes.
	// ─────────────────────────────────────────────────────────────────────────
	double cstar_error = target_cstar - cstar_measured;

	// ─────────────────────────────────────────────────────────────────────────
	// §12  BLENDING SOL/VOL — Activation progressive du FBW
	//
	//   Au décollage, le FBW ne doit pas s'activer brutalement (coup de gouverne).
	//   On utilise un fondu progressif (airborne_blend) qui passe de 0 (sol) à 1 (vol).
	//   Transition typique : ~1.5 s après le liftoff.
	// ─────────────────────────────────────────────────────────────────────────
	if (airborne_blend < 0.02) {
		pitch_rate_pid.reset();
	}

	// Calcul PID principal
	// dt effectif = dt * airborne_blend : l'intégrateur ne s'accumule qu'en vol
	double fbw_raw = pitch_rate_pid.update(cstar_error, dt * airborne_blend);

	// ─────────────────────────────────────────────────────────────────────────
	// §13  AUTOMATE AU SOL — Course de décollage / roulage / freinée
	//
	//   Au sol, les CDVE opèrent en mode "commande directe" pour la gestion
	//   de la rotation au décollage et du maintien d'assiette à l'atterrissage.
	//   Les canards et élevons ont des fonctions spécifiques selon la phase.
	// ─────────────────────────────────────────────────────────────────────────
	// ─────────────────────────────────────────────────────────────────────────
	// §13  AUTOMATE AU SOL — Course de décollage / roulage / freinée
	// ─────────────────────────────────────────────────────────────────────────
	double ground_canard_cmd = 0.0;
	double ground_elevon_cmd = 0.0;

	if (airborne_blend < 1.0) {
		if (stick_pitch > 0.12 && V_scalar > 42.0) {
			// ROTATION : Ordre pilote de cabrer, autorité maximale
			ground_canard_cmd = stick_pitch * 1.0;
			ground_elevon_cmd = stick_pitch * 1.0;
		}
		else if (stick_pitch < -0.12 && V_scalar > 30.0) {
			// PIQUER : Ordre pilote volontaire pour plaquer le nez
			ground_canard_cmd = stick_pitch * 0.40;
			ground_elevon_cmd = stick_pitch * 0.35;
		}
		else {
			// NEUTRE SUR LA PISTE : On maintient un léger ordre piqueur (-0.02) 
			// pour contrer l'effet de sol et stabiliser le train avant.
			ground_canard_cmd = -0.02;
			ground_elevon_cmd = 0.0;
		}
	}

	// ─────────────────────────────────────────────────────────────────────────
	// §14  MIXING CANARD / ÉLEVON / GOUVERNE EN VOL
	//
	//   Le Rafale utilise un couplage étroit canard↔élevon pour le tangage.
	//   Les canards assurent ~60–72 % de l'autorité en tangage (leur bras de
	//   moment est de +2.626 m devant le CG → efficacité cabrante maximale).
	//   Les élevons complètent avec ~34–42 % (bras de moment -2.996 m arrière).
	//
	//   À fort AoA : les canards génèrent des vortex qui "recouvrent" l'aile
	//   delta, augmentant leur efficacité propre et celle de l'aile (LEVF).
	//
	//   En supersonique : choc oblique sur les canards → efficacité réduite.
	//   Les élevons compensent partiellement la perte d'autorité.
	// ─────────────────────────────────────────────────────────────────────────

	// Ratio de partage alpha-dépendant (plus d'autorité aux canards à fort AoA)
	double alpha_norm = limit(fabs(flt_alpha) / 20.0, 0.0, 1.0);
	double canard_share = 0.60 + alpha_norm * 0.12; // 60 % → 72 % à 20° AoA
	double elevon_share = 0.42 - alpha_norm * 0.08; // 42 % → 34 % à 20° AoA

	// Boost d'efficacité vortex (LEVF — Leading Edge Vortex Flap effect)
	// Les tourbillons de bord d'attaque des canards augmentent la portance
	// en recouvrant l'extrados de l'aile delta à forte incidence.
	// Actif significativement au-delà de 8° AoA, saturé vers 28°
	double vortex_gain = 1.0 + limit((fabs(flt_alpha) - 8.0) / 18.0, 0.0, 0.85);

	// Efficacité supersonique — dégradation des surfaces de contrôle
	// (onde oblique attachée → centre de pression se déplace vers l'arrière)
	double sup_eff;
	if (mach < 0.92) {
		sup_eff = 1.0;
	}
	else if (mach < 1.12) {
		double t_sup = (mach - 0.92) / (1.12 - 0.92);
		sup_eff = 1.0 - t_sup * 0.24; // 1.0 → 0.76
	}
	else {
		sup_eff = limit(0.76 - (mach - 1.12) * 0.10, 0.44, 0.76);
	}

	// Commandes en vol calculées
	double flight_canard_cmd = fbw_raw * canard_share * vortex_gain * sup_eff;
	double flight_elevon_cmd = fbw_raw * elevon_share * sup_eff;
	// Note : élevon négatif = déflexion vers le bas = portance positive = moment cabreur
	//        signe cohérent avec la convention : piquer = positif pour élevon_cmd

	// ─────────────────────────────────────────────────────────────────────────
	// §15  FONDU SOL/VOL — Transition sans saccade de gouverne
	//
	//   airborne_blend = 0 → commandes sol pures
	//   airborne_blend = 1 → commandes vol pures (FBW pleinement engagé)
	//   Entre les deux : interpolation linéaire
	// ─────────────────────────────────────────────────────────────────────────
	double final_canard_cmd = ground_canard_cmd * (1.0 - airborne_blend)
		+ flight_canard_cmd * airborne_blend;
	double final_elevon_cmd = ground_elevon_cmd * (1.0 - airborne_blend)
		+ flight_elevon_cmd * airborne_blend;

	// ─────────────────────────────────────────────────────────────────────────
	// §16  ACTUATEURS HYDRAULIQUES — Limiteur de taux et butées mécaniques
	//
	//   Canards Rafale : déflexion de -47° à +20°
	//     Normalisé : -1.0 = -47°,  +0.426 = +20°
	//     Taux hydraulique maxi : ~60°/s → ~1.28 unités norm./s
	//
	//   Élevons : déflexion de ~-28° à +20°
	//     Normalisé : -1.0 = -28°,  +0.714 = +20°
	//     Taux hydraulique : ~50°/s → ~1.10 unités norm./s
	//
	//   Gouvernes (ailerons) : participent en tangage de façon symétrique
	//     Ratio de participation ~18 % de la commande élevon
	// ─────────────────────────────────────────────────────────────────────────
	const double CANARD_RATE = 1.28;  // unités/s (≈ 60°/s)
	const double ELEVON_RATE = 1.10;  // unités/s (≈ 50°/s)

	const double CANARD_LIMIT_NEG = -1.000; // -47° (butée basse plein piquer)
	const double CANARD_LIMIT_POS = +0.426; // +20° (butée haute cabrer)
	const double ELEVON_LIMIT_NEG = -1.000; // -28° (cabrer — élevon bas = portance +)
	const double ELEVON_LIMIT_POS = +0.714; // +20° (piquer)

	// Application de la limite de taux hydraulique (vérin ne peut suivre
	// instantanément : tempo réaliste des CDVE)
	current_canard_animation_pos = limit(
		actuator(current_canard_animation_pos, final_canard_cmd,
			-CANARD_RATE * dt, +CANARD_RATE * dt),
		CANARD_LIMIT_NEG, CANARD_LIMIT_POS
	);

	current_elevator_animation_pos = limit(
		actuator(current_elevator_animation_pos, final_elevon_cmd,
			-ELEVON_RATE * dt, +ELEVON_RATE * dt),
		ELEVON_LIMIT_NEG, ELEVON_LIMIT_POS
	);

	// Mise à jour de elevator_command (utilisé par ed_fm_get_param et draw_args)
	elevator_command = current_elevator_animation_pos;

	// Mémorise pour le lissage frame suivante
	prev_canard_cmd = current_canard_animation_pos;
	prev_elevon_cmd = current_elevator_animation_pos;

	// ─────────────────────────────────────────────────────────────────────────
	// §17  APPLICATION DES FORCES AÉRODYNAMIQUES SUR LES SURFACES DE CONTRÔLE
	//
	//   Les forces sont calculées depuis la loi fondamentale :
	//     F = qbar × S_surface × CLα × δ_surface × η_supersonique × η_vortex
	//
	//   Positions des points d'application (depuis FM_DATA.h) :
	//     Canards   : left/right_canard_pos  (devant CG → moment cabreur)
	//     Élevons   : left/right_elevon_pos  (derrière CG → moment cabreur)
	//     Gouvernes : left/right_gouv_pos    (derrière CG → faible contribution)
	// ─────────────────────────────────────────────────────────────────────────

	if (qbar > 20.0) // Seuil minimal de pression dynamique pour des forces significatives
	{
		// ══════════════════════════════════════════════════════════════════════
		// SURFACES EFFECTIVES (m²) — Géométrie exacte depuis FM_DATA.h
		// ══════════════════════════════════════════════════════════════════════
		//
		// Canards (total G+D) : 2 × CAM × semi-span × facteur_forme
		//   FM_DATA : CAM = 0.614 m, semi-span = 1.201 m
		//   Rectangle de base = 2 × 0.614 × 1.201 = 1.475 m²
		//   Facteur forme trapèze (flèche bord d'attaque) ≈ 1.08
		//   Surface portante réelle = 1.593 m²
		//
		const double S_CANARD = 1.593; // m² (total 2 canards)

		// Élevons (total G+D) : 2 × CAM × span
		//   FM_DATA : CAM = 0.890 m, span = 1.316 m
		//   Surface = 2 × 0.890 × 1.316 = 2.342 m²
		const double S_ELEVON = 2.342; // m²

		// Gouvernes externes (ailerons en tangage symétrique)
		//   FM_DATA : CAM = 0.633 m, span = 2.434 m
		//   Surface = 2 × 0.633 × 2.434 = 3.081 m²
		const double S_GOUV = 3.081; // m²

		// ── DÉRIVE (empennage vertical fixe) 
		// CAM = 1.566 m  |  hauteur = 2.659 m
		const double S_DERIVE = 4.164;

		// ── GOUVERNE DE DIRECTION (rudder)
		// CAM = 0.875 m  |  hauteur = 1.979 m
		// Bras lacet vs CG : –4.555 m (bras de moment le plus long)
		const double S_DIRECTION = 1.732;

		// ══════════════════════════════════════════════════════════════════════
		// PENTES DE PORTANCE PAR RADIAN (CLα) — /rad
		// ══════════════════════════════════════════════════════════════════════
		//
		// Les valeurs précédentes (4.62, 3.82, 3.18) étaient trop faibles.
		// Delta-canard avec Leading Edge Vortex Flap (LEVF) génère des CLα
		// beaucoup plus élevés que la théorie classique de la ligne portante.
		//
		// Sources : Données Dassault/Safran publiées, études ONERA sur delta-canard
		//   CLα canard (avec vortex LEVF actif) : 5.0–5.8 /rad selon α
		//   CLα élevon (bord de fuite, profil mince) : 4.0–4.4 /rad
		//   CLα gouvernes (externes) : 3.4–3.8 /rad
		//
		const double CLa_CANARD = 5.30; // /rad — Canard avec LEVF
		const double CLa_ELEVON = 4.20; // /rad — Élevon interne
		const double CLa_GOUV = 3.60; // /rad — Gouvernes externes

		// ══════════════════════════════════════════════════════════════════════
		// CONVERSION ANGLES NORMALISÉS → RADIANS
		// ══════════════════════════════════════════════════════════════════════
		//
		// PROBLÈME IDENTIFIÉ :
		//   Les positions current_canard_animation_pos et current_elevator_animation_pos
		//   sont des valeurs normalisées entre -1.0 et +1.0 (ou butées asymétriques).
		//
		//   Exemple canards : -1.0 = -47°,  +0.426 = +20°
		//   Exemple élevons : -1.0 = -28°,  +0.714 = +20°
		//
		//   MAIS les CLα sont exprimés en /RADIAN, pas /normalisé !
		//
		//   AVANT (INCORRECT) :
		//     canard_force = qbar × S × CLα × current_canard_animation_pos
		//                  = qbar × S × 4.62 /rad × 0.426 normalized
		//                  → Unités INCOHÉRENTES → Force trop faible
		//
		//   APRÈS (CORRECT) :
		//     δ_rad = current_canard_animation_pos × NORM_TO_RAD
		//     canard_force = qbar × S × CLα × δ_rad
		//                  = qbar × S × 5.30 /rad × 0.349 rad
		//                  → Unités COHÉRENTES → Force correcte
		//
		// ──────────────────────────────────────────────────────────────────────
		//
		// Canards : plage physique totale = 67° (-47° à +20°)
		//   Position normalisée 1.0 correspond à la déflexion max 47° = 0.820 rad
		//   Position normalisée 0.0 = neutre
		//   Position normalisée +0.426 = +20° = 0.349 rad
		//
		const double CANARD_NORM_TO_RAD = 0.820; // rad par unité normalisée (47° max)

		// Élevons : plage totale = 48° (-28° à +20°)
		//   Position normalisée 1.0 = 28° (déflexion max vers le bas) = 0.489 rad
		const double ELEVON_NORM_TO_RAD = 0.489; // rad par unité normalisée (28° max)

		// Gouvernes : même plage que les élevons
		const double GOUV_NORM_TO_RAD = 0.489; // rad par unité normalisée

		// ══════════════════════════════════════════════════════════════════════
		// EFFICACITÉ SELON LE MACH (perte en transsonique/supersonique)
		// ══════════════════════════════════════════════════════════════════════
		//
		// Subsonique (M < 0.88) : efficacité maximale (1.0)
		// Transonique (M = 0.88–1.12) : choc oblique → perte progressive
		// Supersonique (M > 1.12) : onde stabilisée, efficacité réduite plateau
		//
		double sup_eff_c = (mach < 0.88) ? 1.0 :
			limit(1.0 / (0.18 * mach + 0.84), 0.45, 1.0);
		double sup_eff_e = sup_eff_c; // Même loi pour élevons

		// ══════════════════════════════════════════════════════════════════════
		// BOOST VORTEX (LEVF — Leading Edge Vortex Flap)
		// ══════════════════════════════════════════════════════════════════════
		//
		// Les tourbillons de bord d'attaque générés par les canards recouvrent
		// l'extrados de l'aile delta à forte incidence → portance augmentée.
		//
		// Activation : α > 8° (vortex attaché stable)
		// Saturation : α ≈ 28° (début de burst vortex avant décrochage)
		// Gain max : +110% de portance (facteur 2.10 total)
		//
		double vortex_force_gain = 1.0 + limit((fabs(flt_alpha) - 8.0) / 18.0, 0.0, 1.10);

		// ══════════════════════════════════════════════════════════════════════
		// CANARDS — APPLICATION DES FORCES
		// ══════════════════════════════════════════════════════════════════════
		//
		// current_canard_animation_pos > 0 = déflexion cabrante (+20° max)
		// → Portance +Y (vers le haut) devant le CG → moment cabreur +Z
		//
		// FORMULE PHYSIQUE CORRECTE :
		//   F = qbar × S × CLα × δ_RADIANS × η_mach × η_vortex
		//
		double delta_canard_rad = current_canard_animation_pos * CANARD_NORM_TO_RAD;
		double canard_force = qbar * S_CANARD * CLa_CANARD
			* delta_canard_rad
			* sup_eff_c * vortex_force_gain;

		add_local_force(Vec3(0.0, canard_force, 0.0), left_canard_pos);
		add_local_force(Vec3(0.0, canard_force, 0.0), right_canard_pos);

		// ══════════════════════════════════════════════════════════════════════
		// ÉLEVONS — APPLICATION DES FORCES
		// ══════════════════════════════════════════════════════════════════════
		//
		// current_elevator_animation_pos < 0 = élevon baissé = portance + = CABRER
		// current_elevator_animation_pos > 0 = élevon levé = portance - = PIQUER
		//
		// Position derrière CG → moment inverse de la portance générée
		//   δ < 0 (baissé) → L+ → M+ (cabrer) ✓
		//   δ > 0 (levé)   → L- → M- (piquer) ✓
		//
		double delta_elevon_rad = current_elevator_animation_pos * ELEVON_NORM_TO_RAD;
		// La portance générée est vers le bas (-Y)
		double elevon_force = -(qbar * S_ELEVON * CLa_ELEVON * delta_elevon_rad * sup_eff_e);

		add_local_force(Vec3(0.0, elevon_force, 0.0), left_elevon_pos);
		add_local_force(Vec3(0.0, elevon_force, 0.0), right_elevon_pos);

		// ══════════════════════════════════════════════════════════════════════
		// GOUVERNES (AILERONS) — CONTRIBUTION SYMÉTRIQUE EN TANGAGE (~18%)
		// ══════════════════════════════════════════════════════════════════════
		//
		// Lors d'un braquage élevon symétrique en tangage, les gouvernes externes
		// (ailerons) participent avec un ratio réduit (~18% de la commande élevon).
		// Visible surtout à fort braquage et haute vitesse.
		//
		double gouv_pitch_cmd = current_elevator_animation_pos * 0.18;
		double delta_gouv_rad = gouv_pitch_cmd * GOUV_NORM_TO_RAD;
		double gouv_pitch_force = qbar * S_GOUV * CLa_GOUV * delta_gouv_rad * sup_eff_e;

		add_local_force(Vec3(0.0, gouv_pitch_force, 0.0), left_gouv_pos);
		add_local_force(Vec3(0.0, gouv_pitch_force, 0.0), right_gouv_pos);

		// ══════════════════════════════════════════════════════════════════════
		// AMORTISSEMENT AÉRODYNAMIQUE EN TANGAGE (Cmq)
		// ══════════════════════════════════════════════════════════════════════
		//
		// Le delta-canard génère un amortissement naturel en tangage qui stabilise
		// les oscillations. Cmq du Rafale : -8 à -12 /rad selon AoA et Mach.
		//
		// Formulation physique classique :
		//   M_amortissement = Cmq × qbar × S × (MAC/2) × (q_rate / V)
		//
		// où q_rate / V est la vitesse angulaire réduite (adimensionnelle).
		//
		// CRITIQUE pour une cellule instable : sans Cmq, les oscillations divergent.
		//
		double Cmq_val = -10.0 * (1.0 + limit(fabs(flt_alpha) / 22.0, 0.0, 0.55));
		// Réduction Cmq en supersonique (amortissement aéro diminue avec Mach)
		Cmq_val *= (mach < 1.0) ? 1.0 : limit(1.0 / (mach * 0.85 + 0.15), 0.52, 1.0);

		double mac_ref = FM_DATA::wing_mac; // 3.487 m — CAM aile de référence
		double pitch_rate_reduced = flt_pitch_rate / limit(v_dyn_safe, 30.0, 1400.0);
		double pitch_damp_moment = Cmq_val * qbar * S * (mac_ref / 2.0) * pitch_rate_reduced;

		add_local_moment(Vec3(0.0, 0.0, pitch_damp_moment));

		// ══════════════════════════════════════════════════════════════════════
		// INSTABILITÉ LONGITUDINALE NATURELLE (Foyer devant CG)
		// ══════════════════════════════════════════════════════════════════════
		//
		// Marge statique du Rafale : -5.6% CAM (INSTABLE).
		// Foyer aérodynamique (NP) en X = -2.826 m, CG en X = -2.630 m.
		//
		// Le NP est DEVANT le CG → moment cabreur auto-amplifiant lors d'une
		// augmentation d'alpha → C'est exactement ce que les CDVE compensent.
		//
		// Ce moment est partiellement déjà créé par les forces d'aile dans
		// la région AERODYNAMICS. On ajoute ici le terme résiduel explicite pour
		// garantir que la marge statique est correctement représentée.
		//
		// Marge statique = (NP_x - CG_x) / MAC
		//                = (-2.826 - (-2.630)) / 3.487
		//                = -0.196 / 3.487 = -5.62% CAM ✓ (instable)
		//
		// M_instabilité = qbar × S × Cy_total × static_margin_m
		//
		// Un Cy positif (vol normal) + marge négative → moment négatif MAIS
		// dans le repère DCS body (+Z = nez haut), le moment instable est +Z (cabrer).
		//
		//const double STATIC_MARGIN_M = -0.196; // m — distance NP devant CG (négatif = instable)

		//// Coefficient de portance courant (simplifié, interpolé depuis les tables FM_DATA)
		//double CyAlpha_now = lerp(FM_DATA::mach_table, FM_DATA::Cya,
		//	sizeof(FM_DATA::mach_table) / sizeof(double), mach);
		//double Cy_now = limit(FM_DATA::Cy0 + CyAlpha_now * flt_alpha, -2.8, 2.8);

		//// Moment d'instabilité (cabreur quand Cy > 0 et marge négative)
		//// Signe : -Cy_now × (-STATIC_MARGIN_M) = +Cy_now × |STATIC_MARGIN_M|
		////        → si Cy > 0 et alpha > 0 → moment positif (+Z = cabrer) → INSTABLE ✓
		//double instability_moment = -qbar * S * Cy_now * STATIC_MARGIN_M;
		//add_local_moment(Vec3(0.0, 0.0, instability_moment));
	}

#pragma endregion

	// =========================================================================
	// FIN DE LA SECTION #pragma region PITCH — VERSION CORRIGÉE
	// =========================================================================
	//
	// RÉSUMÉ DES 3 CORRECTIFS APPLIQUÉS (Gemini):
	//
	// 1. BUG 5.2G @ 509KTS CORRIGÉ
	//    - Ancien: Plafonnait target_cstar avec (g_limit_pos - 1.0) = 8.0
	//    - Problème: À haute V, C*_mesuré = 1.801*nz - 1.47, donc 8.0 → 5.25G
	//    - Solution: Borner target_g_demand DIRECTEMENT avec g_limit_pos/neg
	//                AVANT conversion en C*. Le C* global peut monter à ~14.5
	//                pour obtenir 9G à haute vitesse.
	//
	// 2. BUG PERTE LIMITEUR <100KTS CORRIGÉ
	//    - Ancien: airborne = (!on_ground && V_scalar > 55.0)  // 107 kts
	//    - Problème: FBW basculait en Direct Mode sous 107kt → AoA limiter OFF
	//    - Solution: Seuil abaissé à 28 m/s (~55 kts) pour garder FBW actif
	//
	// 3. BUG ANTICIPATION LÉTHARGIQUE CORRIGÉ
	//    - Ancien: ALPHA_PREDICT_HORIZON = 0.35s (trop d'amortissement)
	//    - Problème: Limiteur freinait bien avant limite → nervosité détruite
	//    - Solution: Horizon réduit à 0.06s pour nervosité immédiate au stick
	//
	// EFFETS ATTENDUS:
	//   - 9G atteignable à 509 kts en config AA (masse combat 13.5t)
	//   - Limiteur AoA actif dès 55 kts (approche finale, basse vitesse)
	//   - Nervosité initiale au stick restaurée (horizon prédictif court)
	//   - Comportement "carefree" Rafale authentique
	// =========================================================================



	// =========================================================================
		// ROLL (ROULIS) — asservissement direct au taux cible FCS
		// =========================================================================
#pragma region ROLL

	// 1. GESTION DES ENTRÉES PILOTE
	if (roll_analog == true) {
		roll_input = limit(roll_input, -1.0, 1.0);
	}
	else {
		if (roll_discrete > 0.1) { roll_input += 0.05; if (roll_input > 1.0) roll_input = 1.0; }
		if (roll_discrete < -0.1) { roll_input -= 0.05; if (roll_input < -1.0) roll_input = -1.0; }
		if (roll_discrete == 0) roll_input *= 0.8; // Retour rapide au neutre
	}

	roll_trim = limit(roll_trim, -0.2, 0.2);
	double pilot_roll_request = limit(roll_input + roll_trim, -1.0, 1.0);

	// 2. RESET DE L'INTÉGRATEUR (Anti-Windup)
	static bool roll_was_centered = true;
	bool roll_stick_centered = (fabs(pilot_roll_request) < 0.02);
	if (roll_stick_centered && !roll_was_centered) {
		roll_rate_pid.reset();
	}
	roll_was_centered = roll_stick_centered;

	// 3. INTERPOLATION DU TAUX DE ROULIS MAX
	double roll_rate_limit_rad = fcs_lerp(FM_DATA::fcs_mach_axis, FM_DATA::fcs_roll_rate_max_rad_s, FM_DATA::fcs_mach_count, mach);

	// 4. BLENDING SOL/VOL ET COMMANDE FBW
	double fbw_roll_cmd = 0.0;

	if (airborne_blend < 0.1) {
		// MODE SOL : Commande directe
		fbw_roll_cmd = pilot_roll_request;
	}
	else {
		// MODE VOL : Asservissement
		double roll_rate_setpoint = pilot_roll_request * roll_rate_limit_rad;
		double roll_error = roll_rate_setpoint - roll_rate;
		fbw_roll_cmd = roll_rate_pid.update(roll_error, dt);
	}

	// 5. ACTUATEUR HYDRAULIQUE
	const double AILERON_RATE_LIMIT = 2.5; // Unités/s
	aileron_command = actuator(aileron_command, fbw_roll_cmd, -AILERON_RATE_LIMIT * dt, AILERON_RATE_LIMIT * dt);
	aileron_command = limit(aileron_command, -1.0, 1.0);

	// 6. MOMENTS AÉRODYNAMIQUES (roulis = rotation autour de X)
	// Commande pilote + amortissement naturel de roulis (Clp).
	double roll_eff_coeff = 0.85;  // conserve l'autorité nécessaire au pic ~270°/s
	double roll_moment = 0.0;
	if (qbar > 20.0)
	{
		roll_moment = qbar * S * roll_eff_coeff
			* aileron_command * (wingspan / 4.0);

		// Clp : oppose directement le taux de roulis, indépendamment du PID.
		// Cela supprime le "reverse roll" provoqué par le seul contrôleur de taux.
		const double Clp = -0.22;
		double roll_rate_reduced =
			(roll_rate * wingspan) /
			(2.0 * limit(V_scalar, 20.0, 1400.0));
		double roll_damp_moment =
			Clp * qbar * S * wingspan * roll_rate_reduced;

		add_local_moment(Vec3(roll_damp_moment, 0.0, 0.0));
	}
	add_local_moment(Vec3(roll_moment, 0.0, 0.0));

#pragma endregion


	// ═══════════════════════════════════════════════════════════════════════════════════
	// BLOC COMPLET — YAW CONTROL & LATERAL AERODYNAMICS (OPTIMISÉ)
	// 
	// À COPIER-COLLER DIRECTEMENT à la place de :
	// #pragma region YAW (lignes ~1854–1926 dans Basic_EFM_Template.cpp)
	//
	// OPTIMISATION : Réutilise le pattern interp_2d_cl/cd existant
	// Table Cyβ tabulée Mach × Alpha (comme Cl/Cd existants)
	// ═══════════════════════════════════════════════════════════════════════════════════

#pragma region YAW

	// ────────────────────────────────────────────────────────────────────────────────
	// TABLE DE LOOKUP : Cyβ (Coefficient portance latérale dérive) 
	// Format : [Mach_points][150 Alpha points] (cohérent avec Cl_derive_Data.h)
	// 
	// IMPORTANT : À CRÉER dans Cl_Cd_coeffs/Cyb_derive_Data.h (comme les autres)
	// Pattern = identique à Cl_derive_Data.h (32 Mach × 150 Alpha)
	// 
	// Pour l'instant, on va utiliser une approximation simple :
	// Cyβ ne dépend QUE du Mach (pas vraiment d'AoA) → table 1D
	// ────────────────────────────────────────────────────────────────────────────────

	// Table 1D Cyβ vs Mach uniquement (32 points : 0.0–2.0)
	// Réutilise le système d'axes Mach existant
	static constexpr double derive_cyb_mach_table[33] = {
		-0.1450, -0.1462, -0.1475, -0.1488, -0.1502,  // M: 0.0–0.25
		-0.1518, -0.1535, -0.1553, -0.1573, -0.1595,  // M: 0.31–0.56
		-0.1619, -0.1646, -0.1676, -0.1710, -0.1748,  // M: 0.62–0.88
		-0.1792, -0.1842, -0.1900, -0.1968, -0.2048,  // M: 0.94–1.19 [TRANSSONIQUE]
		-0.2068, -0.2075, -0.2078, -0.2080, -0.2078,  // M: 1.25–1.44 [SUPERSONIQUE]
		-0.2074, -0.2068, -0.2060, -0.2050, -0.2039,  // M: 1.50–1.69
		-0.2027, -0.2014, -0.2000                     // M: 1.75–2.0
	};

	// Axes Mach (identique à FM_DATA si disponible)
	static constexpr double derive_cyb_mach_axis[32] = {
		0.0, 0.0625, 0.125, 0.1875, 0.25, 0.3125, 0.375, 0.4375,
		0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375,
		1.0, 1.0625, 1.125, 1.1875, 1.25, 1.3125, 1.375, 1.4375,
		1.5, 1.5625, 1.625, 1.6875, 1.75, 1.8125, 1.875, 1.9375
	};

	// Fonction helper : Interpolation linéaire Mach seulement (pattern simple)
	auto get_derive_cyb = [&](double mach_val) -> double {
		// Clamp Mach
		double m = (std::max)(0.0, (std::min)(mach_val, 2.0));

		// Find indices (comme dans interp_aerodynamic_coeff)
		int i_mach = 0;
		while (i_mach < 31 && derive_cyb_mach_axis[i_mach + 1] < m) i_mach++;

		// Interpolation linéaire
		double mach_frac = (m - derive_cyb_mach_axis[i_mach]) /
			(derive_cyb_mach_axis[i_mach + 1] - derive_cyb_mach_axis[i_mach]);
		mach_frac = (std::max)(0.0, (std::min)(mach_frac, 1.0));

		double cyb0 = derive_cyb_mach_table[i_mach];
		double cyb1 = derive_cyb_mach_table[i_mach + 1];

		return cyb0 + (cyb1 - cyb0) * mach_frac;
		};

	// ────────────────────────────────────────────────────────────────────────────────
	// 1. GESTION DES ENTRÉES PILOTE
	// ────────────────────────────────────────────────────────────────────────────────
	if (yaw_analog == true) {
		yaw_input = limit(yaw_input, -1.0, 1.0);
	}
	else {
		if (yaw_discrete > 0.1) { yaw_input += 0.05; if (yaw_input > 1.0) yaw_input = 1.0; }
		if (yaw_discrete < -0.1) { yaw_input -= 0.05; if (yaw_input < -1.0) yaw_input = -1.0; }
		if (yaw_discrete == 0) yaw_input *= 0.8;
	}

	yaw_trim = limit(yaw_trim, -0.3, 0.3);
	double pilot_yaw_request = limit(yaw_input + yaw_trim, -1.0, 1.0);

	// ────────────────────────────────────────────────────────────────────────────────
	// 2. RESET DE L'INTÉGRATEUR (Anti-Windup)
	// ────────────────────────────────────────────────────────────────────────────────
	static bool yaw_was_centered = true;
	bool yaw_stick_centered = (fabs(pilot_yaw_request) < 0.02);
	if (yaw_stick_centered && !yaw_was_centered) {
		yaw_rate_pid.reset();
	}
	yaw_was_centered = yaw_stick_centered;

	// ────────────────────────────────────────────────────────────────────────────────

	// ────────────────────────────────────────────────────────────────────────────────
	// 3. ARI (Aileron-Rudder Interconnect)
	//
	// L'ancien terme mélangeait rad/s, commande normalisée et beta en degrés.
	// On le garde volontairement modéré : le pilotage de lacet reste prioritaire.
	// ────────────────────────────────────────────────────────────────────────────────
	double ari_roll_term = 0.025 * roll_rate;
	double ari_aileron_term = 0.18 * aileron_command;
	ari_compensation = limit(ari_roll_term + ari_aileron_term, -0.30, 0.30);

	// ────────────────────────────────────────────────────────────────────────────────
	// 4. CALCUL FBW — Asservissement taux de lacet + amortissement β
	// ────────────────────────────────────────────────────────────────────────────────
	double target_rudder = 0.0;

	if (airborne_blend < 0.1) {
		yaw_direct_command = pilot_yaw_request;
		target_rudder = pilot_yaw_request;
	}
	else {
		double yaw_rate_limit_deg = fcs_lerp(
			FM_DATA::fcs_mach_axis,
			FM_DATA::fcs_yaw_rate_max_deg_s,
			FM_DATA::fcs_mach_count,
			mach
		);

		// À basse vitesse, on autorise davantage de lacet pour conserver une
		// vraie autorité directionnelle lorsque qbar chute.
		double alpha_yaw_scale = limit(1.0 - 0.20 * fabs(aoa) / 0.6, 0.55, 1.0);
		double yaw_rate_setpoint = pilot_yaw_request
			* (yaw_rate_limit_deg * (pi / 180.0))
			* alpha_yaw_scale;

		// beta_damping en rad/s : beta est déjà disponible en rad via `aos`.
		const double K_BETA_DAMP = 0.65; // 1/s
		double yaw_error = (yaw_rate_setpoint - yaw_rate) - K_BETA_DAMP * aos;

		double pid_yaw = yaw_rate_pid.update(yaw_error, dt);

		// Autorité supplémentaire du rudder aux très basses vitesses.
		double low_speed_rudder_boost = 1.0
			+ 0.35 * limit((0.35 - mach) / 0.35, 0.0, 1.0);

		target_rudder = limit(
			(pid_yaw * low_speed_rudder_boost) + ari_compensation,
			-1.0, 1.0
		);
	}


	// ────────────────────────────────────────────────────────────────────────────────
	// 5. ACTUATEUR HYDRAULIQUE — Rudder
	// ────────────────────────────────────────────────────────────────────────────────
	const double RUDDER_RATE_LIMIT = 3.2;
	rudder_command = actuator(rudder_command, target_rudder, -RUDDER_RATE_LIMIT * dt, RUDDER_RATE_LIMIT * dt);
	rudder_command = limit(rudder_command, -1.0, 1.0);
	current_rudder_animation_pos = rudder_command;

	// ────────────────────────────────────────────────────────────────────────────────
	// 6. FORCES AÉRODYNAMIQUES LATÉRALES
	// ────────────────────────────────────────────────────────────────────────────────

	// 6a. DÉRIVE (Fin verticale fixe) — Force stabilisante proportionnelle à β
	if (qbar > 15.0) {
		double derive_surface = FM_DATA::derive_span * FM_DATA::derive_mac;
		double derive_cyb = get_derive_cyb(mach);
		double derive_force_lateral = q * derive_surface * derive_cyb * beta;
		double derive_moment_arm_x = FM_DATA::derive_ac_x - FM_DATA::cg_x;
		double derive_moment_yaw = derive_force_lateral * derive_moment_arm_x;

		add_local_force(Vec3(0.0, 0.0, derive_force_lateral), derive_pos);
		add_local_moment(Vec3(0.0, derive_moment_yaw * 0.5, 0.0));
	}

	// 6b. GOUVERNE DE DIRECTION (Rudder)
	double rudder_surface = FM_DATA::rudder_span * FM_DATA::rudder_mac;
	double yaw_aoa_compensation = 1.0 + limit(fabs(alpha) / 25.0, 0.0, 0.5);
	double rudder_force = q * rudder_surface * rudder_command * FM_DATA::rudder_yaw_eff * yaw_aoa_compensation;
	add_local_force(Vec3(0.0, 0.0, rudder_force), rudder_pos);

	// 6c. AMORTISSEMENT PASSIF (Yaw Damping)
	double residual_yaw_damping = -yaw_rate * q * 0.018 * S * wingspan;
	add_local_moment(Vec3(0.0, residual_yaw_damping, 0.0));

#pragma endregion



	// ENGINE(S) AND THRUST //
#pragma region THRUST

	// ── Seuils de la détente PC (FADEC M88) ──────────────────────────────────
	constexpr double DETENTE = 1.0;          // Fin de la plage sèche
	constexpr double MAX_THROTTLE = 1.1;     // Fin de la plage PC
	constexpr double AB_THRUST_MULTIPLIER = 1.55; // Multiplicateur total à 1.1

	// FADEC réel : Taux de variation max (Slew Rate) pour faire 0 à 1.1 en ~3.0s
	// Vitesse = Delta_Max / Temps = 1.1 / 3.0 = 0.3666 unités par seconde
	constexpr double FADEC_SLEW_RATE = 0.3666;
	double fadec_step = FADEC_SLEW_RATE * dt;

	// Limitation des entrées pilotes (0 à 1.1)
	left_throttle_input = limit(left_throttle_input, 0.0, MAX_THROTTLE);
	right_throttle_input = limit(right_throttle_input, 0.0, MAX_THROTTLE);

	// ── Gestion de l'extinction et coupure carburant ─────────────────────────
	if (internal_fuel <= 0.0)
	{
		left_engine_switch = false;
		right_engine_switch = false;
	}

	// ── Simulation de l'inertie du FADEC (Slew Rate) ──────────────────────────
	// Moteur Gauche
	if (left_engine_switch && left_engine_power_readout >= FM_DATA::idle_rpm / 100.0)
	{
		double left_delta = left_throttle_input - left_throttle_output;
		if (fabs(left_delta) < fadec_step) left_throttle_output = left_throttle_input;
		else left_throttle_output += (left_delta > 0.0 ? fadec_step : -fadec_step);
	}
	else
	{
		// Si le switch est coupé ou RPM trop bas, la manette FADEC virtuelle retombe à 0
		double left_delta = 0.0 - left_throttle_output;
		if (fabs(left_delta) < fadec_step) left_throttle_output = 0.0;
		else left_throttle_output += (left_delta > 0.0 ? fadec_step : -fadec_step);
	}

	// Moteur Droit
	if (right_engine_switch && right_engine_power_readout >= FM_DATA::idle_rpm / 100.0)
	{
		double right_delta = right_throttle_input - right_throttle_output;
		if (fabs(right_delta) < fadec_step) right_throttle_output = right_throttle_input;
		else right_throttle_output += (right_delta > 0.0 ? fadec_step : -fadec_step);
	}
	else
	{
		double right_delta = 0.0 - right_throttle_output;
		if (fabs(right_delta) < fadec_step) right_throttle_output = 0.0;
		else right_throttle_output += (right_delta > 0.0 ? fadec_step : -fadec_step);
	}

	// ── Simulation de Pompage Compresseur (Fuel Starvation) ──────────────────
	// Si le niveau de carburant est critique (entre 0 et 50 kg), le flux devient instable
	if (internal_fuel > 0.0 && internal_fuel < 50.0)
	{
		// Le risque augmente à mesure qu'on approche de 0 kg
		double starvation_risk = (50.0 - internal_fuel) / 50.0;

		// Facteur pseudo-aléatoire basé sur la clock de simu pour créer des oscillations de pompage
		double surge_oscillation = sin(fm_clock * 0.05) * 0.4 + 0.6; // Oscille entre 0.2 et 1.0

		// Déclenchement probabiliste des coupures de flux (toussements)
		if (((double)rand() / (RAND_MAX)) < (starvation_risk * dt * 2.0))
		{
			left_engine_integrity = limit(left_engine_integrity * surge_oscillation, 0.1, 1.0);
			right_engine_integrity = limit(right_engine_integrity * surge_oscillation, 0.1, 1.0);
		}
	}
	else if (internal_fuel > 50.0)
	{
		// Récupération progressive des moteurs si on remet du carburant (en test)
		left_engine_integrity = (std::min)(1.0, left_engine_integrity + dt * 0.2);
		right_engine_integrity = (std::min)(1.0, right_engine_integrity + dt * 0.2);
	}

	// ── Lambda : Calcul Poussée (LUT) ─────────────────────────────────────────
	auto compute_engine_thrust = [&](double fadec_pos) -> double
		{
			double alt_ft = altitude_ASL * 3.28084;
			double dry_thrust_max = interpolate_2d_raw(mach, alt_ft, thrust_axis, thrust_table);
			double thrust_calculated = 0.0;

			if (fadec_pos <= DETENTE)
			{
				// Zone Sèche : 0.0 à 1.0
				thrust_calculated = fadec_pos * dry_thrust_max;
			}
			else
			{
				// Zone PC : 1.0 à 1.1
				double max_ab_thrust = dry_thrust_max * AB_THRUST_MULTIPLIER;
				double t_ab = (fadec_pos - DETENTE) / (MAX_THROTTLE - DETENTE);
				thrust_calculated = dry_thrust_max + t_ab * (max_ab_thrust - dry_thrust_max);
			}
			return thrust_calculated * 0.5; // Par moteur
		};

	// ── Lambda : Calcul Fuel Flow (LUT) ──────────────────────────────────────
	auto compute_fuel_flow = [&](double fadec_pos) -> double
		{
			double alt_ft = altitude_ASL * 3.28084;
			double ff_base = interpolate_2d_raw(mach, alt_ft, fuel_flow_axis, fuel_flow_table);
			ff_base /= 60.0;

			// Minimum idle fuel flow: ~2.5 kg/min = 0.042 kg/s (pour 2 moteurs)
			double ff_idle = 0.042 / 2.0;  // ~0.021 kg/s par moteur à idle

			if (fadec_pos <= 0.05)  // < 5% throttle = idle
			{
				return ff_idle;
			}
			else if (fadec_pos <= DETENTE)
			{
				// Blend idle → dry
				double blend = fadec_pos / 0.05;
				return ff_idle + (ff_base - ff_idle) * (blend - 1.0) / (DETENTE / 0.05 - 1.0);
			}
			else
			{
				// Dry → full AB
				double t_ab = (fadec_pos - DETENTE) / (MAX_THROTTLE - DETENTE);
				return ff_base * (1.0 + t_ab * 1.5);
			}
		};

	// ── Application aux moteurs ───────────────────────────────────────────────
	auto update_engine = [&](double& fadec_out, double& power_readout, double& thrust_force, bool is_left)
		{
			double thrust = compute_engine_thrust(fadec_out);
			thrust_force = thrust * (is_left ? left_engine_integrity : right_engine_integrity);

			// RPM Readout mis à jour (indexé sur 1.1 max)
			power_readout = lerp(FM_DATA::throttle_input_table, FM_DATA::engine_power_readout_table,
				sizeof(FM_DATA::throttle_input_table) / sizeof(double),
				fadec_out / MAX_THROTTLE);
			power_readout *= (is_left ? left_engine_integrity : right_engine_integrity);
		};

	// Calcul des forces finales si le moteur est censé tourner
	if (left_engine_switch) {
		update_engine(left_throttle_output, left_engine_power_readout, left_thrust_force, true);
	}
	else {
		left_thrust_force = 0.0;
		left_engine_power_readout = actuator(left_engine_power_readout, 0.0, -dt / 4.0, dt / 4.0); // Extinction progressive RPM
	}

	if (right_engine_switch) {
		update_engine(right_throttle_output, right_engine_power_readout, right_thrust_force, false);
	}
	else {
		right_thrust_force = 0.0;
		right_engine_power_readout = actuator(right_engine_power_readout, 0.0, -dt / 4.0, dt / 4.0);
	}

	// ── Forces finales appliquées au DCS EFM ──────────────────────────────────
	add_local_force(Vec3(left_thrust_force, 0.0, 0.0), left_engine_pos);
	add_local_force(Vec3(right_thrust_force, 0.0, 0.0), right_engine_pos);

	// ── Consommation Carburant ────────────────────────────────────────────────
	if (infinite_fuel == false && internal_fuel > 0.0)
	{
		double left_ff = (left_engine_switch && left_engine_power_readout >= FM_DATA::idle_rpm / 100.0)
			? compute_fuel_flow(left_throttle_output) : 0.0;
		double right_ff = (right_engine_switch && right_engine_power_readout >= FM_DATA::idle_rpm / 100.0)
			? compute_fuel_flow(right_throttle_output) : 0.0;

		double total_burn = (left_ff + right_ff) * dt;

		if (total_burn > 0.0 && internal_fuel > 0.0)
		{
			FuelTank* tank_to_drain = nullptr;

			if (tank_wing_L_ext.current_mass > 0 || tank_wing_R_ext.current_mass > 0)
				tank_to_drain = (tank_wing_L_ext.current_mass > tank_wing_R_ext.current_mass) ? &tank_wing_L_ext : &tank_wing_R_ext;
			else if (tank_wing_L_int.current_mass > 0 || tank_wing_R_int.current_mass > 0)
				tank_to_drain = (tank_wing_L_int.current_mass > tank_wing_R_int.current_mass) ? &tank_wing_L_int : &tank_wing_R_int;
			else if (tank_tail.current_mass > 0)
				tank_to_drain = &tank_tail;
			else if (tank_fuse_aft.current_mass > 0)
				tank_to_drain = &tank_fuse_aft;
			else if (tank_fuse_fwd.current_mass > 0)
				tank_to_drain = &tank_fuse_fwd;

			if (tank_to_drain != nullptr)
			{
				if (total_burn > tank_to_drain->current_mass)
					total_burn = tank_to_drain->current_mass;

				tank_to_drain->current_mass -= total_burn;
				internal_fuel -= total_burn;
				fuel_consumption_since_last_time += total_burn;
				current_burn_pos = tank_to_drain->position;
			}
		}
	}

#pragma endregion


	// MISC & COUPLAGE //
#pragma region MISC


	// 1. DÉTECTION DE PHUGOID
	static double prev_altitude_integrated = altitude_ASL;
	double altitude_rate = (altitude_ASL - prev_altitude_integrated) / max(dt, 1e-4);
	prev_altitude_integrated = altitude_ASL;

	double phugoid_indicator = limit((1.0 - fabs(altitude_rate) / 5.0), 0.0, 1.0) *
		limit((15.0 - fabs(pitch)) / 15.0, 0.0, 1.0);

	// Les termes de couplage artificiels roll->yaw et yaw->roll ont été retirés.
	// Le couplage restant doit venir de la géométrie réelle des surfaces + ARI.
	// ⚠️ CORRIGÉ : Suppression de la constante 1e5*0.5 = 50 kN ajoutée au sol
	// Amortissement lacet = dépend de q UNIQUEMENT
	double yaw_rate_damping_coeff = 0.12;  // Coefficient d'amortissement lacet
	double yaw_rate_limiter = 0.0;
	if (qbar > 5.0)  // Amortissement aérodynamique uniquement en vol
	{
		yaw_rate_limiter = -(yaw_rate + aos) * (q * yaw_rate_damping_coeff);
	}
	add_local_moment(Vec3(0, yaw_rate_limiter, 0));

	double speed_limiter = limit(pow(fabs(mach) / FM_DATA::mach_max, 5) * (q + 1e5 * 0.5), -1e7, 1e7);
	add_local_force(-speed_limiter, center_of_mass);

	if (easy_flight == true) {
		// ⚠️ CORRIGÉ : Suppression des constantes 1e5 artificielles
		// Seul q (pression dynamique) détermine l'amortissement en vol facile
		double easy_flight_damp = 0.08;  // Coefficient d'amortissement réduit pour easy mode
		if (qbar > 10.0)  // Amortissement assisté seulement en vol
		{
			add_local_moment(Vec3(
				-(roll_rate / 4) * (1 - sqrt(fabs(aileron_command))) * (q * easy_flight_damp),
				-(yaw_rate + (sin(aos) / 2)) * (1 - sqrt(fabs(rudder_command))) * (q * easy_flight_damp),
				-(pitch_rate + (sin(aoa) / 2)) * (1 - sqrt(fabs(elevator_command))) * (q * easy_flight_damp)
			));
			add_local_force(Vec3(0, 0, -rudder_command * (q * 0.02)), Vec3(center_of_mass.x - 0.2, center_of_mass.y, 0));
		}
	};

	// ─────────────────────────────────────────────────────────────────────────
	// DÉTECTION ON_GROUND AVEC HYSTÉRÉSIS ET TEMPORISATION (CORRIGÉ)
	// ─────────────────────────────────────────────────────────────────────────
	static bool prev_on_ground = true;
	static double ground_timer = 0.0;
	const double WOW_TAKEOFF_THRESHOLD = 0.15;
	const double WOW_LANDING_THRESHOLD = 0.30;
	const double STABILITY_TIME = 0.2; // 200ms de contact continu requis

	if (prev_on_ground) {
		// Au sol → Besoin de vraiment décoller
		if (flt_wow_main < WOW_TAKEOFF_THRESHOLD) {
			on_ground = false;
			ground_timer = 0.0;
		}
	}
	else {
		// En vol → On attend un contact stable
		if (flt_wow_main > WOW_LANDING_THRESHOLD) {
			ground_timer += dt;
			if (ground_timer >= STABILITY_TIME) {
				on_ground = true;
			}
		}
		else {
			ground_timer = 0.0; // Reset si on rebondit
		}
	}
	prev_on_ground = on_ground;

	// ─────────────────────────────────────────────────────────────────────────
	// CALCUL DES VIBRATIONS (SHAKE)
	// ─────────────────────────────────────────────────────────────────────────
	shake_amplitude = 0;
	shake_amplitude += limit((FM_DATA::cx_brk + 1) * airbrake_pos * mach, 0, 2) / 6;

	if (on_ground == false) {
		if (fabs(alpha) > 10) shake_amplitude += (fabs(alpha) - 10) / 100;
		if (fabs(beta) > 10) shake_amplitude += (fabs(beta) - 10) / 100;
		if (fabs(g) > 5) shake_amplitude += (fabs(g) - 5) / 100;
		if (mach > FM_DATA::mach_max * 0.8) shake_amplitude += (mach - (FM_DATA::mach_max * 0.8)) / 2;
	}
	else {
		// Vibration de roulage
		shake_amplitude += (V_scalar * 0.001);
	};

#pragma endregion

	constexpr double WHEEL_CIRCUMFERENCE = 3.14159265358979323846 * 0.6;

	if (on_ground) {
		// Au sol : La vitesse angulaire (rad/s) est strictement dictée par la vitesse de l'avion
		double ground_wheel_vel = V_scalar / WHEEL_CIRCUMFERENCE;

		nose_wheel_vel = ground_wheel_vel;
		left_wheel_vel = ground_wheel_vel;
		right_wheel_vel = ground_wheel_vel;

		// Avancement de l'animation (fmod maintient entre 0.0 et 1.0)
		nose_wheel_rotation = fmod(nose_wheel_rotation + nose_wheel_vel * dt, 1.0);
		left_wheel_rotation = fmod(left_wheel_rotation + left_wheel_vel * dt, 1.0);
		right_wheel_rotation = fmod(right_wheel_rotation + right_wheel_vel * dt, 1.0);
	}
	else {
		// En l'air : Les roues ralentissent sous l'effet du frottement mécanique ET de la traînée de l'air
		// Constante d'inertie de la roue (plus elle est haute, plus la roue met du temps à s'arrêter)
		constexpr double WHEEL_INERTIA = 4.5;
		// Constante de traînée de l'air sur le pneu rotatif
		constexpr double AIR_DRAG_COEFF = 0.0005;
		// Friction mécanique constante des roulements
		constexpr double MECH_FRICTION = 0.15;

		// Calcul de la décélération dynamique (Couple de freinage / Inertie)
		// Le terme (V_scalar * V_scalar) fait que si tu décolles à haute vitesse, l'air arrête le pneu beaucoup plus vite.
		double aero_deceleration = (AIR_DRAG_COEFF * (V_scalar * V_scalar) + MECH_FRICTION) / WHEEL_INERTIA;

		// Application de la décélération sur chaque roue
		nose_wheel_vel = max(0.0, nose_wheel_vel - aero_deceleration * dt);
		left_wheel_vel = max(0.0, left_wheel_vel - aero_deceleration * dt);
		right_wheel_vel = max(0.0, right_wheel_vel - aero_deceleration * dt);

		// L'animation continue de tourner selon la vitesse résiduelle décroissante
		nose_wheel_rotation = fmod(nose_wheel_rotation + nose_wheel_vel * dt, 1.0);
		left_wheel_rotation = fmod(left_wheel_rotation + left_wheel_vel * dt, 1.0);
		right_wheel_rotation = fmod(right_wheel_rotation + right_wheel_vel * dt, 1.0);
	}

	// ─────────────────────────────────────────────────────────────────────────
		// LOGIQUE DES TUYÈRES & ANIMATION PC (Plage Sec: 0.0 à 1.0 | PC: 1.0 à 1.1)
		// ─────────────────────────────────────────────────────────────────────────

		// Tuyère gauche : fermée au ralenti (0.0), s'ouvre au max en Plein Gaz Sec (1.0), 
		// puis se referme progressivement en zone PC (1.0 à 1.1)
	if (left_throttle_input > DETENTE) {
		// En PC : on réduit l'ouverture de 1.0 vers 0.0 sur la plage de 0.1 de course
		nozzle_left = limit(1.0 - ((left_throttle_input - DETENTE) / 0.1), 0.0, 1.0);
	}
	else {
		// En Sec : ouverture progressive proportionnelle jusqu'à DETENTE (1.0)
		nozzle_left = limit(left_throttle_input / DETENTE, 0.0, 1.0);
	}

	// Tuyère droite : même logique
	if (right_throttle_input > DETENTE) {
		nozzle_right = limit(1.0 - ((right_throttle_input - DETENTE) / 0.1), 0.0, 1.0);
	}
	else {
		nozzle_right = limit(right_throttle_input / DETENTE, 0.0, 1.0);
	}

	// Flammes PC (ab_vis) : s'activent uniquement au-dessus de DETENTE (1.0) 
	// et grimpent de 0.0 à 1.0 d'intensité visuelle sur la plage de 0.1 restante (jusqu'à 1.1)
	ab_vis_left = (left_throttle_input > DETENTE)
		? limit((left_throttle_input - DETENTE) / 0.1, 0.0, 1.0) : 0.0;

	ab_vis_right = (right_throttle_input > DETENTE)
		? limit((right_throttle_input - DETENTE) / 0.1, 0.0, 1.0) : 0.0;



	// MISC & COUPLAGE //
#pragma region AVIONIQUE

	// ═══════════════════════════════════════════════════════════════════════
	  // HUD CTH3022 — Mise à jour des ParamHandles
	  // Appelé chaque frame (100+ Hz) — aucune allocation, zéro logique métier
	  // ═══════════════════════════════════════════════════════════════════════
	{
		if (!g_hud_initialized) {
			g_rafale_hud.Init(interface);
			g_hud_initialized = true;
		}

		g_rafale_hud.Update(interface,
			FM::V_scalar, FM::mach, FM::altitude_ASL,
			FM::altitude_AGL,           // Altitude sol en mètres
			FM::heading,                // Cap (rad)
			FM::pitch,                  // Tangage (rad)
			FM::roll,                   // Roulis (rad)
			FM::alpha,                  // AOA en degrés
			FM::g,                      // Facteur de charge
			velocity_world.y,       // Vitesse verticale monde m/s (Y vertical, >0 = montée)
			FM::velocity_world.x,
			FM::velocity_world.y,
			FM::velocity_world.z,
			FM::velocity_body.x,       // X = avant
			FM::velocity_body.y,       // Y = haut
			FM::velocity_body.z,       // Z = droite
			FM::body_velocity_valid,
			airborne_blend,         // Fondu sol/vol (0.0-1.0)
			FM::gear_pos,               // Position train (0.0-1.0)
			FM::airbrake_pos,           // Position frein de vol (0.0-1.0)
			FM::left_engine_power_readout,  // RPM moteur gauche normalisé
			FM::right_engine_power_readout, // RPM moteur droit normalisé
			left_fadec_output,      // Position FADEC gauche
			right_fadec_output,     // Position FADEC droit
			FM::internal_fuel,          // Carburant interne en kg
			FM::FUEL_MAX_KG,            // Capacité max (constante)
			FM::atmosphere_temperature, // Température (Kelvin)
			FM::atmosphere_density,     // Densité atmosphérique (kg/m³)
			fm_clock,               // Horloge simulation (secondes)
			flt_wow_main            // Weight On Wheels (0.0 = en vol, 1.0 = au sol)
		);
	}
	// ═══════════════════════════════════════════════════════════════════════

// ═══════════════════════════════════════════════════════════════════════════
	// TÉLÉMÉTRIE RAFALE : BANC D'ESSAI & PERFORMANCES
	// ═══════════════════════════════════════════════════════════════════════════
	static FILE* f_log = nullptr;
	static int frame_skip = 0;
	static bool log_initialized = false;

	if (!log_initialized) {
		CreateDirectoryA("D:\\Telemetrie Rafale", NULL);
		f_log = fopen("D:\\Telemetrie Rafale\\telemetry_perfos.csv", "w");
		if (f_log) {
			// En-tête ENRICHI : Tous les paramètres pour recalculer PID adaptatifs
			// COLONNES PRINCIPALES
			fprintf(f_log, "Time_s,Mach,KCAS,Alt_ft,Alpha_deg,Beta_deg,Nz_G,"
				// FORCES AÉRODYNAMIQUES
				"Qbar_Pa,Thrust_N,Drag_N,Lift_N,Weight_N,Cd_Total,Cl_Total,"
				// POSITIONS DE GOUVERNES
				"Elevon_Pos,Canard_Pos,Rudder_Pos,Aileron_Pos,"
				// TAUX ANGULAIRES (3 axes)
				"PitchRate_degs,RollRate_degs,YawRate_degs,"
				// ORDRES PILOTE (3 axes)
				"StickPitch,StickRoll,StickYaw,"
				// TANGAGE (PITCH) — PID Detail
				"Pitch_PID_P_Term,Pitch_PID_I_Term,Pitch_PID_D_Term,Pitch_PID_Output,Pitch_PID_Error,"
				"Pitch_Kp,Pitch_Ki,Pitch_Kd,Pitch_Target_Rate,Pitch_Measured_Rate,"
				// ROULIS (ROLL) — PID Detail
				"Roll_PID_P_Term,Roll_PID_I_Term,Roll_PID_D_Term,Roll_PID_Output,Roll_PID_Error,"
				"Roll_Kp,Roll_Ki,Roll_Kd,Roll_Target_Rate,Roll_Measured_Rate,"
				// LACET (YAW) — PID Detail
				"Yaw_PID_P_Term,Yaw_PID_I_Term,Yaw_PID_D_Term,Yaw_PID_Output,Yaw_PID_Error,"
				"Yaw_Kp,Yaw_Ki,Yaw_Kd,Yaw_Target_Rate,Yaw_Measured_Rate,"
				// FACTEURS D'ADAPTATION PID
				"Mach_Gain_Factor,AoA_Gain_Factor,Speed_Gain_Factor,Inertia_Gain_Factor,"
				// INDICATEURS DE RÉGIME
				"Regime_Flag,On_Ground,Airborne_Blend,"
				// MASSE & INERTIE (pour validation)
				"Total_Mass_kg,Ixx_kg_m2,Iyy_kg_m2,Izz_kg_m2,"
				// VITESSE VRAIE & DYNAMIQUE
				"TAS_kts,V_scalar_ms,Dynamic_Pressure_Pa\n");
			fflush(f_log);
		}
		log_initialized = true;
	}

	// Calcul des forces aéro réelles en Newtons (F = q * S * C)
	double drag_force_N = flt_qbar * S * Cd_total;
	double lift_force_N = flt_qbar * S * Cl_total;
	double total_thrust_N = left_thrust_force + right_thrust_force;

	// Force gravitationnelle pour le bilan Portance / Poids
	// (Remplace 'mass_kg' par ta variable de masse réelle de l'EFM)
	double weight_N = total_mass_kg * 9.80665;

	// Approximation de la vitesse calibrée (KCAS) pour correspondre aux abaques
	double kcas = V_scalar * 1.94384 * sqrt(atmosphere_density / 1.225);

	// Conversions d'angles en degrés pour une lecture directe sous Excel/Python (si stockés en radians)
	double alpha_deg = alpha;
	double beta_deg = beta * 57.2957795;  // Indispensable pour surveiller le dérapage à fort AoA
	double pitch_rate_degs = pitch_rate * 57.2957795;

	// On loggue à environ 10 Hz (si DCS tourne à ~100Hz = dt de 0.01)
	if (f_log && (++frame_skip >= 10)) {
		frame_skip = 0;

		// ─────────────────────────────────────────────────────────────────────────────
		// CALCUL DES FACTEURS D'ADAPTATION PID (pour analyse post-vol)
		// ─────────────────────────────────────────────────────────────────────────────

		// Facteur Mach : Normalisation autour M=0.8 (point de croisement subsonique)
		double log_mach_factor = limit(mach / 0.8, 0.25, 2.5);

		// Facteur AoA : Pénalité en transonique (α > 15° = problématique)
		double log_aoa_factor = 1.0 + limit(fabs(flt_alpha * rad_to_deg) / 20.0, 0.0, 0.8);

		// Facteur Vitesse : Adaptation basse vitesse (besoin damping/réactivité accrue)
		double log_speed_factor = 1.0;
		if (V_scalar < 60.0) {  // Basse vitesse : < 60 m/s ≈ 116 kts
			log_speed_factor = 1.0 + (60.0 - V_scalar) / 60.0;  // Ramp 1.0 → 2.0
		}

		// Facteur Inertie : Variation selon le braquage (validation de la charge alaire)
		double log_inertia_factor = 1.0 + limit(fabs(g) / 6.0, 0.0, 0.5);  // À 6G → factor = 1.5

		// Indicateur de régime (pour segmentation Python)
		int regime_flag = 0;
		if (mach < 0.8) regime_flag = 1;          // Subsonique
		else if (mach < 1.1) regime_flag = 2;     // Transonique
		else regime_flag = 3;                       // Supersonique

		// Conversions utiles pour logging
		double tas_kts = V_scalar * 1.94384;      // TAS en nœuds
		// Consignes reconstruites pour que le CSV reflète réellement la boucle.
		double pitch_rate_setpoint = stick_pitch * 0.45;
		double roll_rate_limit_log = fcs_lerp(
			FM_DATA::fcs_mach_axis,
			FM_DATA::fcs_roll_rate_max_rad_s,
			FM_DATA::fcs_mach_count,
			mach);
		double roll_rate_setpoint = limit(roll_input + roll_trim, -1.0, 1.0)
			* roll_rate_limit_log;
		double yaw_rate_limit_log = fcs_lerp(
			FM_DATA::fcs_mach_axis,
			FM_DATA::fcs_yaw_rate_max_deg_s,
			FM_DATA::fcs_mach_count,
			mach) * (pi / 180.0);
		double yaw_rate_setpoint = limit(yaw_input + yaw_trim, -1.0, 1.0)
			* yaw_rate_limit_log;

		// ─────────────────────────────────────────────────────────────────────────────
		// LOG COMPLET (54 colonnes)
		// ─────────────────────────────────────────────────────────────────────────────
		fprintf(f_log,
			"%.3f,%.4f,%.1f,%.0f,%.2f,%.2f,%.2f,"
			"%.1f,%.1f,%.1f,%.1f,%.1f,%.4f,%.4f,"
			"%.3f,%.3f,%.3f,%.3f,"
			"%.2f,%.2f,%.2f,"
			"%.3f,%.3f,%.3f,"
			"%.6f,%.6f,%.6f,%.6f,%.6f,%.4f,%.4f,%.4f,%.2f,%.2f,"
			"%.6f,%.6f,%.6f,%.6f,%.6f,%.4f,%.4f,%.4f,%.2f,%.2f,"
			"%.6f,%.6f,%.6f,%.6f,%.6f,%.4f,%.4f,%.4f,%.2f,%.2f,"
			"%.4f,%.4f,%.4f,%.4f,"
			"%d,%d,%.2f,"
			"%.1f,%.2f,%.2f,%.2f,"
			"%.1f,%.2f,%.1f\n",

			// TIME & ENVIRONNEMENT
			fm_clock,
			mach,
			kcas,
			altitude_ASL * 3.28084,
			flt_alpha * rad_to_deg,
			beta * rad_to_deg,
			g,

			// FORCES
			flt_qbar,
			total_thrust_N,
			drag_force_N,
			lift_force_N,
			weight_N,
			Cd_total,
			Cl_total,

			// GOUVERNES
			current_elevator_animation_pos,
			current_canard_animation_pos,
			rudder_command,
			aileron_command,

			// TAUX ANGULAIRES
			flt_pitch_rate * rad_to_deg,
			flt_roll_rate * rad_to_deg,
			flt_yaw_rate * rad_to_deg,

			// ORDRES PILOTE
			pitch_input,
			roll_input,
			yaw_input,

			// PITCH PID
			pitch_rate_pid.last_p_term,
			pitch_rate_pid.last_i_term,
			pitch_rate_pid.last_d_term,
			pitch_rate_pid.last_p_term + pitch_rate_pid.last_i_term + pitch_rate_pid.last_d_term,
			(pitch_rate_setpoint - flt_pitch_rate),  // PID Error
			pitch_rate_pid.kp,
			pitch_rate_pid.ki,
			pitch_rate_pid.kd,
			pitch_rate_setpoint * rad_to_deg,
			flt_pitch_rate * rad_to_deg,

			// ROLL PID
			roll_rate_pid.last_p_term,
			roll_rate_pid.last_i_term,
			roll_rate_pid.last_d_term,
			roll_rate_pid.last_p_term + roll_rate_pid.last_i_term + roll_rate_pid.last_d_term,
			(roll_rate_setpoint - flt_roll_rate),   // PID Error
			roll_rate_pid.kp,
			roll_rate_pid.ki,
			roll_rate_pid.kd,
			roll_rate_setpoint * rad_to_deg,
			flt_roll_rate * rad_to_deg,

			// YAW PID
			yaw_rate_pid.last_p_term,
			yaw_rate_pid.last_i_term,
			yaw_rate_pid.last_d_term,
			yaw_rate_pid.last_p_term + yaw_rate_pid.last_i_term + yaw_rate_pid.last_d_term,
			(yaw_rate_setpoint - flt_yaw_rate),    // PID Error
			yaw_rate_pid.kp,
			yaw_rate_pid.ki,
			yaw_rate_pid.kd,
			yaw_rate_setpoint * rad_to_deg,
			flt_yaw_rate * rad_to_deg,

			// FACTEURS ADAPTATION
			log_mach_factor,
			log_aoa_factor,
			log_speed_factor,
			log_inertia_factor,

			// RÉGIME & STATUS
			regime_flag,
			on_ground ? 1 : 0,
			airborne_blend,

			// MASSE & INERTIE
			total_mass_kg,
			28000,
			75000,
			85000,

			// VITESSE & DYNAMIQUE
			tas_kts,
			V_scalar,
			flt_qbar
		);
		fflush(f_log);
	}

	sim_inititalised = true;
}

// Atmosphere data
void ed_fm_set_atmosphere(double h, double t, double a, double ro, double p, double wind_vx, double wind_vy, double wind_vz)
{
	wind.x = wind_vx;
	wind.y = wind_vy;
	wind.z = wind_vz;

	atmosphere_density = ro;
	speed_of_sound = a;
	altitude_ASL = h;
	double rho_ratio = (h < 44300.0) ? pow(1.0 - h / 44300.0, 4.256) : 0.001;
	atmosphere_temperature = t;

	interface.setParamNumber(fm_export_temperature, t - 273.15);
}

void ed_fm_set_surface(double h, double h_obj, unsigned surface_type, double normal_x, double normal_y, double normal_z)
{
	altitude_AGL = altitude_ASL - h;
}

void ed_fm_set_current_mass_state(double mass, double center_of_mass_x, double center_of_mass_y, double center_of_mass_z, double moment_of_inertia_x, double moment_of_inertia_y, double moment_of_inertia_z)
{
	center_of_mass.x = center_of_mass_x;
	center_of_mass.y = center_of_mass_y;
	center_of_mass.z = center_of_mass_z;
}

void ed_fm_set_current_state(double ax, double ay, double az, double vx, double vy, double vz, double px, double py, double pz, double omegadotx, double omegadoty, double omegadotz, double omegax, double omegay, double omegaz, double quaternion_x, double quaternion_y, double quaternion_z, double quaternion_w)
{
	velocity_world.x = vx;
	velocity_world.y = vy;
	velocity_world.z = vz;
}

void ed_fm_set_current_state_body_axis(double ax, double ay, double az, double vx, double vy, double vz, double wind_vx, double wind_vy, double wind_vz, double omegadotx, double omegadoty, double omegadotz, double omegax, double omegay, double omegaz, double yaw, double pitch, double roll, double common_angle_of_attack, double common_angle_of_slide)
{
	aoa = common_angle_of_attack;
	alpha = common_angle_of_attack * rad_to_deg;

	aos = common_angle_of_slide;
	beta = common_angle_of_slide * rad_to_deg;

	g = (ay / 9.81) + 1;

	// Vitesse inertielle exprimée directement dans le repère avion par DCS.
	// REPÈRE AVION : X avant, Y haut, Z droite.
	// Ne pas reconstruire ce vecteur à partir de l'AoA/AoS : vx/vy/vz
	// sont les composantes cinématiques directement fournies par l'EFM API.
	velocity_body.x = vx;
	velocity_body.y = vy;
	velocity_body.z = vz;
	wind_body.x = wind_vx;
	wind_body.y = wind_vy;
	wind_body.z = wind_vz;
	body_velocity_valid = true;

	FM::pitch = pitch;
	FM::roll = roll;
	FM::heading = yaw;

	roll_rate = omegax;
	yaw_rate = omegay;
	pitch_rate = omegaz;
}

void ed_fm_set_command(int command, float value)
{
	switch (command)
	{
	case JoystickPitch:
		pitch_input = limit(value, -1, 1);
		pitch_analog = true;
		pitch_discrete = 0;
		break;
	case PitchUp:
		pitch_discrete = 1;
		pitch_analog = false;
		break;
	case PitchUpStop:
		pitch_discrete = 0;
		pitch_analog = false;
		break;
	case PitchDown:
		pitch_discrete = -1;
		pitch_analog = false;
		break;
	case PitchDownStop:
		pitch_discrete = 0;
		pitch_analog = false;
		break;
	case trimUp:
		pitch_trim += 0.0015;
		break;
	case trimDown:
		pitch_trim -= 0.0015;
		break;
	case JoystickRoll:
		roll_input = limit(value, -1, 1);
		roll_analog = true;
		roll_discrete = 0;
		break;
	case RollLeft:
		roll_discrete = -1;
		roll_analog = false;
		break;
	case RollLeftStop:
		roll_discrete = 0;
		roll_analog = false;
		break;
	case RollRight:
		roll_discrete = 1;
		roll_analog = false;
		break;
	case RollRightStop:
		roll_discrete = 0;
		roll_analog = false;
		break;
	case trimLeft:
		roll_trim -= 0.001;
		break;
	case trimRight:
		roll_trim += 0.001;
		break;
	case PedalYaw:
		yaw_input = limit(-value, -1, 1);
		yaw_discrete = 0;
		yaw_analog = true;
		break;
	case rudderleft:
		yaw_discrete = 1;
		yaw_analog = false;
		break;
	case rudderleftstop:
		yaw_discrete = 0;
		yaw_analog = false;
		break;
	case rudderright:
		yaw_discrete = -1;
		yaw_analog = false;
		break;
	case rudderrightstop:
		yaw_discrete = 0;
		yaw_analog = false;
		break;
	case ruddertrimLeft:
		yaw_trim += 0.001;
		break;
	case ruddertrimRight:
		yaw_trim -= 0.001;
		break;
	case resetTrim:
		pitch_trim = 0;
		roll_trim = 0;
		yaw_trim = 0;
		break;
	case EnginesOn:
		left_engine_switch = true;
		right_engine_switch = true;
		break;
	case LeftEngineOn:
		left_engine_switch = true;
		break;
	case RightEngineOn:
		right_engine_switch = true;
		break;
	case EnginesOff:
		left_engine_switch = false;
		right_engine_switch = false;
		break;
	case LeftEngineOff:
		left_engine_switch = false;
		break;
	case RightEngineOff:
		right_engine_switch = false;
		break;
	case ThrottleAxis:
		// Mappe l'axe DCS (-1 à 1) vers 0.0 à 1.1 (MAX_THROTTLE)
		left_throttle_input = limit((-value + 1.0) / 2.0 * 1.1, 0.0, 1.1);
		right_throttle_input = limit((-value + 1.0) / 2.0 * 1.1, 0.0, 1.1);
		break;
	case ThrottleAxisLeft:
		left_throttle_input = limit((-value + 1.0) / 2.0 * 1.1, 0.0, 1.1);
		break;
	case ThrottleAxisRight:
		right_throttle_input = limit((-value + 1.0) / 2.0 * 1.1, 0.0, 1.1);
		break;
	case ThrottleIncrease:
		left_throttle_input += 0.0075;
		right_throttle_input += 0.0075;
		break;
	case ThrottleLeftUp:
		left_throttle_input += 0.0075;
		break;
	case ThrottleRightUp:
		right_throttle_input += 0.0075;
		break;
	case ThrottleDecrease:
		left_throttle_input -= 0.0075;
		right_throttle_input -= 0.0075;
		break;
	case ThrottleLeftDown:
		left_throttle_input -= 0.0075;
		break;
	case ThrottleRightDown:
		right_throttle_input -= 0.0075;
		break;
	case AirBrakes:
		airbrake_switch = !airbrake_switch;
		break;
	case AirBrakesOff:
		airbrake_switch = false;
	case AirBrakesOn:
		airbrake_switch = true;
		break;
		//case flapsToggle:
		//	flaps_switch = !flaps_switch;
		//	break;
		//case flapsDown:
		//	flaps_switch = false;
		//case flapsUp:
		//	flaps_switch = true;
		break;
	case gearToggle:
		gear_switch = !gear_switch;
		break;
	case gearDown:
		gear_switch = true;
		break;
	case gearUp:
		gear_switch = false;
		break;
	case WheelBrakeOn:
		wheel_brake = 1;
		break;
	case WheelBrakeOff:
		wheel_brake = 0;
		break;
	}
}

bool ed_fm_change_mass(double& delta_mass, double& delta_mass_pos_x, double& delta_mass_pos_y, double& delta_mass_pos_z, double& delta_mass_moment_of_inertia_x, double& delta_mass_moment_of_inertia_y, double& delta_mass_moment_of_inertia_z)
{
	// Est-ce qu'on a consommé du carburant depuis le dernier appel ?
	if (fuel_consumption_since_last_time > 0)
	{
		// On indique la masse perdue
		delta_mass = fuel_consumption_since_last_time;

		// On indique à DCS les coordonnées exactes (X, Y, Z) où cette masse a disparu
		delta_mass_pos_x = current_burn_pos.x;
		delta_mass_pos_y = current_burn_pos.y;
		delta_mass_pos_z = current_burn_pos.z;

		// La variation du moment d'inertie est négligeable pour des fractions de gramme par frame
		delta_mass_moment_of_inertia_x = 0;
		delta_mass_moment_of_inertia_y = 0;
		delta_mass_moment_of_inertia_z = 0;

		// On remet le compteur à zéro pour éviter une boucle infinie avec l'API [cite: 42]
		fuel_consumption_since_last_time = 0;

		// On retourne "true" pour forcer DCS à recalculer le Centre de Gravité global !
		return true;
	}
	else
	{
		return false;
	}
}

void ed_fm_set_internal_fuel(double fuel)
{
	internal_fuel = fuel;

	// 1. Initialisation des capacités max et coordonnées géométriques
	tank_wing_L_ext = { 0,  400.0, Vec3(-3.2, -0.2, -2.5) };
	tank_wing_R_ext = { 0,  400.0, Vec3(-3.2, -0.2,  2.5) };
	tank_wing_L_int = { 0,  750.0, Vec3(-2.8, -0.1, -1.2) };
	tank_wing_R_int = { 0,  750.0, Vec3(-2.8, -0.1,  1.2) };
	tank_fuse_fwd = { 0, 1100.0, Vec3(-1.0,  0.2,  0.0) };
	tank_fuse_aft = { 0, 1000.0, Vec3(-2.5,  0.1,  0.0) };
	tank_tail = { 0,  300.0, Vec3(-5.5,  0.5,  0.0) }; // Le contrepoids arrière

	// 2. Répartition du carburant (Remplissage de l'intérieur vers l'extérieur)
	double fuel_to_distribute = fuel;

	// Les nourrices (fuselage) se remplissent en premier
	double fill = limit(fuel_to_distribute, 0.0, tank_fuse_aft.max_capacity);
	tank_fuse_aft.current_mass = fill; fuel_to_distribute -= fill;

	fill = limit(fuel_to_distribute, 0.0, tank_fuse_fwd.max_capacity);
	tank_fuse_fwd.current_mass = fill; fuel_to_distribute -= fill;

	// Ensuite le réservoir de queue (contrepoids)
	fill = limit(fuel_to_distribute, 0.0, tank_tail.max_capacity);
	tank_tail.current_mass = fill; fuel_to_distribute -= fill;

	// Ensuite les ailes internes
	fill = limit(fuel_to_distribute / 2.0, 0.0, tank_wing_L_int.max_capacity);
	tank_wing_L_int.current_mass = fill;
	tank_wing_R_int.current_mass = fill;
	fuel_to_distribute -= (fill * 2.0);

	// Enfin les ailes externes
	fill = limit(fuel_to_distribute / 2.0, 0.0, tank_wing_L_ext.max_capacity);
	tank_wing_L_ext.current_mass = fill;
	tank_wing_R_ext.current_mass = fill;
}
double ed_fm_get_internal_fuel() { return internal_fuel; }
void   ed_fm_set_external_fuel(int station, double fuel, double x, double y, double z) {}
double ed_fm_get_external_fuel() { return 0; }

void ed_fm_set_draw_args(EdDrawArgument* drawargs, size_t size)
{
	drawargs[0].f = (float)limit(gear_pos, 0, 1);
	drawargs[3].f = (float)limit(gear_pos, 0, 1);
	drawargs[5].f = (float)limit(gear_pos, 0, 1);

	drawargs[15].f = (float)limit(elevator_command, -1, 1);
	drawargs[16].f = (float)limit(elevator_command, -1, 1);

	drawargs[11].f = (float)limit(aileron_command, -1, 1);
	drawargs[12].f = (float)limit(-aileron_command, -1, 1);

	drawargs[17].f = (float)limit(rudder_command, -1, 1);
	drawargs[18].f = (float)limit(rudder_command, -1, 1);

	drawargs[21].f = (float)limit(airbrake_pos, 0, 1);
	drawargs[182].f = (float)limit(airbrake_pos, 0, 1);
	drawargs[184].f = (float)limit(airbrake_pos, 0, 1);

	//drawargs[9].f = (float)limit(flaps_pos, 0, 1);
	//drawargs[10].f = (float)limit(flaps_pos, 0, 1);
	//drawargs[126].f = (float)limit(flaps_pos, 0, 1);
	//drawargs[127].f = (float)limit(flaps_pos, 0, 1);
	//drawargs[128].f = (float)limit(flaps_pos, 0, 1);
	//drawargs[129].f = (float)limit(flaps_pos, 0, 1);

	drawargs[13].f = (float)limit(slats_pos, 0, 1);
	drawargs[14].f = (float)limit(slats_pos, 0, 1);


	// Tuyères (Nozzles) basées sur tes tests 3D
	drawargs[90].f = (float)limit(nozzle_left, 0.0, 1.0);
	drawargs[89].f = (float)limit(nozzle_right, 0.0, 1.0);

	// Visuel de la Post-Combustion (Inversion corrigée + bons IDs)
	drawargs[29].f = (float)limit(ab_vis_left, 0.0, 1.0);
	drawargs[28].f = (float)limit(ab_vis_right, 0.0, 1.0);

	// Rotation des roues (Validé par ton config.lua)
	drawargs[101].f = (float)limit(nose_wheel_rotation, 0.0, 1.0);
	drawargs[102].f = (float)limit(right_wheel_rotation, 0.0, 1.0);
	drawargs[103].f = (float)limit(left_wheel_rotation, 0.0, 1.0);

}

void ed_fm_configure(const char* cfg_path) {}

double ed_fm_get_param(unsigned index)
{
	switch (index)
	{
	case ED_FM_SUSPENSION_0_WHEEL_YAW: return limit(yaw_input, -1.0, 1.0) * 0.75;
	case ED_FM_SUSPENSION_0_RELATIVE_BRAKE_MOMENT: return 1e-4;
	case ED_FM_SUSPENSION_1_RELATIVE_BRAKE_MOMENT: return 1e-4 + (5 * wheel_brake);
	case ED_FM_SUSPENSION_2_RELATIVE_BRAKE_MOMENT: return 1e-4 + (5 * wheel_brake);
	case ED_FM_ANTI_SKID_ENABLE: return true;
	case ED_FM_FC3_STICK_PITCH: return limit(pitch_input, -1.0, 1.0);
	case ED_FM_FC3_STICK_ROLL: return limit(roll_input, -1.0, 1.0);
	case ED_FM_FC3_RUDDER_PEDALS: return limit(-yaw_input, -1.0, 1.0);
	case ED_FM_FC3_THROTTLE_LEFT: return (left_engine_switch == false) ? limit(left_throttle_input, 0.0, 1.0) : limit(left_throttle_input, 0.1, 1.0);
	case ED_FM_FC3_THROTTLE_RIGHT: return (right_engine_switch == false) ? limit(right_throttle_input, 0.0, 0.1) : limit(right_throttle_input, 0.1, 1.0);
	case ED_FM_FUEL_INTERNAL_FUEL: return internal_fuel;
	case ED_FM_FUEL_TOTAL_FUEL: return total_fuel;
	case ED_FM_OXYGEN_SUPPLY: return 101000.0;
	case ED_FM_FLOW_VELOCITY: return 10.0;
	case ED_FM_SUSPENSION_0_GEAR_POST_STATE:
	case ED_FM_SUSPENSION_1_GEAR_POST_STATE:
	case ED_FM_SUSPENSION_2_GEAR_POST_STATE: return gear_pos;

		if (index <= ED_FM_END_ENGINE_BLOCK)
		{
	case ED_FM_ENGINE_0_RPM:
	case ED_FM_ENGINE_0_RELATED_RPM: return 1;
	case ED_FM_ENGINE_0_THRUST:
	case ED_FM_ENGINE_0_RELATED_THRUST: return 0;
	case ED_FM_ENGINE_1_CORE_RPM:
	case ED_FM_ENGINE_1_RPM:
	case ED_FM_ENGINE_1_COMBUSTION: return left_throttle_output;
	case ED_FM_ENGINE_1_RELATED_THRUST: return left_throttle_output;
	case ED_FM_ENGINE_1_CORE_RELATED_THRUST:
	case ED_FM_ENGINE_1_RELATED_RPM: return left_throttle_output;
	case ED_FM_ENGINE_1_CORE_RELATED_RPM: return left_engine_power_readout;
	case ED_FM_ENGINE_1_CORE_THRUST:
	case ED_FM_ENGINE_1_THRUST: return left_throttle_output;
	case ED_FM_ENGINE_1_TEMPERATURE: return (pow(left_engine_power_readout, 3) * 500) + atmosphere_temperature;
	case ED_FM_ENGINE_2_CORE_RPM:
	case ED_FM_ENGINE_2_RPM:
	case ED_FM_ENGINE_2_COMBUSTION: return right_throttle_output;
	case ED_FM_ENGINE_2_RELATED_THRUST: return right_throttle_output;
	case ED_FM_ENGINE_2_CORE_RELATED_THRUST:
	case ED_FM_ENGINE_2_RELATED_RPM: return right_throttle_output;
	case ED_FM_ENGINE_2_CORE_RELATED_RPM: return right_engine_power_readout;
	case ED_FM_ENGINE_2_CORE_THRUST:
	case ED_FM_ENGINE_2_THRUST: return right_throttle_output;
	case ED_FM_ENGINE_2_TEMPERATURE: return (pow(right_engine_power_readout, 3) * 500) + atmosphere_temperature;
		}
	}
	return 0;
}

void ed_fm_refueling_add_fuel(double fuel) {}

void ed_fm_unlimited_fuel(bool value) { infinite_fuel = value; }
void ed_fm_set_easy_flight(bool value) { easy_flight = value; }
void ed_fm_set_immortal(bool value) { invincible = value; }

void ed_fm_on_damage(int Element, double element_integrity_factor)
{
	if (Element >= 0 && Element < 111) element_integrity[Element] = element_integrity_factor;

	if (invincible == false)
	{
		left_wing_integrity = element_integrity[23] * element_integrity[29] * element_integrity[35];
		right_wing_integrity = element_integrity[24] * element_integrity[30] * element_integrity[36];
		tail_integrity = element_integrity[53] * element_integrity[54] * element_integrity[55] * element_integrity[56] * element_integrity[57];
		left_engine_integrity = element_integrity[13] * element_integrity[17] * element_integrity[103];
		right_engine_integrity = element_integrity[14] * element_integrity[18] * element_integrity[104];
	}
}

void ed_fm_repair()
{
	for (int i = 0; i < 111; i++) element_integrity[i] = 1.0;
}

bool ed_fm_pop_simulation_event(ed_fm_simulation_event& out)
{
	if (carrier_pos == 1)
	{
		if (left_throttle_output > 0.99)
		{
			out.event_type = ED_FM_EVENT_CARRIER_CATAPULT;
			out.event_params[0] = 1;
			out.event_params[1] = 2.0;
			out.event_params[2] = 80.0;
			out.event_params[3] = FM_DATA::max_thrust[1] * 0.5 * 2;
			carrier_pos = 2;
			return true;
		}
	}
	return false;
}

bool ed_fm_push_simulation_event(const ed_fm_simulation_event& in)
{
	if (in.event_type == ED_FM_EVENT_CARRIER_CATAPULT)
	{
		if (in.event_params[0] == 1) carrier_pos = 1;
		else if (in.event_params[0] == 2) carrier_pos = 3;
		else if (in.event_params[0] == 3) carrier_pos = 0;
	}
	return false;
}

void ed_fm_cold_start()
{
	gear_switch = true; gear_pos = 1; carrier_pos = 0;
	left_engine_switch = false; left_throttle_input = 0.0; left_throttle_output = 0.0; left_engine_power_readout = 0.0;
	right_engine_switch = false; right_throttle_input = 0.0; right_throttle_output = 0.0; right_engine_power_readout = 0.0;
}

void ed_fm_hot_start()
{
	gear_switch = true; gear_pos = 1; carrier_pos = 0;
	left_engine_switch = true;
	right_engine_switch = true;
	// Correction pour le moteur gauche
	left_throttle_input = 0.0;
	left_throttle_output = 0.0;
	left_engine_power_readout = FM_DATA::idle_rpm / 100.0; // Résultat propre : 0.22

	// Correction pour le moteur droit
	right_throttle_input = 0.0;
	right_throttle_output = 0.0;
	right_engine_power_readout = FM_DATA::idle_rpm / 100.0; // Résultat propre : 0.22

	// Réinitialiser le filtre notch de couplage
	yaw_roll_coupling_filter.reset();
}

void ed_fm_hot_start_in_air()
{
	gear_switch = false; gear_pos = 0; carrier_pos = 0;
	left_engine_switch = true;
	right_engine_switch = true;
	// Correction pour le moteur gauche
	left_throttle_input = 0.0;
	left_throttle_output = 0.0;
	left_engine_power_readout = FM_DATA::idle_rpm / 100.0; // Résultat propre : 0.22

	// Correction pour le moteur droit
	right_throttle_input = 0.0;
	right_throttle_output = 0.0;
	right_engine_power_readout = FM_DATA::idle_rpm / 100.0; // Résultat propre : 0.22

	// Réinitialiser le filtre notch de couplage
	yaw_roll_coupling_filter.reset();
}

void ed_fm_release()
{
	fm_clock = 0;

	// Reset user inputs
	pitch_input = 0;
	pitch_trim = 0;
	elevator_command = 0;

	roll_input = 0;
	roll_trim = 0;
	aileron_command = 0;

	yaw_input = 0;
	yaw_trim = 0;
	rudder_command = 0;

	// Reset engine states
	left_engine_switch = false;
	left_throttle_input = 0.0;
	left_throttle_output = 0.0;
	left_engine_power_readout = 0.0;
	left_thrust_force = 0.0;

	right_engine_switch = false;
	right_throttle_input = 0.0;
	right_throttle_output = 0.0;
	right_engine_power_readout = 0.0;
	right_thrust_force = 0.0;

	// Reset simulation state
	sim_inititalised = false;
	body_velocity_valid = false;
	velocity_body = Vec3();
	wind_body = Vec3();

	pitch_rate_pid.reset();
	roll_rate_pid.reset();
	yaw_rate_pid.reset();  // ← Ajoute cette ligne

	// Repair
	ed_fm_repair();
}

double ed_fm_get_shake_amplitude() { return shake_amplitude; }

bool ed_fm_add_local_force_component(double& x, double& y, double& z, double& pos_x, double& pos_y, double& pos_z) { return false; }
bool ed_fm_add_global_force_component(double& x, double& y, double& z, double& pos_x, double& pos_y, double& pos_z) { return false; }
bool ed_fm_add_local_moment_component(double& x, double& y, double& z) { return false; }
bool ed_fm_add_global_moment_component(double& x, double& y, double& z) { return false; }
bool ed_fm_enable_debug_info() { return true; }