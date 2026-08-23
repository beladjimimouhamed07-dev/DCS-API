#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avFL23885
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avFL23885
{
public:

    // RVA: 0xB1 | Ordinal: 178
        void avFL23885(class cockpit::dcswwii::avFL23885 const &);

    // RVA: 0xB2 | Ordinal: 179
        void avFL23885(void);

    // RVA: 0x2E1 | Ordinal: 738
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x32E | Ordinal: 815
        void doSetCommand(int, float, bool, int);

    // RVA: 0x422 | Ordinal: 1059
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x475 | Ordinal: 1142
        void netRegisterControls(int);

    // RVA: 0x4BC | Ordinal: 1213
        void post_initialize(void);

    // RVA: 0x51B | Ordinal: 1308
        void repair(void);

    // RVA: 0x5B7 | Ordinal: 1464
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x62B | Ordinal: 1580
        void update(void);

    // RVA: 0x133 | Ordinal: 308
        void _avFL23885(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVFL23885_HPP
