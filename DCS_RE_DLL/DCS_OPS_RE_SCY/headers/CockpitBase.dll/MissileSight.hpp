#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: MissileSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class MissileSight
{
public:

    // RVA: 0x6E | Ordinal: 111
        void MissileSight(class cockpit::MissileSight const &);

    // RVA: 0x6F | Ordinal: 112
        void MissileSight(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x979 | Ordinal: 2426
        void boost(double);

    // RVA: 0x989 | Ordinal: 2442
        void breakaway(void) const;

    // RVA: 0x9C8 | Ordinal: 2505
        void calculate(void);

    // RVA: 0xB78 | Ordinal: 2937
        void distance_by_time(double, double);

    // RVA: 0xB84 | Ordinal: 2949
        void drag(double);

    // RVA: 0x123C | Ordinal: 4669
        void integrate(double, double &, double &, double &);

    // RVA: 0x138A | Ordinal: 5003
        void launch_authorized(void) const;

    // RVA: 0x1404 | Ordinal: 5125
        void maverick(unsigned char) const;

    // RVA: 0x1756 | Ordinal: 5975
        void setMissileData(class wsType const &);

    // RVA: 0x1A37 | Ordinal: 6712
        void time_by_distance(double, double);

    // RVA: 0x2B3 | Ordinal: 692
        void _MissileSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_MISSILESIGHT_HPP
