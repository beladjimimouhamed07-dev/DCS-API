#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDrawCachedObj
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDrawCachedObj
{
public:

    // RVA: 0x102 | Ordinal: 259
        void avDrawCachedObj(void);

    // RVA: 0x162F | Ordinal: 5680
        void reset_draw_objects(void) const;

    // RVA: 0x187C | Ordinal: 6269
        void set_draw_object(class cockpit::Element *, unsigned int) const;

    // RVA: 0x2FC | Ordinal: 765
        void _avDrawCachedObj(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDRAWCACHEDOBJ_HPP
