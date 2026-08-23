#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avT1154R1155PowerUnit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avT1154R1155PowerUnit
{
public:

    // RVA: 0x2B7 | Ordinal: 696
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xD7 | Ordinal: 216
        void avT1154R1155PowerUnit(void);

    // RVA: 0x310 | Ordinal: 785
        void connectTo(class EagleFM::Elec::ItemBase &, double);

    // RVA: 0x336 | Ordinal: 823
        void doSetCommand(int, float, bool, int);

    // RVA: 0x3CE | Ordinal: 975
        void getUmformerReducedSpeed(int);

    // RVA: 0x434 | Ordinal: 1077
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x47B | Ordinal: 1148
        void netRegisterControls(int);

    // RVA: 0x4CC | Ordinal: 1229
        void post_initialize(void);

    // RVA: 0x63A | Ordinal: 1595
        void update(void);

    // RVA: 0x146 | Ordinal: 327
        void _avT1154R1155PowerUnit(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVT1154R1155POWERUNIT_HPP
