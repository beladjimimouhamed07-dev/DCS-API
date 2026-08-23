#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avC5LampAssembly
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avC5LampAssembly
{
public:

    // RVA: 0xA8 | Ordinal: 169
        void avC5LampAssembly(void);

    // RVA: 0x303 | Ordinal: 772
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x317 | Ordinal: 792
        void doCommutateKnob(float);

    // RVA: 0x32A | Ordinal: 811
        void doSetCommand(int, float, bool, int);

    // RVA: 0x352 | Ordinal: 851
        void energize(void);

    // RVA: 0x41E | Ordinal: 1055
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x471 | Ordinal: 1138
        void netRegisterControls(int);

    // RVA: 0x4B8 | Ordinal: 1209
        void post_initialize(void);

    // RVA: 0x51A | Ordinal: 1307
        void repair(void);

    // RVA: 0x5B6 | Ordinal: 1463
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x627 | Ordinal: 1576
        void update(void);

    // RVA: 0x12E | Ordinal: 303
        void _avC5LampAssembly(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVC5LAMPASSEMBLY_HPP
