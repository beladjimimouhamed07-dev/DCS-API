#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wNURSSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wNURSSight
{
public:

    // RVA: 0xE1 | Ordinal: 226
        void calcForce(class Math::Position<3, double, double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xE7 | Ordinal: 232
        void calcTorque(class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xEA | Ordinal: 235
        void calc_Force_loc_v(class Math::Vector<3, double> &, class Math::Vector<3, double> &, double, double, double, double);

    // RVA: 0xEC | Ordinal: 237
        void calculateImpactPoint(double, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, enum wNURSSight::AimType, double, double, class Math::Vector<3, double> &, double &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, bool, struct wNURSSight::targeting_data *);

    // RVA: 0x14E | Ordinal: 335
        void getCurrent_wsType(void) const;

    // RVA: 0x154 | Ordinal: 341
        void getCy(double, double, double);

    // RVA: 0x172 | Ordinal: 371
        void getFMParams(class Math::Vector<3, double> &, double, double *, double *, double *, double *);

    // RVA: 0x251 | Ordinal: 594
        void setData(struct wNURSSight::FMData const &, struct wNURSSight::EngineData const &);

    // RVA: 0x262 | Ordinal: 611
        void setGw2Parameters(double, double, double, double, double);

    // RVA: 0x26B | Ordinal: 620
        void setMaxDist(double);

    // RVA: 0x26E | Ordinal: 623
        void setMaxTOF(double);

    // RVA: 0x28E | Ordinal: 655
        void setWsType(class wsType);

    // RVA: 0x29C | Ordinal: 669
        void simulate_(double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x29F | Ordinal: 672
        void simulate_gw2_(double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x2AF | Ordinal: 688
        void valid(void) const;

    // RVA: 0x2F | Ordinal: 48
        void wNURSSight(class wNURSSight const &);

    // RVA: 0x30 | Ordinal: 49
        void wNURSSight(void);

    // RVA: 0x5F | Ordinal: 96
        void _wNURSSight(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WNURSSIGHT_HPP
