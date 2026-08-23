#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: clickableElementData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class clickableElementData
{
public:

    // RVA: 0xC16 | Ordinal: 3095
        void force_update(void);

    // RVA: 0xC38 | Ordinal: 3129
        void getActionData(unsigned char);

    // RVA: 0xC39 | Ordinal: 3130
        void getActionData(unsigned char) const;

    // RVA: 0xEA6 | Ordinal: 3751
        void get_arg_value(int);

    // RVA: 0x1586 | Ordinal: 5511
        void reg_in_script(struct lua_State *);

    // RVA: 0x172B | Ordinal: 5932
        void setHint(class ed::basic_string<wchar_t> const &);

    // RVA: 0x1820 | Ordinal: 6177
        void set_arg_value(int, float);

    // RVA: 0x1AF7 | Ordinal: 6904
        void update(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CLICKABLEELEMENTDATA_HPP
