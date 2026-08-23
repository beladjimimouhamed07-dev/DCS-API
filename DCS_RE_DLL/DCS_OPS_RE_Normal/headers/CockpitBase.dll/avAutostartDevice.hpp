#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAutostartDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAutostartDevice
{
public:

    // RVA: 0x871 | Ordinal: 2162
        void SetCommand(int, float);

    // RVA: 0xC9 | Ordinal: 202
        void avAutostartDevice(class cockpit::avAutostartDevice &&);

    // RVA: 0xCA | Ordinal: 203
        void avAutostartDevice(class cockpit::avAutostartDevice const &);

    // RVA: 0xCB | Ordinal: 204
        void avAutostartDevice(void);

    // RVA: 0xA66 | Ordinal: 2663
        void check_autostart_condition(unsigned int);

    // RVA: 0x12DC | Ordinal: 4829
        void l_check_autostart_condition(struct lua_State *);

    // RVA: 0x1359 | Ordinal: 4954
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x2E0 | Ordinal: 737
        void _avAutostartDevice(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAUTOSTARTDEVICE_HPP
