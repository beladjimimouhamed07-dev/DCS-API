#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccPanelGaugeExternalArgToCockpit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccPanelGaugeExternalArgToCockpit
{
public:

    // RVA: 0x21A | Ordinal: 539
        void ccPanelGaugeExternalArgToCockpit(class cockpit::ccPanelGaugeExternalArgToCockpit &&);

    // RVA: 0x21B | Ordinal: 540
        void ccPanelGaugeExternalArgToCockpit(class cockpit::ccPanelGaugeExternalArgToCockpit const &);

    // RVA: 0x21C | Ordinal: 541
        void ccPanelGaugeExternalArgToCockpit(void);

    // RVA: 0x13FE | Ordinal: 5119
        void map_external_shape_arg_to_cockpit(class cockpit::ccPanelGauge *, class cockpit::ccMainPanel *);

    // RVA: 0x17E8 | Ordinal: 6121
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x38D | Ordinal: 910
        void _ccPanelGaugeExternalArgToCockpit(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCPANELGAUGEEXTERNALARGTOCOCKPIT_HPP
