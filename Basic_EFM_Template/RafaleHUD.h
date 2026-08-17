// =============================================================================
//  RafaleHUD.h — Gestion HUD CTH3022 pour Rafale C (Standalone EFM)
//
//  Principe :
//    - Utilise l'objet EDPARAM (interface déjà dans ton EFM via CockpitAPI_Declare.h)
//    - Appelle interface.getParamHandle() UNE SEULE FOIS dans RafaleHUD::Init()
//    - Appelle interface.setParamNumber() / interface.setParamString() CHAQUE FRAME
//      depuis ed_fm_simulate() via RafaleHUD::Update()
//    - Le Lua lit ces paramètres via controllers = {{"parameter_string","NOM",0}}
//
//  AUCUNE logique de vol n'est dans ce fichier :
//    - Tout vient du namespace FM (variables déjà calculées par ton EFM)
//    - Ce fichier ne fait que FORMATTER et POUSSER les données
// =============================================================================

#pragma once
#include <cstdio>
#include <cmath>

// Forward-declare la classe EDPARAM (définie dans CockpitAPI_Declare.h)
// Elle est déjà incluse dans ton Basic_EFM_Template.cpp via le namespace FM
// On en a juste besoin ici en référence.
class EDPARAM;

// =============================================================================
//  PARAMHANDLES COMPLETS — 30 paramètres pour le HUD Rafale C
// =============================================================================
//
//  Nommage : RAFALE_HUD_<CATÉGORIE>_<DONNÉE>
//  Types   : _NUM → setParamNumber (float)  | _STR → setParamString (string)
//
//  CÔTÉ LUA :
//    controllers = {{"parameter_number", "RAFALE_HUD_SPEED_IAS", 0}}
//    controllers = {{"parameter_string", "RAFALE_HUD_SPEED_STR", 0}}
//
// =============================================================================

struct RafaleHUD
{
    // ─── VITESSE ──────────────────────────────────────────────────────────────
    void* h_speed_ias_str;      // "250"   (IAS knots, 3 chiffres, zéro-paddé)
    void* h_speed_mach_str;     // "0.75"  (Mach, 4 chars "0.XX")
    void* h_speed_mode_str;     // "IAS" / "MACH" (mode affiché CTH3022)

    // ─── ALTITUDE ─────────────────────────────────────────────────────────────
    void* h_alt_baro_fl_str;    // "151" (Flight Level — centaines, ex: 15123 ft → 151)
    void* h_alt_baro_du_str;    // "23" (Dizaines+Unités, ex: 15123 ft → 23)
    void* h_alt_agl_str;        // "00085" (ALT sol en pieds, 5 chiffres)
    void* h_alt_mode_str;       // "BARO" / "RADAR" (mode sélectionné)

    // ─── NAVIGATION ───────────────────────────────────────────────────────────
    void* h_heading_str;        // "180" (cap magnétique, 3 chiffres)
    void* h_vspeed_num;         // Vitesse verticale m/s (float, >0 = montée)
    void* h_vspeed_str;         // "+1250" (ft/min, affichage CTH3022)

    // ─── ATTITUDES ────────────────────────────────────────────────────────────
    void* h_pitch_num;          // Angle de tangage en degrés (float, ±90)
    void* h_roll_num;           // Angle de roulis en degrés  (float, ±180)
    void* h_aoa_num;            // Angle d'attaque en degrés  (float, 0-30)
    void* h_aoa_str;            // "14.2" (AOA affiché sur HUD)
    void* h_g_num;              // Facteur de charge (float, -3 à +9)
    void* h_g_str;              // "+5.3G" (G formaté pour affichage)

    // ─── FLIGHT PATH PITCH LADDER (FPPL) ──────────────────────────────────────
    void* h_fppl_flight_path_angle;  // Angle de trajectoire inertielle monde γ (rad)
    void* h_fppl_pitch_rad;          // Pitch attitude (radians, -π à +π)
    void* h_fppl_alpha_display;      // Déviation γ - θ (radians)

    // ─── FLIGHT PATH VECTOR / VECTEUR VITESSE ───────────────────────────────────
    // Angles par rapport à l'axe longitudinal de l'avion.
    // X/Y = projection perspective brute : X = Vz/Vx, Y = Vy/Vx.
    // Le Lua applique ensuite l'échelle/FOV propre au HUD.
    void* h_vv_azimuth;             // Angle azimut trajectoire / axe X (rad)
    void* h_vv_elevation;           // Angle élévation trajectoire / plan XZ (rad)
    void* h_vv_x;                   // Position image exacte en DI = (Vz/Vx) * RAD_TO_DI
    void* h_vv_y;                   // Position image exacte en DI = (Vy/Vx) * RAD_TO_DI
    void* h_vv_flight_path_angle;   // γ inertiel monde (rad)
    void* h_vv_speed;                // Norme de la vitesse inertielle (m/s)
    void* h_vv_valid;                // 1 = vitesse exploitable, 0 = quasi nulle

    // ─── DONNÉES VOL ──────────────────────────────────────────────────────────
    void* h_airborne_num;       // 0.0 = sol / 1.0 = vol (blend actuel)
    void* h_gear_str;           // "GEAR" si sorti / "" si rentré (warning)
    void* h_airbrake_num;       // 0.0 = fermé / 1.0 = plein ouvert

    // ─── MOTEURS (FADEC) ──────────────────────────────────────────────────────
    void* h_rpm_l_num;          // RPM gauche normalisé (0.0-1.0)
    void* h_rpm_r_num;          // RPM droit  normalisé (0.0-1.0)
    void* h_rpm_l_str;          // "78%" (affiché sur MFD)
    void* h_rpm_r_str;          // "78%"
    void* h_afterburner_num;    // 0.0 = sec / 1.0 = PC plein (moyen des deux)

    // ─── CARBURANT ────────────────────────────────────────────────────────────
    void* h_fuel_kg_str;        // "3250" (kg restant interne)
    void* h_fuel_pct_num;       // 0.0-1.0 (fraction restante pour jauge)

    // ─── ATMOSPHÈRE ───────────────────────────────────────────────────────────
    void* h_temperature_c_str;  // "-45°C" (température ambiante)
    void* h_density_ratio_num;  // 0.0-1.0 (sigma = ρ/ρ₀)

    // ─── DIVERS ───────────────────────────────────────────────────────────────
    void* h_time_str;           // "12:35:07" (horloge Zulu simulée)

    // ─────────────────────────────────────────────────────────────────────────
    //  MÉTHODES
    // ─────────────────────────────────────────────────────────────────────────

    // Appelé UNE SEULE FOIS (dans ed_fm_hot_start / cold_start ou première frame)
    void Init(EDPARAM& iface)
    {
        h_speed_ias_str = iface.getParamHandle("RAFALE_HUD_SPEED_IAS");
        h_speed_mach_str = iface.getParamHandle("RAFALE_HUD_SPEED_MACH");
        h_speed_mode_str = iface.getParamHandle("RAFALE_HUD_SPEED_MODE");

        h_alt_baro_fl_str = iface.getParamHandle("RAFALE_HUD_ALT_BARO_FL");
        h_alt_baro_du_str = iface.getParamHandle("RAFALE_HUD_ALT_BARO_DU");
        h_alt_agl_str = iface.getParamHandle("RAFALE_HUD_ALT_AGL");
        h_alt_mode_str = iface.getParamHandle("RAFALE_HUD_ALT_MODE");

        h_heading_str = iface.getParamHandle("RAFALE_HUD_HEADING");
        h_vspeed_num = iface.getParamHandle("RAFALE_HUD_VSPEED");
        h_vspeed_str = iface.getParamHandle("RAFALE_HUD_VSPEED_STR");

        h_pitch_num = iface.getParamHandle("RAFALE_HUD_PITCH");
        h_roll_num = iface.getParamHandle("RAFALE_HUD_ROLL");
        h_aoa_num = iface.getParamHandle("RAFALE_HUD_AOA");
        h_aoa_str = iface.getParamHandle("RAFALE_HUD_AOA_STR");
        h_g_num = iface.getParamHandle("RAFALE_HUD_G");
        h_g_str = iface.getParamHandle("RAFALE_HUD_G_STR");

        h_fppl_flight_path_angle = iface.getParamHandle("RAFALE_HUD_FPPL_FLIGHT_PATH");
        h_fppl_pitch_rad = iface.getParamHandle("RAFALE_HUD_FPPL_PITCH");
        h_fppl_alpha_display = iface.getParamHandle("RAFALE_HUD_FPPL_ALPHA_DISPLAY");

        h_vv_azimuth = iface.getParamHandle("RAFALE_HUD_VV_AZIMUTH");
        h_vv_elevation = iface.getParamHandle("RAFALE_HUD_VV_ELEVATION");
        h_vv_x = iface.getParamHandle("RAFALE_HUD_VV_X");
        h_vv_y = iface.getParamHandle("RAFALE_HUD_VV_Y");
        h_vv_flight_path_angle = iface.getParamHandle("RAFALE_HUD_VV_FLIGHT_PATH");
        h_vv_speed = iface.getParamHandle("RAFALE_HUD_VV_SPEED");
        h_vv_valid = iface.getParamHandle("RAFALE_HUD_VV_VALID");

        h_airborne_num = iface.getParamHandle("RAFALE_HUD_AIRBORNE");
        h_gear_str = iface.getParamHandle("RAFALE_HUD_GEAR_WARN");
        h_airbrake_num = iface.getParamHandle("RAFALE_HUD_AIRBRAKE");

        h_rpm_l_num = iface.getParamHandle("RAFALE_HUD_RPM_L");
        h_rpm_r_num = iface.getParamHandle("RAFALE_HUD_RPM_R");
        h_rpm_l_str = iface.getParamHandle("RAFALE_HUD_RPM_L_STR");
        h_rpm_r_str = iface.getParamHandle("RAFALE_HUD_RPM_R_STR");
        h_afterburner_num = iface.getParamHandle("RAFALE_HUD_AB");

        h_fuel_kg_str = iface.getParamHandle("RAFALE_HUD_FUEL_KG");
        h_fuel_pct_num = iface.getParamHandle("RAFALE_HUD_FUEL_PCT");

        h_temperature_c_str = iface.getParamHandle("RAFALE_HUD_TEMP_C");
        h_density_ratio_num = iface.getParamHandle("RAFALE_HUD_SIGMA");

        h_time_str = iface.getParamHandle("RAFALE_HUD_TIME");
    }

    // Appelé CHAQUE FRAME depuis ed_fm_simulate(dt)
    // Toutes les variables viennent du namespace FM (déjà accessibles dans ton .cpp)
    void Update(EDPARAM& iface,
        // Données du namespace FM — passer directement depuis ed_fm_simulate
        double ias_ms,            // V_scalar (m/s)
        double mach_num,          // mach
        double alt_asl_m,         // altitude_ASL (mètres)
        double alt_agl_m,         // altitude_AGL (mètres)
        double heading_rad,       // heading (rad, DCS convention Y = gauche)
        double pitch_rad,         // pitch (rad)
        double roll_rad,          // roll (rad)
        double aoa_deg,           // alpha (degrés)
        double g_factor,          // g (facteur de charge)
        double vertical_speed_ms, // velocity_world.y (m/s, >0 = montée)
        double velocity_world_x,  // vitesse inertielle monde X (m/s)
        double velocity_world_y,  // vitesse inertielle monde Y (m/s)
        double velocity_world_z,  // vitesse inertielle monde Z (m/s)
        double velocity_body_x,   // vitesse inertielle repère avion X avant (m/s)
        double velocity_body_y,   // vitesse inertielle repère avion Y droite (m/s)
        double velocity_body_z,   // vitesse inertielle repère avion Z haut (m/s)
        bool body_velocity_valid, // callback body-axis reçu
        double airborne_blend,    // airborne_blend (0.0-1.0)
        double gear_pos,          // gear_pos (0.0-1.0, 1.0 = sorti)
        double airbrake_pos,      // airbrake_pos (0.0-1.0)
        double rpm_left,          // left_engine_power_readout (0.0-1.0)
        double rpm_right,         // right_engine_power_readout (0.0-1.0)
        double fadec_left,        // left_fadec_output (0.0-1.0)
        double fadec_right,       // right_fadec_output (0.0-1.0)
        double fuel_kg,           // internal_fuel (kg)
        double fuel_max_kg,       // masse totale carburant au décollage (const)
        double atm_temp_k,        // atmosphere_temperature (Kelvin)
        double atm_density,       // atmosphere_density (kg/m³)
        double fm_clock,          // fm_clock (secondes, pour horloge)
        double wow_left_main      // Weight On Wheels (0.0 en vol, 1.0 au sol)
    )
    {
        char buf[32];

        // ─── VITESSE ─────────────────────────────────────────────────────────
        // IAS : convertir m/s → knots (1 m/s = 1.94384 kts)
        double ias_kts = ias_ms * 1.94384;

        // Mode auto : affiche MACH si > 0.20 Mach (logique CTH3022 Rafale)
        bool mach_mode = (mach_num > 0.20);

        if (mach_mode) {
            // Format Mach : "0.75" (4 chars, zéro avant le point)
            snprintf(buf, sizeof(buf), "%.2f", mach_num);
            iface.setParamString(h_speed_mach_str, buf);
            iface.setParamString(h_speed_mode_str, "M");
            // IAS toujours visible en secondaire
            snprintf(buf, sizeof(buf), "%03d", (int)ias_kts);
            iface.setParamString(h_speed_ias_str, buf);
        }
        else {
            // Format IAS : "250" (3 digits, toujours)
            snprintf(buf, sizeof(buf), "%03d", (int)ias_kts);
            iface.setParamString(h_speed_ias_str, buf);
            iface.setParamString(h_speed_mach_str, "");
            iface.setParamString(h_speed_mode_str, "");
        }

        // ─── ALTITUDE ────────────────────────────────────────────────────────
        // Conversion mètres → pieds (1m = 3.28084 ft)
        double alt_baro_ft = alt_asl_m * 3.28084;
        double alt_agl_ft = alt_agl_m * 3.28084;

        // Séparer altitude baro en FL (centaines) et DU (dizaines + unités)
        int alt_baro_int = (int)alt_baro_ft;
        int fl = alt_baro_int / 100;           // ex: 15123 → 151
        int du = alt_baro_int % 100;           // ex: 15123 → 23

        // Format FL : sans padding (151 pas 0151)
        snprintf(buf, sizeof(buf), "%d", fl);
        iface.setParamString(h_alt_baro_fl_str, buf);

        // Format DU : 2 chiffres zéro-paddés (23 pas 3)
        snprintf(buf, sizeof(buf), "%02d", du);
        iface.setParamString(h_alt_baro_du_str, buf);

        // ALT AGL : format original (5 chiffres zéro-paddés)
        snprintf(buf, sizeof(buf), "%05d", (int)alt_agl_ft);
        iface.setParamString(h_alt_agl_str, buf);

        iface.setParamString(h_alt_mode_str, "BARO");

        // ─── NAVIGATION ──────────────────────────────────────────────────────
        // Heading : DCS convention — yaw positif = gauche (opposé convention compass)
        // On inverse le signe pour afficher le cap compas réel
        double hdg_deg = -heading_rad * (180.0 / 3.14159265358979323846);
        // Normaliser dans [0, 360[
        while (hdg_deg < 0.0) hdg_deg += 360.0;
        while (hdg_deg >= 360.0) hdg_deg -= 360.0;
        snprintf(buf, sizeof(buf), "%03d", (int)hdg_deg);
        iface.setParamString(h_heading_str, buf);

        // Vitesse verticale en ft/min (CTH3022 affiche en ft/min)
        double vspeed_fpm = vertical_speed_ms * 196.850394; // m/s → ft/min
        iface.setParamNumber(h_vspeed_num, vspeed_fpm);
        // Format string : "+1250" ou "-0450"
        snprintf(buf, sizeof(buf), "%+05d", (int)vspeed_fpm);
        iface.setParamString(h_vspeed_str, buf);

        // ─── ATTITUDES ───────────────────────────────────────────────────────
        // DCS body axis : roll = omegax, pitch = omegaz
        // pitch_rad et roll_rad sont déjà en radians dans ton EFM
        double pitch_deg = pitch_rad;
        double roll_deg = roll_rad;

        iface.setParamNumber(h_pitch_num, pitch_deg);
        iface.setParamNumber(h_roll_num, roll_deg);

        // AOA
        iface.setParamNumber(h_aoa_num, aoa_deg);
        snprintf(buf, sizeof(buf), "%.1f", aoa_deg);
        iface.setParamString(h_aoa_str, buf);

        // Facteur G — format "+5.3G"
        iface.setParamNumber(h_g_num, g_factor);
        snprintf(buf, sizeof(buf), "%+.1fG", g_factor);
        iface.setParamString(h_g_str, buf);

        // ─── FLIGHT PATH PITCH LADDER + FLIGHT PATH VECTOR ─────────────────────────
        // Le FPM représente la trajectoire inertielle. On utilise la vitesse monde
        // pour γ, et cette même vitesse exprimée dans le repère avion pour sa
        // position angulaire par rapport au boresight.
        //
        // REPÈRE AVION UTILISÉ PAR CE FICHIER :
        //   X = avant
        //   Y = haut
        //   Z = droite
        //
        // Dans le repère monde utilisé ici :
        //   Y = vertical.
        //
        // γ = atan2(Vworld_y, sqrt(Vworld_x² + Vworld_z²))
        //
        // Pour le vecteur vitesse dans le repère avion :
        //   az = atan2(Vbody_z, Vbody_x)                         (droite / avant)
        //   el = atan2(Vbody_y, sqrt(Vbody_x² + Vbody_z²))      (haut / horizontal)
        //
        // Projection perspective brute sur le plan image :
        //   Xhud = Vbody_z / Vbody_x
        //   Yhud = Vbody_y / Vbody_x
        //
        // Le Lua applique ensuite l'échelle/FOV propre au HUD.
        double flight_path_angle = 0.0;
        double alpha_display = 0.0;
        double vv_azimuth = 0.0;
        double vv_elevation = 0.0;
        double vv_x = 0.0;
        double vv_y = 0.0;

        const double vv_speed = std::sqrt(
            velocity_world_x * velocity_world_x +
            velocity_world_y * velocity_world_y +
            velocity_world_z * velocity_world_z);

        const bool vv_valid = body_velocity_valid && (vv_speed > 0.5);

        if (vv_valid) {
            // Repère monde : X/Z horizontaux, Y vertical.
            // Angle de trajectoire inertiel γ = atan2(Vworld_y / V_horizontal)
            // où V_horizontal = sqrt(Vworld_x² + Vworld_z²).
            const double horizontal_world = std::sqrt(
                velocity_world_x * velocity_world_x +
                velocity_world_z * velocity_world_z);

            flight_path_angle = std::atan2(velocity_world_y, horizontal_world);

            // Vecteur vitesse dans le repère avion :
            //   X = avant, Y = haut, Z = droite.
            // La composante horizontale dans le plan XZ est :
            //   horizontal_body = sqrt(Vbody_x² + Vbody_z²)
            const double horizontal_body = std::sqrt(
                velocity_body_x * velocity_body_x +
                velocity_body_z * velocity_body_z);

            // Azimut : déplacement droite/gauche par rapport au nez.
            vv_azimuth = std::atan2(velocity_body_z, velocity_body_x);

            // Élévation : déplacement haut/bas par rapport au plan longitudinal.
            // AU SOL (wow_left_main == 1.0) : élévation = 0.0
            // EN VOL (wow_left_main == 0.0) : élévation = calcul normal
            // On utilise un BLEND progressif : (1.0 - wow_left_main) * élévation_réelle
            double vv_elevation_real = std::atan2(velocity_body_y, horizontal_body);
            vv_elevation = vv_elevation_real * (1.0 - wow_left_main);

            // Projection perspective sur le plan image du HUD.
            // Avec X = avant, Y = haut, Z = droite :
            //   x_image = Z / X  -> droite/gauche
            //   y_image = Y / X  -> haut/bas
            //
            // C'est la projection directe du vecteur vitesse fourni par DCS,
            // sans reconstruction à partir de l'AoA/AoS.
            if (velocity_body_x > 0.5) {
                vv_x = velocity_body_z / velocity_body_x;
                // AU SOL : vv_y est multiplié par (1.0 - wow_left_main)
                // Ça garantit que vv_y = 0.0 quand wow = 1.0
                double vv_y_real = velocity_body_y / velocity_body_x;
                vv_y = vv_y_real * (1.0 - wow_left_main);
            }

            alpha_display = flight_path_angle - pitch_rad;

            const double ALPHA_CLAMP = 0.3490658503988659; // ±20°
            if (alpha_display > ALPHA_CLAMP) alpha_display = ALPHA_CLAMP;
            if (alpha_display < -ALPHA_CLAMP) alpha_display = -ALPHA_CLAMP;
        }

        iface.setParamNumber(h_fppl_flight_path_angle, flight_path_angle);
        iface.setParamNumber(h_fppl_pitch_rad, pitch_rad);
        iface.setParamNumber(h_fppl_alpha_display, alpha_display);

        iface.setParamNumber(h_vv_azimuth, vv_azimuth);
        iface.setParamNumber(h_vv_elevation, vv_elevation);
        iface.setParamNumber(h_vv_x, vv_x);
        iface.setParamNumber(h_vv_y, vv_y);
        iface.setParamNumber(h_vv_flight_path_angle, flight_path_angle);
        iface.setParamNumber(h_vv_speed, vv_speed);
        iface.setParamNumber(h_vv_valid, vv_valid ? 1.0 : 0.0);

        // ─── DONNÉES VOL ─────────────────────────────────────────────────────
        iface.setParamNumber(h_airborne_num, airborne_blend);

        // Warning train rentré si sorti > 50% et en vol
        if (gear_pos > 0.5 && airborne_blend > 0.5) {
            iface.setParamString(h_gear_str, "GEAR");
        }
        else {
            iface.setParamString(h_gear_str, "");
        }

        iface.setParamNumber(h_airbrake_num, airbrake_pos);

        // ─── MOTEURS ─────────────────────────────────────────────────────────
        iface.setParamNumber(h_rpm_l_num, rpm_left);
        iface.setParamNumber(h_rpm_r_num, rpm_right);

        snprintf(buf, sizeof(buf), "%02d%%", (int)(rpm_left * 100.0));
        iface.setParamString(h_rpm_l_str, buf);
        snprintf(buf, sizeof(buf), "%02d%%", (int)(rpm_right * 100.0));
        iface.setParamString(h_rpm_r_str, buf);

        // Post-combustion : moyenne des deux moteurs
        double ab_avg = (fadec_left + fadec_right) * 0.5;
        // DETENTE_HIGH = 0.60 (depuis ton EFM)
        double ab_vis = (ab_avg > 0.60) ? (ab_avg - 0.60) / 0.40 : 0.0;
        iface.setParamNumber(h_afterburner_num, ab_vis);

        // ─── CARBURANT ───────────────────────────────────────────────────────
        snprintf(buf, sizeof(buf), "%05d", (int)fuel_kg);
        iface.setParamString(h_fuel_kg_str, buf);

        double fuel_pct = (fuel_max_kg > 0.0) ? (fuel_kg / fuel_max_kg) : 0.0;
        if (fuel_pct < 0.0) fuel_pct = 0.0;
        if (fuel_pct > 1.0) fuel_pct = 1.0;
        iface.setParamNumber(h_fuel_pct_num, fuel_pct);

        // ─── ATMOSPHÈRE ──────────────────────────────────────────────────────
        double temp_c = atm_temp_k - 273.15;
        snprintf(buf, sizeof(buf), "%+.0f", temp_c);
        iface.setParamString(h_temperature_c_str, buf);

        // Densité relative σ = ρ/ρ₀ (ρ₀ = 1.225 kg/m³ au niveau de la mer)
        double sigma = atm_density / 1.225;
        iface.setParamNumber(h_density_ratio_num, sigma);

        // ─── HORLOGE ─────────────────────────────────────────────────────────
        // fm_clock = secondes depuis début mission (peut dépasser 86400)
        int total_sec = (int)fm_clock;
        int h_clock = (total_sec / 3600) % 24;
        int m_clock = (total_sec / 60) % 60;
        int s_clock = total_sec % 60;
        snprintf(buf, sizeof(buf), "%02d:%02d:%02d", h_clock, m_clock, s_clock);
        iface.setParamString(h_time_str, buf);
    }
};

#pragma once