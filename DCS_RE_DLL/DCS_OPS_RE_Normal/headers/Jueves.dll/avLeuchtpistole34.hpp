#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avLeuchtpistole34
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avLeuchtpistole34
{
public:

    // RVA: 0x2B2 | Ordinal: 691
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBF | Ordinal: 192
        void avLeuchtpistole34(class cockpit::dcswwii::avLeuchtpistole34 &&);

    // RVA: 0xC0 | Ordinal: 193
        void avLeuchtpistole34(class cockpit::dcswwii::avLeuchtpistole34 const &);

    // RVA: 0xC1 | Ordinal: 194
        void avLeuchtpistole34(void);

    // RVA: 0x2E3 | Ordinal: 740
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x330 | Ordinal: 817
        void doSetCommand(int, float, bool, int);

    // RVA: 0x428 | Ordinal: 1065
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x453 | Ordinal: 1108
        void mount(bool);

    // RVA: 0x454 | Ordinal: 1109
        void move(float, float, float);

    // RVA: 0x463 | Ordinal: 1124
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x477 | Ordinal: 1144
        void netRegisterControls(int);

    // RVA: 0x4C1 | Ordinal: 1218
        void post_initialize(void);

    // RVA: 0x4DD | Ordinal: 1246
        void rearm(void);

    // RVA: 0x54C | Ordinal: 1357
        void setFlareGunActivity(enum cockpit::dcswwii::avLeuchtpistole34::FlareGunActivities);

    // RVA: 0x615 | Ordinal: 1558
        void trySetFlareColour(unsigned char);

    // RVA: 0x630 | Ordinal: 1585
        void update(void);

    // RVA: 0x13A | Ordinal: 315
        void _avLeuchtpistole34(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVLEUCHTPISTOLE34_HPP
