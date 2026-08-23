#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avBC1206
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avBC1206
{
public:

    // RVA: 0xA5 | Ordinal: 166
        void avBC1206(void);

    // RVA: 0x302 | Ordinal: 771
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x329 | Ordinal: 810
        void doSetCommand(int, float, bool, int);

    // RVA: 0x41C | Ordinal: 1053
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x470 | Ordinal: 1137
        void netRegisterControls(int);

    // RVA: 0x489 | Ordinal: 1162
        void onCircuitPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x48C | Ordinal: 1165
        void onCircuitPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4B6 | Ordinal: 1207
        void post_initialize(void);

    // RVA: 0x4ED | Ordinal: 1262
        void release(void);

    // RVA: 0x518 | Ordinal: 1305
        void repair(void);

    // RVA: 0x579 | Ordinal: 1402
        void setReducedFrequency(double);

    // RVA: 0x5B4 | Ordinal: 1461
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x625 | Ordinal: 1574
        void update(void);

    // RVA: 0x12C | Ordinal: 301
        void _avBC1206(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVBC1206_HPP
