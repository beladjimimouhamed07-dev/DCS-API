#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccPanelGauge_internal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccPanelGauge_internal
{
public:

    // RVA: 0x220 | Ordinal: 545
        void ccPanelGauge_internal(class cockpit::ccPanelGauge_internal &&);

    // RVA: 0x221 | Ordinal: 546
        void ccPanelGauge_internal(class cockpit::ccPanelGauge_internal const &);

    // RVA: 0x222 | Ordinal: 547
        void ccPanelGauge_internal(void);

    // RVA: 0x158E | Ordinal: 5519
        void register_gaugemeta(struct lua_State *);

    // RVA: 0x17EA | Ordinal: 6123
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x1AF1 | Ordinal: 6898
        void update(class cockpit::ccMainPanel *);

    // RVA: 0x38F | Ordinal: 912
        void _ccPanelGauge_internal(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCPANELGAUGE_INTERNAL_HPP
