#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avIUT3_1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avIUT3_1
{
public:

    // RVA: 0x2C1 | Ordinal: 706
        void SetCommand(int, float);

    // RVA: 0xBC | Ordinal: 189
        void avIUT3_1(class cockpit::dcswwii::avIUT3_1 &&);

    // RVA: 0xBD | Ordinal: 190
        void avIUT3_1(class cockpit::dcswwii::avIUT3_1 const &);

    // RVA: 0xBE | Ordinal: 191
        void avIUT3_1(void);

    // RVA: 0x2EF | Ordinal: 752
        void commutateLights(void);

    // RVA: 0x308 | Ordinal: 777
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x427 | Ordinal: 1064
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4C0 | Ordinal: 1217
        void post_initialize(void);

    // RVA: 0x62F | Ordinal: 1584
        void update(void);

    // RVA: 0x139 | Ordinal: 314
        void _avIUT3_1(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVIUT3_1_HPP
