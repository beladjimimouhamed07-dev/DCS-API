#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avT1154R1155
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avT1154R1155
{
public:

    // RVA: 0x2B6 | Ordinal: 695
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xD6 | Ordinal: 215
        void avT1154R1155(void);

    // RVA: 0x2E6 | Ordinal: 743
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x335 | Ordinal: 822
        void doSetCommand(int, float, bool, int);

    // RVA: 0x376 | Ordinal: 887
        void getFrequencyFromKnobInRange(float, int);

    // RVA: 0x385 | Ordinal: 902
        void getKnobFromPresetInRange(int, int);

    // RVA: 0x3A2 | Ordinal: 931
        void getPresetLiterals(int, int) const;

    // RVA: 0x433 | Ordinal: 1076
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x465 | Ordinal: 1126
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x47A | Ordinal: 1147
        void netRegisterControls(int);

    // RVA: 0x4CB | Ordinal: 1228
        void post_initialize(void);

    // RVA: 0x538 | Ordinal: 1337
        void setChannelPreset(int, int, int, bool);

    // RVA: 0x59A | Ordinal: 1435
        void setTrailingAntennaLength(float);

    // RVA: 0x145 | Ordinal: 326
        void _avT1154R1155(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVT1154R1155_HPP
