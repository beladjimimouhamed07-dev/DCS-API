#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccPanelGaugeForParameter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccPanelGaugeForParameter
{
public:

    // RVA: 0x21D | Ordinal: 542
        void ccPanelGaugeForParameter(class cockpit::ccPanelGaugeForParameter &&);

    // RVA: 0x21E | Ordinal: 543
        void ccPanelGaugeForParameter(class cockpit::ccPanelGaugeForParameter const &);

    // RVA: 0x21F | Ordinal: 544
        void ccPanelGaugeForParameter(void);

    // RVA: 0x1494 | Ordinal: 5269
        void parameter_gauge(class cockpit::ccPanelGauge *, class cockpit::ccMainPanel *);

    // RVA: 0x17E9 | Ordinal: 6122
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x38E | Ordinal: 911
        void _ccPanelGaugeForParameter(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCPANELGAUGEFORPARAMETER_HPP
