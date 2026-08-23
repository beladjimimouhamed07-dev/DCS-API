#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccPanelGaugeCycled
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccPanelGaugeCycled
{
public:

    // RVA: 0x217 | Ordinal: 536
        void ccPanelGaugeCycled(class cockpit::ccPanelGaugeCycled &&);

    // RVA: 0x218 | Ordinal: 537
        void ccPanelGaugeCycled(class cockpit::ccPanelGaugeCycled const &);

    // RVA: 0x219 | Ordinal: 538
        void ccPanelGaugeCycled(void);

    // RVA: 0xC49 | Ordinal: 3146
        void getArgValue(float) const;

    // RVA: 0x17E7 | Ordinal: 6120
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x38C | Ordinal: 909
        void _ccPanelGaugeCycled(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCPANELGAUGECYCLED_HPP
