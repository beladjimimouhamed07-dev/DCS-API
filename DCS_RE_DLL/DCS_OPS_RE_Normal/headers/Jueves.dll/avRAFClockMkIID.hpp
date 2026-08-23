#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avRAFClockMkIID
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avRAFClockMkIID
{
public:

    // RVA: 0xCA | Ordinal: 203
        void avRAFClockMkIID(class cockpit::dcswwii::avRAFClockMkIID const &);

    // RVA: 0xCB | Ordinal: 204
        void avRAFClockMkIID(void);

    // RVA: 0x2E4 | Ordinal: 741
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x332 | Ordinal: 819
        void doSetCommand(int, float, bool, int);

    // RVA: 0x42D | Ordinal: 1070
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x464 | Ordinal: 1125
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x479 | Ordinal: 1146
        void netRegisterControls(int);

    // RVA: 0x480 | Ordinal: 1153
        void normalize(double *);

    // RVA: 0x4C6 | Ordinal: 1223
        void post_initialize(void);

    // RVA: 0x635 | Ordinal: 1590
        void update(void);

    // RVA: 0x13F | Ordinal: 320
        void _avRAFClockMkIID(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVRAFCLOCKMKIID_HPP
