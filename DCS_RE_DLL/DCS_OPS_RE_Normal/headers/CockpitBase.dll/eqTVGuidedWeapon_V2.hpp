#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqTVGuidedWeapon_V2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqTVGuidedWeapon_V2
{
public:

    // RVA: 0xB61 | Ordinal: 2914
        void default_search_distance(void) const;

    // RVA: 0x263 | Ordinal: 612
        void eqTVGuidedWeapon_V2(class cockpit::eqTVGuidedWeapon_V2 &&);

    // RVA: 0x264 | Ordinal: 613
        void eqTVGuidedWeapon_V2(class cockpit::eqTVGuidedWeapon_V2 const &);

    // RVA: 0x265 | Ordinal: 614
        void eqTVGuidedWeapon_V2(class wsType const &);

    // RVA: 0x125B | Ordinal: 4700
        void isForceCorrelateApplicable(void) const;

    // RVA: 0x1263 | Ordinal: 4708
        void isInfrared(void) const;

    // RVA: 0x174D | Ordinal: 5966
        void setMaxSearchRange(double);

    // RVA: 0x3AF | Ordinal: 944
        void _eqTVGuidedWeapon_V2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQTVGUIDEDWEAPON_V2_HPP
