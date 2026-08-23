#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: av5C1878LampAssembly
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class av5C1878LampAssembly
{
public:

    // RVA: 0x8F | Ordinal: 144
        void av5C1878LampAssembly(class cockpit::dcswwii::av5C1878LampAssembly &&);

    // RVA: 0x90 | Ordinal: 145
        void av5C1878LampAssembly(class cockpit::dcswwii::av5C1878LampAssembly const &);

    // RVA: 0x91 | Ordinal: 146
        void av5C1878LampAssembly(void);

    // RVA: 0x2F9 | Ordinal: 762
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x321 | Ordinal: 802
        void doSetCommand(int, float, bool, int);

    // RVA: 0x351 | Ordinal: 850
        void energize(void);

    // RVA: 0x40F | Ordinal: 1040
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x469 | Ordinal: 1130
        void netRegisterControls(int);

    // RVA: 0x4AB | Ordinal: 1196
        void post_initialize(void);

    // RVA: 0x510 | Ordinal: 1297
        void repair(void);

    // RVA: 0x5AE | Ordinal: 1455
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x619 | Ordinal: 1562
        void update(void);

    // RVA: 0x11F | Ordinal: 288
        void _av5C1878LampAssembly(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AV5C1878LAMPASSEMBLY_HPP
