#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avGMK1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avGMK1
{
public:

    // RVA: 0x2BF | Ordinal: 704
        void SetCommand(int, float);

    // RVA: 0xB5 | Ordinal: 182
        void avGMK1(void);

    // RVA: 0x307 | Ordinal: 776
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &, class EagleFM::Elec::Switch *);

    // RVA: 0x3AD | Ordinal: 942
        void getReading(int);

    // RVA: 0x425 | Ordinal: 1062
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4BE | Ordinal: 1215
        void post_initialize(void);

    // RVA: 0x62E | Ordinal: 1583
        void update(void);

    // RVA: 0x136 | Ordinal: 311
        void _avGMK1(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVGMK1_HPP
