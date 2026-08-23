#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avVK53RSh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avVK53RSh
{
public:

    // RVA: 0xDC | Ordinal: 221
        void avVK53RSh(void);

    // RVA: 0x313 | Ordinal: 788
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x437 | Ordinal: 1080
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4CE | Ordinal: 1231
        void post_initialize(void);

    // RVA: 0x63D | Ordinal: 1598
        void update(void);

    // RVA: 0x149 | Ordinal: 330
        void _avVK53RSh(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVVK53RSH_HPP
