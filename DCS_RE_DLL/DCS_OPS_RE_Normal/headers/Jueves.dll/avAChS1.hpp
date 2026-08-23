#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAChS1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAChS1
{
public:

    // RVA: 0x96 | Ordinal: 151
        void avAChS1(class cockpit::dcswwii::avAChS1 const &);

    // RVA: 0x97 | Ordinal: 152
        void avAChS1(void);

    // RVA: 0x2DC | Ordinal: 733
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x324 | Ordinal: 805
        void doSetCommand(int, float, bool, int);

    // RVA: 0x412 | Ordinal: 1043
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4AE | Ordinal: 1199
        void post_initialize(void);

    // RVA: 0x61C | Ordinal: 1565
        void update(void);

    // RVA: 0x122 | Ordinal: 291
        void _avAChS1(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVACHS1_HPP
