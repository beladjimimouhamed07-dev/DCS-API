#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceStringSLineOutlined
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceStringSLineOutlined
{
public:

    // RVA: 0xB27 | Ordinal: 2856
        void copy(void);

    // RVA: 0xE4B | Ordinal: 3660
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x167F | Ordinal: 5760
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17FA | Ordinal: 6139
        void setValue(struct lua_State *, class ed::basic_string<char> const &);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESTRINGSLINEOUTLINED_HPP
