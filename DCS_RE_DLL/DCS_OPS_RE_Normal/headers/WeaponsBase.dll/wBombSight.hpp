#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wBombSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBombSight
{
public:

    // RVA: 0xD4 | Ordinal: 213
        void aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double &, class Math::Vector<3, double> &);

    // RVA: 0xD5 | Ordinal: 214
        void aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double &, class Math::Vector<3, double> &, double);

    // RVA: 0xF4 | Ordinal: 245
        void chute_aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double, double &, class Math::Vector<3, double> &);

    // RVA: 0xF5 | Ordinal: 246
        void chute_aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double, double &, class Math::Vector<3, double> &, double);

    // RVA: 0xF6 | Ordinal: 247
        void chute_cluster_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double, double, double, bool, bool, double &, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double);

    // RVA: 0xF7 | Ordinal: 248
        void chute_cluster_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double, double, double, bool, bool, double &, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, double);

    // RVA: 0xF8 | Ordinal: 249
        void chute_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const);

    // RVA: 0xF9 | Ordinal: 250
        void chute_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double);

    // RVA: 0xFA | Ordinal: 251
        void cluster_aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double &, class Math::Vector<3, double> &, double);

    // RVA: 0xFB | Ordinal: 252
        void cluster_aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xFC | Ordinal: 253
        void cluster_aim(double, double, double, class Math::Vector<3, double> const &, double, double, double, double, double, double, double, double, double, double &, class Math::Vector<3, double> &, double, double);

    // RVA: 0xFE | Ordinal: 255
        void cluster_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double);

    // RVA: 0xFF | Ordinal: 256
        void cluster_simple_aim(double, double, class Math::Vector<3, double> const &, double, double, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double, double);

    // RVA: 0x1F9 | Ordinal: 506
        void instance(void);

    // RVA: 0x1FD | Ordinal: 510
        void intersect_(double, class Math::Vector<3, double> const &, class Math::Vector<3, double> &);

    // RVA: 0x293 | Ordinal: 660
        void simple_aim(double, double, class Math::Vector<3, double> const &, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const);

    // RVA: 0x294 | Ordinal: 661
        void simple_aim(double, double, class Math::Vector<3, double> const &, double, double &, class Math::Vector<3, double> &, class weapon_base::IWindTable<float, class Math::Vector<3, float>> *const, double);

    // RVA: 0x1B | Ordinal: 28
        void wBombSight(void);

    // RVA: 0x54 | Ordinal: 85
        void _wBombSight(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WBOMBSIGHT_HPP
