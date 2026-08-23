#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Governor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class Governor
{
public:

    // RVA: 0x30 | Ordinal: 49
        void Governor(class EagleFM::dcswwii::propulsion::Governor const &);

    // RVA: 0x31 | Ordinal: 50
        void Governor(class EagleFM::dcswwii::propulsion::PistonEngine *);

    // RVA: 0x4FD | Ordinal: 1278
        void repair(void);

    // RVA: 0x574 | Ordinal: 1397
        void setPropLever(double);

    // RVA: 0x5D8 | Ordinal: 1497
        void simulate(double);

    // RVA: 0x5FB | Ordinal: 1532
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xF6 | Ordinal: 247
        void _Governor(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_GOVERNOR_HPP
