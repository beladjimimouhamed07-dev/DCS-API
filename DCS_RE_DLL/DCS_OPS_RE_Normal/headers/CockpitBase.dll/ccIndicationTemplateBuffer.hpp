#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccIndicationTemplateBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccIndicationTemplateBuffer
{
public:

    // RVA: 0x1FE | Ordinal: 511
        void ccIndicationTemplateBuffer(class cockpit::ccIndicationTemplateBuffer const &);

    // RVA: 0x1FF | Ordinal: 512
        void ccIndicationTemplateBuffer(void);

    // RVA: 0x1213 | Ordinal: 4628
        void initialize(class cockpit::ccIndicator *, struct lua_State *, char const *);

    // RVA: 0x1467 | Ordinal: 5224
        void on_change_mode(class cockpit::ccIndicator *, struct lua_State *);

    // RVA: 0x194E | Ordinal: 6479
        void set_template(class cockpit::ccIndicatorPage *);

    // RVA: 0x37F | Ordinal: 896
        void _ccIndicationTemplateBuffer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCINDICATIONTEMPLATEBUFFER_HPP
