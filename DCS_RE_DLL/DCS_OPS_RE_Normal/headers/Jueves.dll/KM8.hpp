#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: KM8
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {
namespace avGMK1 {

class KM8
{
public:

    // RVA: 0x3D | Ordinal: 62
        void KM8(class cockpit::dcswwii::avGMK1::KM8 &&);

    // RVA: 0x3E | Ordinal: 63
        void KM8(class cockpit::dcswwii::avGMK1::KM8 const &);

    // RVA: 0x3F | Ordinal: 64
        void KM8(void);

    // RVA: 0x2F7 | Ordinal: 760
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x4A9 | Ordinal: 1194
        void post_initialize(class cockpit::dcswwii::avGMK1 *);

    // RVA: 0x569 | Ordinal: 1386
        void setMode(class cockpit::dcswwii::avGMK1 *, enum cockpit::dcswwii::avGMK1::TestModes);

    // RVA: 0x5DD | Ordinal: 1502
        void simulate(double, class cockpit::dcswwii::avID3 *);

    // RVA: 0xFD | Ordinal: 254
        void _KM8(void);
};

} // namespace avGMK1
} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_KM8_HPP
