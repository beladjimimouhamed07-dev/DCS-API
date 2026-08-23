#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avVA2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avVA2
{
public:

    // RVA: 0x2C3 | Ordinal: 708
        void SetCommand(int, float);

    // RVA: 0xD9 | Ordinal: 218
        void avVA2(class cockpit::dcswwii::avVA2 &&);

    // RVA: 0xDA | Ordinal: 219
        void avVA2(class cockpit::dcswwii::avVA2 const &);

    // RVA: 0xDB | Ordinal: 220
        void avVA2(void);

    // RVA: 0x312 | Ordinal: 787
        void connectTo(class EagleFM::Elec::ItemBase *, class EagleFM::Elec::ItemBase *);

    // RVA: 0x3AE | Ordinal: 943
        void getReading(void);

    // RVA: 0x436 | Ordinal: 1079
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x63C | Ordinal: 1597
        void update(void);

    // RVA: 0x148 | Ordinal: 329
        void _avVA2(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVVA2_HPP
