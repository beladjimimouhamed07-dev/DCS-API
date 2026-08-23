#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avClock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avClock
{
public:

    // RVA: 0xA9 | Ordinal: 170
        void avClock(class cockpit::dcswwii::avClock const &);

    // RVA: 0xAA | Ordinal: 171
        void avClock(void);

    // RVA: 0x32B | Ordinal: 812
        void doSetCommand(int, float, bool, int);

    // RVA: 0x41F | Ordinal: 1056
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x461 | Ordinal: 1122
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x472 | Ordinal: 1139
        void netRegisterControls(int);

    // RVA: 0x4B9 | Ordinal: 1210
        void post_initialize(void);

    // RVA: 0x4E5 | Ordinal: 1254
        void reflectToCabin(void);

    // RVA: 0x628 | Ordinal: 1577
        void update(void);

    // RVA: 0x12F | Ordinal: 304
        void _avClock(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVCLOCK_HPP
