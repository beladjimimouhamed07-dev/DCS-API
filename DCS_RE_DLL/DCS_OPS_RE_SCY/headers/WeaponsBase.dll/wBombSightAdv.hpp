#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wBombSightAdv
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBombSightAdv
{
public:

    // RVA: 0xD6 | Ordinal: 215
        void aim(double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double);

    // RVA: 0xD7 | Ordinal: 216
        void aim(double, double, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const);

    // RVA: 0xE0 | Ordinal: 225
        void calcForce(class Math::Position<3, double, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xE3 | Ordinal: 228
        void calcIyz(double, double, double);

    // RVA: 0xE4 | Ordinal: 229
        void calcMa(double, double, double, double);

    // RVA: 0xE5 | Ordinal: 230
        void calcMw(double, double, double);

    // RVA: 0xE6 | Ordinal: 231
        void calcTorque(class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xE9 | Ordinal: 234
        void calc_Force_loc_v(class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double, double, double);

    // RVA: 0xFD | Ordinal: 254
        void cluster_aim(double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, double, double, bool, bool, double, double &, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, double);

    // RVA: 0x100 | Ordinal: 257
        void cluster_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, double, double, bool);

    // RVA: 0x10B | Ordinal: 268
        void ct_simulate_(double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x153 | Ordinal: 340
        void getCy(double, double, double);

    // RVA: 0x171 | Ordinal: 370
        void getFMParams(class Math::Vector<3, double> &, double, double *, double *, double *, double *);

    // RVA: 0x1EC | Ordinal: 493
        void initCluster(double);

    // RVA: 0x1FA | Ordinal: 507
        void instance(void);

    // RVA: 0x1FE | Ordinal: 511
        void intersect_(double, class Math::Vector<3, double> const &, class Math::Vector<3, double> &);

    // RVA: 0x24F | Ordinal: 592
        void setCx(double, double, double, double, double);

    // RVA: 0x250 | Ordinal: 593
        void setData(struct wBombSightAdv::FMData const &);

    // RVA: 0x25A | Ordinal: 603
        void setDt(double);

    // RVA: 0x261 | Ordinal: 610
        void setGw2Parameters(double, double, double, double, double);

    // RVA: 0x273 | Ordinal: 628
        void setParameters(double, double, double, double);

    // RVA: 0x295 | Ordinal: 662
        void simple_aim(double, double, class Math::Vector<3, double> const &, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const);

    // RVA: 0x29A | Ordinal: 667
        void simulate_(double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> const &);

    // RVA: 0x29B | Ordinal: 668
        void simulate_(double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x29E | Ordinal: 671
        void simulate_gw2_(double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> const &);

    // RVA: 0x1C | Ordinal: 29
        void wBombSightAdv(void);

    // RVA: 0x55 | Ordinal: 86
        void _wBombSightAdv(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WBOMBSIGHTADV_HPP
