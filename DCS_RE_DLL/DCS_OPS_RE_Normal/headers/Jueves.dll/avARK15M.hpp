#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avARK15M
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avARK15M
{
public:

    // RVA: 0x2BA | Ordinal: 699
        void SetCommand(int, float);

    // RVA: 0xA2 | Ordinal: 163
        void avARK15M(void);

    // RVA: 0x2ED | Ordinal: 750
        void commutateBankSwitches(void);

    // RVA: 0x2EE | Ordinal: 751
        void commutateChannelSwitches(void);

    // RVA: 0x2F0 | Ordinal: 753
        void commutateListeningToggles(void);

    // RVA: 0x2F1 | Ordinal: 754
        void commutateLoopButtons(void);

    // RVA: 0x2F2 | Ordinal: 755
        void commutateMarkerToggles(void);

    // RVA: 0x2F3 | Ordinal: 756
        void commutateModeSwitches(void);

    // RVA: 0x2F4 | Ordinal: 757
        void commutateVolumeRheostats(void);

    // RVA: 0x301 | Ordinal: 770
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase *, class EagleFM::Elec::Switch *, class EagleFM::Elec::Switch *, class EagleFM::Elec::ItemBase *);

    // RVA: 0x3A1 | Ordinal: 930
        void getPresetFrequency(void);

    // RVA: 0x3AB | Ordinal: 940
        void getReading(enum cockpit::dcswwii::avARK15M::Channels);

    // RVA: 0x41A | Ordinal: 1051
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x460 | Ordinal: 1121
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x485 | Ordinal: 1158
        void onChangeControlPanel(int);

    // RVA: 0x486 | Ordinal: 1159
        void onChangeElectricalSetup(struct lwl::CSignalInfo const *);

    // RVA: 0x4B5 | Ordinal: 1206
        void post_initialize(void);

    // RVA: 0x4EC | Ordinal: 1261
        void release(void);

    // RVA: 0x623 | Ordinal: 1572
        void update(void);

    // RVA: 0x12A | Ordinal: 299
        void _avARK15M(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVARK15M_HPP
