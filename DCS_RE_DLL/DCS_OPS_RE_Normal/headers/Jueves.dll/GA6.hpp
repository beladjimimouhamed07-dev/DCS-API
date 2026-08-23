#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: GA6
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {
namespace avGMK1 {

class GA6
{
public:

    // RVA: 0x2D | Ordinal: 46
        void GA6(class cockpit::dcswwii::avGMK1::GA6 &&);

    // RVA: 0x2E | Ordinal: 47
        void GA6(class cockpit::dcswwii::avGMK1::GA6 const &);

    // RVA: 0x2F | Ordinal: 48
        void GA6(void);

    // RVA: 0x2F6 | Ordinal: 759
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x3D6 | Ordinal: 983
        void getWarningFlag(void);

    // RVA: 0x4A8 | Ordinal: 1193
        void post_initialize(class cockpit::dcswwii::avGMK1 *);

    // RVA: 0x5D7 | Ordinal: 1496
        void simulate(double, class cockpit::dcswwii::avGMK1::AS1 &);

    // RVA: 0xF5 | Ordinal: 246
        void _GA6(void);
};

} // namespace avGMK1
} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_GA6_HPP
