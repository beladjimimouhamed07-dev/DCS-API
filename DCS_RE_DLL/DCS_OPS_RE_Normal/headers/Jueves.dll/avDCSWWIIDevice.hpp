#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avDCSWWIIDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace avionics {

class avDCSWWIIDevice
{
public:

    // RVA: 0x2AC | Ordinal: 685
        void NetCrewMemberUpdateStream(unsigned char, unsigned char, class Mail::Stream &);

    // RVA: 0x2AE | Ordinal: 687
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x2BD | Ordinal: 702
        void SetCommand(int, float);

    // RVA: 0xAC | Ordinal: 173
        void avDCSWWIIDevice(class EagleFM::dcswwii::avionics::avDCSWWIIDevice const &);

    // RVA: 0xAD | Ordinal: 174
        void avDCSWWIIDevice(void);

    // RVA: 0x2DB | Ordinal: 732
        void canopyDropped(unsigned char);

    // RVA: 0x2E0 | Ordinal: 737
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x32C | Ordinal: 813
        void doSetCommand(int, float, bool, int);

    // RVA: 0x357 | Ordinal: 856
        void findIDIndexInDB(char const *, class ed::basic_string<char>) const;

    // RVA: 0x358 | Ordinal: 857
        void findReflect(int, int) const;

    // RVA: 0x35B | Ordinal: 860
        void getArgumentValue(int);

    // RVA: 0x420 | Ordinal: 1057
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x43B | Ordinal: 1084
        void isCommandApplicable(enum EagleFM::dcswwii::util::DeviceCommands, int);

    // RVA: 0x43D | Ordinal: 1086
        void isElementHidden(int);

    // RVA: 0x457 | Ordinal: 1112
        void netDistributeControl(enum EagleFM::dcswwii::util::DeviceCommands, int);

    // RVA: 0x458 | Ordinal: 1113
        void netDistributeControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x459 | Ordinal: 1114
        void netDistributeControl(enum EagleFM::dcswwii::util::DeviceCommands, bool);

    // RVA: 0x45A | Ordinal: 1115
        void netIsMaster(void) const;

    // RVA: 0x45B | Ordinal: 1116
        void netPutFullState(void);

    // RVA: 0x462 | Ordinal: 1123
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x467 | Ordinal: 1128
        void netReceiveStateUpdate(unsigned char, unsigned char, class Mail::Stream &);

    // RVA: 0x473 | Ordinal: 1140
        void netRegisterControls(int, class ed::vector<enum EagleFM::dcswwii::util::DeviceCommands, class ed::allocator<enum EagleFM::dcswwii::util::DeviceCommands>> const &, class ed::vector<enum EagleFM::dcswwii::util::DeviceCommands, class ed::allocator<enum EagleFM::dcswwii::util::DeviceCommands>> const &, class ed::vector<enum EagleFM::dcswwii::util::DeviceCommands, class ed::allocator<enum EagleFM::dcswwii::util::DeviceCommands>> const &);

    // RVA: 0x474 | Ordinal: 1141
        void netRegisterControls(int);

    // RVA: 0x47D | Ordinal: 1150
        void netSendStateUpdate(unsigned char, unsigned char, class Mail::Stream &);

    // RVA: 0x484 | Ordinal: 1157
        void onChangeCabin(int, int);

    // RVA: 0x4E7 | Ordinal: 1256
        void registerKeyCommands(class ed::vector<struct std::pair<enum EagleFM::dcswwii::util::DeviceCommands, enum EagleFM::dcswwii::avionics::avDCSWWIIDevice::DragonsCommandTypes>, class ed::allocator<struct std::pair<enum EagleFM::dcswwii::util::DeviceCommands, enum EagleFM::dcswwii::avionics::avDCSWWIIDevice::DragonsCommandTypes>>> const &);

    // RVA: 0x531 | Ordinal: 1330
        void setArgument(int, float);

    // RVA: 0x60B | Ordinal: 1548
        void startMasterControlsSetup(void);

    // RVA: 0x60D | Ordinal: 1550
        void stopMasterControlsSetup(void);

    // RVA: 0x60E | Ordinal: 1551
        void switcher_value_iterate_through(int, int);

    // RVA: 0x60F | Ordinal: 1552
        void transliterate(char const *, bool) const;

    // RVA: 0x629 | Ordinal: 1578
        void update(void);

    // RVA: 0x131 | Ordinal: 306
        void _avDCSWWIIDevice(void);
};

} // namespace avionics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_AVDCSWWIIDEVICE_HPP
