#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIPlaneFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIPlaneFM
{
public:

    // RVA: 0x14 | Ordinal: 21
        void AIPlaneFM(class IwoLA *, class EagleFM::AIFM::AIPlaneInit const &);

    // RVA: 0x15 | Ordinal: 22
        void AIPlaneFM(void);

    // RVA: 0x4C | Ordinal: 77
        void add_local_force_component(double &, double &, double &, double &, double &, double &);

    // RVA: 0x4D | Ordinal: 78
        void add_local_moment_component(double &, double &, double &);

    // RVA: 0x4F | Ordinal: 80
        void aerodynamics(double);

    // RVA: 0x52 | Ordinal: 83
        void break_chute(double);

    // RVA: 0x56 | Ordinal: 87
        void calculate_AoA_cFromFy_c(double) const;

    // RVA: 0x57 | Ordinal: 88
        void calculate_Omega_Y_cFrom_AoS_dot_c(double, class Eigen::Matrix<double, 3, 1, 0, 3, 1>) const;

    // RVA: 0x58 | Ordinal: 89
        void calculate_Omega_Z_cFrom_AoA_dot_c(double, class Eigen::Matrix<double, 3, 1, 0, 3, 1>) const;

    // RVA: 0x5A | Ordinal: 91
        void continuePathFollowing(void);

    // RVA: 0x5B | Ordinal: 92
        void controlPlane(double);

    // RVA: 0x62 | Ordinal: 99
        void doSimulate(void);

    // RVA: 0x65 | Ordinal: 102
        void fm_descriptor(void) const;

    // RVA: 0x84 | Ordinal: 133
        void getParam(unsigned int) const;

    // RVA: 0x95 | Ordinal: 150
        void getStatus(void);

    // RVA: 0xA8 | Ordinal: 169
        void get_AoA(void) const;

    // RVA: 0xA9 | Ordinal: 170
        void get_AoA_dop(void) const;

    // RVA: 0xAA | Ordinal: 171
        void get_AoS(void) const;

    // RVA: 0xAC | Ordinal: 173
        void get_Bpol(void) const;

    // RVA: 0xAB | Ordinal: 172
        void get_Bpol4(void) const;

    // RVA: 0xAD | Ordinal: 174
        void get_CY2(void) const;

    // RVA: 0xAE | Ordinal: 175
        void get_Cx(void) const;

    // RVA: 0xAF | Ordinal: 176
        void get_Cy(void) const;

    // RVA: 0xB0 | Ordinal: 177
        void get_Cy_max(void) const;

    // RVA: 0xB1 | Ordinal: 178
        void get_Cyal(void) const;

    // RVA: 0xB2 | Ordinal: 179
        void get_FPA(void) const;

    // RVA: 0xB3 | Ordinal: 180
        void get_F_D(void) const;

    // RVA: 0xB4 | Ordinal: 181
        void get_F_L(void) const;

    // RVA: 0xB5 | Ordinal: 182
        void get_Fy_max(void) const;

    // RVA: 0xB6 | Ordinal: 183
        void get_Fy_min(void) const;

    // RVA: 0xB7 | Ordinal: 184
        void get_J_B(void) const;

    // RVA: 0xB8 | Ordinal: 185
        void get_MoI(void) const;

    // RVA: 0xB9 | Ordinal: 186
        void get_Nobj(void) const;

    // RVA: 0xBA | Ordinal: 187
        void get_Nx(void) const;

    // RVA: 0xBB | Ordinal: 188
        void get_Ny(void) const;

    // RVA: 0xBC | Ordinal: 189
        void get_Ny_c(void) const;

    // RVA: 0xBD | Ordinal: 190
        void get_Ny_max(void) const;

    // RVA: 0xBE | Ordinal: 191
        void get_Ny_min(void) const;

    // RVA: 0xBF | Ordinal: 192
        void get_Nz(void) const;

    // RVA: 0xC0 | Ordinal: 193
        void get_Omx_max(void) const;

    // RVA: 0xC1 | Ordinal: 194
        void get_V_air(void) const;

    // RVA: 0xC2 | Ordinal: 195
        void get_V_air_c(void) const;

    // RVA: 0xC3 | Ordinal: 196
        void get_V_ground(void) const;

    // RVA: 0xC4 | Ordinal: 197
        void get_V_ground_c(void) const;

    // RVA: 0xC5 | Ordinal: 198
        void get_V_wcs(void) const;

    // RVA: 0xC6 | Ordinal: 199
        void get_W_u(void) const;

    // RVA: 0xC7 | Ordinal: 200
        void get_W_v(void) const;

    // RVA: 0xC9 | Ordinal: 202
        void get_afterburner_flag(unsigned int) const;

    // RVA: 0xCA | Ordinal: 203
        void get_aim_c(void) const;

    // RVA: 0xCB | Ordinal: 204
        void get_air_brake(void) const;

    // RVA: 0xCC | Ordinal: 205
        void get_atmoshpere(void) const;

    // RVA: 0xCD | Ordinal: 206
        void get_chi(void) const;

    // RVA: 0xCE | Ordinal: 207
        void get_chi_c(void) const;

    // RVA: 0xCF | Ordinal: 208
        void get_control_manager(void) const;

    // RVA: 0xD0 | Ordinal: 209
        void get_cx_0(void) const;

    // RVA: 0xD1 | Ordinal: 210
        void get_descriptor(void) const;

    // RVA: 0xD3 | Ordinal: 212
        void get_dt(void) const;

    // RVA: 0xD4 | Ordinal: 213
        void get_du_max(void) const;

    // RVA: 0xD5 | Ordinal: 214
        void get_engine(unsigned int) const;

    // RVA: 0xD6 | Ordinal: 215
        void get_engine_relative_rpm(unsigned int) const;

    // RVA: 0xD7 | Ordinal: 216
        void get_engine_throttle(unsigned int) const;

    // RVA: 0xD8 | Ordinal: 217
        void get_engines(void) const;

    // RVA: 0xD9 | Ordinal: 218
        void get_fl_point(void) const;

    // RVA: 0xDA | Ordinal: 219
        void get_fpa_c(void) const;

    // RVA: 0xDC | Ordinal: 221
        void get_gamma(void) const;

    // RVA: 0xDD | Ordinal: 222
        void get_gear_pos_w(void) const;

    // RVA: 0xDE | Ordinal: 223
        void get_ground_aim(void) const;

    // RVA: 0xDF | Ordinal: 224
        void get_ground_pro_climb_min(void) const;

    // RVA: 0xE0 | Ordinal: 225
        void get_ground_shoot(void) const;

    // RVA: 0xE1 | Ordinal: 226
        void get_h_c(void) const;

    // RVA: 0xE2 | Ordinal: 227
        void get_harl(class osg::Vec3d const &) const;

    // RVA: 0xE3 | Ordinal: 228
        void get_iowner(void) const;

    // RVA: 0xE4 | Ordinal: 229
        void get_j_y_n_w(void) const;

    // RVA: 0xE5 | Ordinal: 230
        void get_keep_vel_req(void) const;

    // RVA: 0xE6 | Ordinal: 231
        void get_leader_n_r(void) const;

    // RVA: 0xE7 | Ordinal: 232
        void get_leader_task(void) const;

    // RVA: 0xE8 | Ordinal: 233
        void get_main_gears_contact(void) const;

    // RVA: 0xE9 | Ordinal: 234
        void get_mass(void) const;

    // RVA: 0xEA | Ordinal: 235
        void get_n_r(void) const;

    // RVA: 0xEB | Ordinal: 236
        void get_nose_gear_psi(void) const;

    // RVA: 0xEC | Ordinal: 237
        void get_nose_wheel_pos_l(void) const;

    // RVA: 0xEE | Ordinal: 239
        void get_omega(void) const;

    // RVA: 0xEF | Ordinal: 240
        void get_omega_dot(void) const;

    // RVA: 0xF0 | Ordinal: 241
        void get_omega_w(void) const;

    // RVA: 0xF1 | Ordinal: 242
        void get_omega_x_c(void) const;

    // RVA: 0xF2 | Ordinal: 243
        void get_omega_y_c(void) const;

    // RVA: 0xF3 | Ordinal: 244
        void get_omega_z_c(void) const;

    // RVA: 0xF4 | Ordinal: 245
        void get_orientation(void) const;

    // RVA: 0xF5 | Ordinal: 246
        void get_orientation_T(void) const;

    // RVA: 0xF7 | Ordinal: 248
        void get_phi(void) const;

    // RVA: 0xF8 | Ordinal: 249
        void get_phi_c(void) const;

    // RVA: 0xF9 | Ordinal: 250
        void get_pilot_head_pos(void) const;

    // RVA: 0xFB | Ordinal: 252
        void get_position(void) const;

    // RVA: 0xFC | Ordinal: 253
        void get_psi(void) const;

    // RVA: 0xFD | Ordinal: 254
        void get_q(void) const;

    // RVA: 0xFE | Ordinal: 255
        void get_quaternion_inv(void) const;

    // RVA: 0x100 | Ordinal: 257
        void get_rho(void) const;

    // RVA: 0x101 | Ordinal: 258
        void get_rs_enable(void) const;

    // RVA: 0x102 | Ordinal: 259
        void get_sau_flight(void) const;

    // RVA: 0x103 | Ordinal: 260
        void get_support_gears_contact(void) const;

    // RVA: 0x104 | Ordinal: 261
        void get_theta(void) const;

    // RVA: 0x105 | Ordinal: 262
        void get_theta_c(void) const;

    // RVA: 0x108 | Ordinal: 265
        void get_turn_value(void) const;

    // RVA: 0x109 | Ordinal: 266
        void get_u_0(void) const;

    // RVA: 0x10A | Ordinal: 267
        void get_u_d(void) const;

    // RVA: 0x10B | Ordinal: 268
        void get_u_max(void) const;

    // RVA: 0x10C | Ordinal: 269
        void get_u_min(void) const;

    // RVA: 0x10D | Ordinal: 270
        void get_velocity(void) const;

    // RVA: 0x10E | Ordinal: 271
        void get_velocity_bcs(void) const;

    // RVA: 0x10F | Ordinal: 272
        void get_wind_l(void) const;

    // RVA: 0x110 | Ordinal: 273
        void get_wind_w(void) const;

    // RVA: 0x111 | Ordinal: 274
        void get_z_l(void) const;

    // RVA: 0x116 | Ordinal: 279
        void init(class IwoLA *, class EagleFM::AIFM::AIPlaneInit const &);

    // RVA: 0x11B | Ordinal: 284
        void initAirStart(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0x11E | Ordinal: 287
        void initColdStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0x121 | Ordinal: 290
        void initHotStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0x123 | Ordinal: 292
        void interruptPathFollowing(enum wConst);

    // RVA: 0x125 | Ordinal: 294
        void moments(double);

    // RVA: 0x126 | Ordinal: 295
        void prepare_for_simulation(void);

    // RVA: 0x128 | Ordinal: 297
        void selectModelTimeStep(void);

    // RVA: 0x129 | Ordinal: 298
        void setAirTarget(class MovingObject *);

    // RVA: 0x12A | Ordinal: 299
        void setArrival(class wAirdrome *);

    // RVA: 0x12D | Ordinal: 302
        void setCircleOrbit(void);

    // RVA: 0x12E | Ordinal: 303
        void setCollisionAvoidance(bool);

    // RVA: 0x12F | Ordinal: 304
        void setCommand(int, float);

    // RVA: 0x130 | Ordinal: 305
        void setControlVector(class std::array<float, 35> const &);

    // RVA: 0x135 | Ordinal: 310
        void setFollowDirection(void);

    // RVA: 0x136 | Ordinal: 311
        void setFollowLeader(class MovingObject *);

    // RVA: 0x139 | Ordinal: 314
        void setHolding(void);

    // RVA: 0x13A | Ordinal: 315
        void setLanding(class wAirdrome *);

    // RVA: 0x13C | Ordinal: 317
        void setN_obj(int);

    // RVA: 0x13E | Ordinal: 319
        void setPath(void);

    // RVA: 0x14A | Ordinal: 331
        void setSurfaceProp(double, class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>, float, float);

    // RVA: 0x14B | Ordinal: 332
        void setTakeoff(class wAirdrome *);

    // RVA: 0x14D | Ordinal: 334
        void setTaxi(class wAirdrome *, class edterrain::IRoute *, enum wAirbase::E_RWdirPurpose);

    // RVA: 0x14F | Ordinal: 336
        void setWaiting(void);

    // RVA: 0x150 | Ordinal: 337
        void setWaitingForWingmen(void);

    // RVA: 0x153 | Ordinal: 340
        void set_atmosphere(double, double, double, double, double);

    // RVA: 0x154 | Ordinal: 341
        void set_current_state(double, double, double, double, double, double);

    // RVA: 0x155 | Ordinal: 342
        void set_current_state_body_axis(double, double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x15C | Ordinal: 349
        void start(void);

    // RVA: 0x161 | Ordinal: 354
        void stop(void);

    // RVA: 0x162 | Ordinal: 355
        void thrust(double);

    // RVA: 0x26 | Ordinal: 39
        void _AIPlaneFM(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIPLANEFM_HPP
