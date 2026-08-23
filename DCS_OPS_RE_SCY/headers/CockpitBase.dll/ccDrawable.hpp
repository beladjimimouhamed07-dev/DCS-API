#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccDrawable>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccDrawable_
{
public:

    // RVA: 0x791 | Ordinal: 1938
        void DoStop(void);

    // RVA: 0x7B0 | Ordinal: 1969
        void GetDeltaTime(void) const;

    // RVA: 0x7F4 | Ordinal: 2037
        void Kill(bool);

    // RVA: 0x8AF | Ordinal: 2224
        void SetDeltaTime(double);

    // RVA: 0x8BB | Ordinal: 2236
        void SetParent(class cockpit::ccDrawable *);

    // RVA: 0x8C8 | Ordinal: 2249
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCDRAWABLE_HPP
