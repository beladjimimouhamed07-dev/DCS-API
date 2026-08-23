#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avA1271
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avA1271
{
public:

    // RVA: 0x95 | Ordinal: 150
        void avA1271(void);

    // RVA: 0x2FB | Ordinal: 764
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x323 | Ordinal: 804
        void doSetCommand(int, float, bool, int);

    // RVA: 0x411 | Ordinal: 1042
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x46B | Ordinal: 1132
        void netRegisterControls(int);

    // RVA: 0x487 | Ordinal: 1160
        void onCircuitPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x48A | Ordinal: 1163
        void onCircuitPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4AD | Ordinal: 1198
        void post_initialize(void);

    // RVA: 0x4E9 | Ordinal: 1258
        void release(void);

    // RVA: 0x512 | Ordinal: 1299
        void repair(void);

    // RVA: 0x54D | Ordinal: 1358
        void setFrequency(double);

    // RVA: 0x5B0 | Ordinal: 1457
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x61B | Ordinal: 1564
        void update(void);

    // RVA: 0x121 | Ordinal: 290
        void _avA1271(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVA1271_HPP
