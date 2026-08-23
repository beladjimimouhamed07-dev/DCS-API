#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wNURSSightV2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wNURSSightV2
{
public:

    // RVA: 0xED | Ordinal: 238
        void calculateImpactPoint(double, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, enum wNURSSight::AimType, double, double, class Math::Vector<3, double> &, double &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, bool, struct wNURSSight::targeting_data *);

    // RVA: 0x151 | Ordinal: 338
        void getCx0(double);

    // RVA: 0x173 | Ordinal: 372
        void getFMParams(class Math::Vector<3, double> &, double, double *, double *, double *, double *);

    // RVA: 0x240 | Ordinal: 577
        void setAdditionalData(struct wNURSSightV2::additionalData const &);

    // RVA: 0x252 | Ordinal: 595
        void setData(struct wNURSSight::FMData const &, struct wNURSSight::EngineData const &);

    // RVA: 0x253 | Ordinal: 596
        void setData(struct wNURSSight::FMData const &, struct wNURSSight::EngineData const &, struct wNURSSightV2::additionalData const &);

    // RVA: 0x29D | Ordinal: 670
        void simulate_(double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x2A0 | Ordinal: 673
        void simulate_gw2_(double, double, class Math::Vector<3, double> &, class Math::Vector<3, double> &, struct Math::Rotation3<double> &, class Math::Vector<3, double> &, class Math::Vector<3, double> const &);

    // RVA: 0x31 | Ordinal: 50
        void wNURSSightV2(class wNURSSightV2 const &);

    // RVA: 0x32 | Ordinal: 51
        void wNURSSightV2(void);

    // RVA: 0x60 | Ordinal: 97
        void _wNURSSightV2(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WNURSSIGHTV2_HPP
