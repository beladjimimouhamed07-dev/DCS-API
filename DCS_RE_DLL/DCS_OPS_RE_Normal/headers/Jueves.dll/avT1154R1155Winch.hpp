#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avT1154R1155Winch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avT1154R1155Winch
{
public:

    // RVA: 0xD8 | Ordinal: 217
        void avT1154R1155Winch(void);

    // RVA: 0x2E7 | Ordinal: 744
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x311 | Ordinal: 786
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x337 | Ordinal: 824
        void doSetCommand(int, float, bool, int);

    // RVA: 0x33C | Ordinal: 829
        void doSetTargetWireExtension(float);

    // RVA: 0x435 | Ordinal: 1078
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x466 | Ordinal: 1127
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x47C | Ordinal: 1149
        void netRegisterControls(int);

    // RVA: 0x4CD | Ordinal: 1230
        void post_initialize(void);

    // RVA: 0x4F1 | Ordinal: 1266
        void release(void);

    // RVA: 0x524 | Ordinal: 1317
        void repair(void);

    // RVA: 0x58B | Ordinal: 1420
        void setTargetWireExtension(float);

    // RVA: 0x5BD | Ordinal: 1470
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x63B | Ordinal: 1596
        void update(void);

    // RVA: 0x147 | Ordinal: 328
        void _avT1154R1155Winch(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVT1154R1155WINCH_HPP
