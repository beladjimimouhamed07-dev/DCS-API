#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: av5D1297AutoSelectorSwitch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class av5D1297AutoSelectorSwitch
{
public:

    // RVA: 0x2AD | Ordinal: 686
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x92 | Ordinal: 147
        void av5D1297AutoSelectorSwitch(class cockpit::dcswwii::av5D1297AutoSelectorSwitch &&);

    // RVA: 0x93 | Ordinal: 148
        void av5D1297AutoSelectorSwitch(class cockpit::dcswwii::av5D1297AutoSelectorSwitch const &);

    // RVA: 0x94 | Ordinal: 149
        void av5D1297AutoSelectorSwitch(void);

    // RVA: 0x2FA | Ordinal: 763
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x322 | Ordinal: 803
        void doSetCommand(int, float, bool, int);

    // RVA: 0x33E | Ordinal: 831
        void doShiftDistributorDisplayPosition(float);

    // RVA: 0x34E | Ordinal: 847
        void doStepDistributor(void);

    // RVA: 0x410 | Ordinal: 1041
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x45D | Ordinal: 1118
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x46A | Ordinal: 1131
        void netRegisterControls(int);

    // RVA: 0x491 | Ordinal: 1170
        void onIgnitorOn(struct lwl::CSignalInfo const *);

    // RVA: 0x49B | Ordinal: 1180
        void onStepMotorOff(struct lwl::CSignalInfo const *);

    // RVA: 0x49D | Ordinal: 1182
        void onStepMotorOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4AC | Ordinal: 1197
        void post_initialize(void);

    // RVA: 0x4DB | Ordinal: 1244
        void rearm(void);

    // RVA: 0x511 | Ordinal: 1298
        void repair(void);

    // RVA: 0x5AF | Ordinal: 1456
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x611 | Ordinal: 1554
        void tryLaunchStation(int);

    // RVA: 0x61A | Ordinal: 1563
        void update(void);

    // RVA: 0x120 | Ordinal: 289
        void _av5D1297AutoSelectorSwitch(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AV5D1297AUTOSELECTORSWITCH_HPP
