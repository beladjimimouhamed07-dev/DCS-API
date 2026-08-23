#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccPanelGauge
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccPanelGauge
{
public:

    // RVA: 0x215 | Ordinal: 534
        void ccPanelGauge(class cockpit::ccPanelGauge const &);

    // RVA: 0x216 | Ordinal: 535
        void ccPanelGauge(void);

    // RVA: 0xC47 | Ordinal: 3144
        void getArgNumber(void) const;

    // RVA: 0xC48 | Ordinal: 3145
        void getArgValue(float) const;

    // RVA: 0xD8A | Ordinal: 3467
        void getParam(int) const;

    // RVA: 0x142F | Ordinal: 5168
        void onAddTo(class cockpit::ccMainPanel *);

    // RVA: 0x1456 | Ordinal: 5207
        void onRemoveFrom(class cockpit::ccMainPanel *);

    // RVA: 0x1571 | Ordinal: 5490
        void read_from_state(class Lua::Config &);

    // RVA: 0x16A1 | Ordinal: 5794
        void setArgs(class cockpit::ccMainPanel *, float);

    // RVA: 0x38B | Ordinal: 908
        void _ccPanelGauge(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCPANELGAUGE_HPP
