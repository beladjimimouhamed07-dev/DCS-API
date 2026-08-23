#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAN5741
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAN5741
{
public:

    // RVA: 0x9D | Ordinal: 158
        void avAN5741(class cockpit::dcswwii::avAN5741 const &);

    // RVA: 0x9E | Ordinal: 159
        void avAN5741(void);

    // RVA: 0x2DD | Ordinal: 734
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x326 | Ordinal: 807
        void doSetCommand(int, float, bool, int);

    // RVA: 0x417 | Ordinal: 1048
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x46D | Ordinal: 1134
        void netRegisterControls(int);

    // RVA: 0x4B2 | Ordinal: 1203
        void post_initialize(void);

    // RVA: 0x4E4 | Ordinal: 1253
        void reflectToCabin(void);

    // RVA: 0x515 | Ordinal: 1302
        void repair(void);

    // RVA: 0x5B2 | Ordinal: 1459
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x620 | Ordinal: 1569
        void update(void);

    // RVA: 0x127 | Ordinal: 296
        void _avAN5741(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAN5741_HPP
