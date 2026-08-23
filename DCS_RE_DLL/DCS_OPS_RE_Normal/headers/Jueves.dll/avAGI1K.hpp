#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAGI1K
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAGI1K
{
public:

    // RVA: 0x2B9 | Ordinal: 698
        void SetCommand(int, float);

    // RVA: 0x99 | Ordinal: 154
        void avAGI1K(void);

    // RVA: 0x2FD | Ordinal: 766
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x3EA | Ordinal: 1003
        void get_sideslip(void);

    // RVA: 0x414 | Ordinal: 1045
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4B0 | Ordinal: 1201
        void post_initialize(void);

    // RVA: 0x5A8 | Ordinal: 1449
        void set_damage(unsigned int, bool);

    // RVA: 0x124 | Ordinal: 293
        void _avAGI1K(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAGI1K_HPP
