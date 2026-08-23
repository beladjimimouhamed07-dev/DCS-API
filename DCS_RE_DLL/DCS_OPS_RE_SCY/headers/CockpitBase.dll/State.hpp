#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: State
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace avCommunicator {

class State
{
public:

    // RVA: 0x87 | Ordinal: 136
        void State(void);

    // RVA: 0x164A | Ordinal: 5707
        void saveInState(struct lua_State *) const;
};

} // namespace avCommunicator
} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_STATE_HPP
