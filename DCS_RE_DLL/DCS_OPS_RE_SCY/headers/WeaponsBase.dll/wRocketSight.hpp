#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wRocketSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRocketSight
{
public:

    // RVA: 0xE2 | Ordinal: 227
        void calcForce(class Math::Position<3, double, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xE8 | Ordinal: 233
        void calcTorque(class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xEB | Ordinal: 236
        void calc_Force_loc_v(class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double, double, double);

    // RVA: 0xEE | Ordinal: 239
        void calculateImpactPoint(double, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, enum wRocketSight::AimType, double, double, class Math::Vector<3, double> &, double &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, bool);

    // RVA: 0x14F | Ordinal: 336
        void getCurrent_wsType(void) const;

    // RVA: 0x155 | Ordinal: 342
        void getCy(double, double, double);

    // RVA: 0x174 | Ordinal: 373
        void getFMParams(class Math::Vector<3, double> &, double, double *, double *, double *, double *);

    // RVA: 0x254 | Ordinal: 597
        void setData(struct wRocketSight::FMData const &, struct wRocketSight::EngineData const &);

    // RVA: 0x263 | Ordinal: 612
        void setGw2Parameters(double, double, double, double, double);

    // RVA: 0x26C | Ordinal: 621
        void setMaxDist(double);

    // RVA: 0x26F | Ordinal: 624
        void setMaxTOF(double);

    // RVA: 0x28F | Ordinal: 656
        void setWsType(class wsType);

    // RVA: 0x2A1 | Ordinal: 674
        void simulate_gw2_(double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x2B0 | Ordinal: 689
        void valid(void) const;

    // RVA: 0x33 | Ordinal: 52
        void wRocketSight(class wRocketSight const &);

    // RVA: 0x34 | Ordinal: 53
        void wRocketSight(void);

    // RVA: 0x61 | Ordinal: 98
        void _wRocketSight(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WROCKETSIGHT_HPP
