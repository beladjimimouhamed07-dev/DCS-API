#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceSCircle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceSCircle
{
public:

    // RVA: 0x23C | Ordinal: 573
        void ceSCircle(class cockpit::ceSCircle const &);

    // RVA: 0x23D | Ordinal: 574
        void ceSCircle(void);

    // RVA: 0xA9A | Ordinal: 2715
        void class_name(void) const;

    // RVA: 0xB21 | Ordinal: 2850
        void copy(void);

    // RVA: 0xE45 | Ordinal: 3654
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x17F4 | Ordinal: 6133
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x18D1 | Ordinal: 6354
        void set_mat_params(class cockpit::ccIndicationRenderParser const &, class Graphics::RenderObject *);

    // RVA: 0x39D | Ordinal: 926
        void _ceSCircle(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CESCIRCLE_HPP
