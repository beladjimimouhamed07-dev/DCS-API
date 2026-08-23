#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ccMainPanel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace avionics {

class ccMainPanel
{
public:

    // RVA: 0x2B8 | Ordinal: 697
        void RudderPedalsPosition(class cockpit::ccPanelGauge *, class EagleFM::dcswwii::avionics::ccMainPanel *);

    // RVA: 0x2C6 | Ordinal: 711
        void StickBankPosition(class cockpit::ccPanelGauge *, class EagleFM::dcswwii::avionics::ccMainPanel *);

    // RVA: 0x2C7 | Ordinal: 712
        void StickPitchPosition(class cockpit::ccPanelGauge *, class EagleFM::dcswwii::avionics::ccMainPanel *);

    // RVA: 0xDD | Ordinal: 222
        void ccMainPanel(void);

    // RVA: 0x3B3 | Ordinal: 948
        void getSensorOutput(int) const;

    // RVA: 0x438 | Ordinal: 1081
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4E8 | Ordinal: 1257
        void register_gauge_controllers(struct lua_State *, int);

    // RVA: 0x551 | Ordinal: 1362
        void setGaugeArgumentFromSensor(class cockpit::ccPanelGauge *, int);

    // RVA: 0x552 | Ordinal: 1363
        void setGaugeArgumentFromValue(class cockpit::ccPanelGauge *, double);

    // RVA: 0x14A | Ordinal: 331
        void _ccMainPanel(void);
};

} // namespace avionics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_CCMAINPANEL_HPP
