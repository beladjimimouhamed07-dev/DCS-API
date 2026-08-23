#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAN5730RepeaterCompass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAN5730RepeaterCompass
{
public:

    // RVA: 0x9B | Ordinal: 156
        void avAN5730RepeaterCompass(class cockpit::dcswwii::avAN5730RepeaterCompass const &);

    // RVA: 0x9C | Ordinal: 157
        void avAN5730RepeaterCompass(void);

    // RVA: 0x2FE | Ordinal: 767
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x325 | Ordinal: 806
        void doSetCommand(int, float, bool, int);

    // RVA: 0x3DE | Ordinal: 991
        void get_commanded_course(void) const;

    // RVA: 0x3E0 | Ordinal: 993
        void get_heading(void) const;

    // RVA: 0x416 | Ordinal: 1047
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x45E | Ordinal: 1119
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x46C | Ordinal: 1133
        void netRegisterControls(int);

    // RVA: 0x4B1 | Ordinal: 1202
        void post_initialize(void);

    // RVA: 0x514 | Ordinal: 1301
        void repair(void);

    // RVA: 0x5A9 | Ordinal: 1450
        void set_damage(unsigned int, bool);

    // RVA: 0x61F | Ordinal: 1568
        void update(void);

    // RVA: 0x126 | Ordinal: 295
        void _avAN5730RepeaterCompass(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAN5730REPEATERCOMPASS_HPP
