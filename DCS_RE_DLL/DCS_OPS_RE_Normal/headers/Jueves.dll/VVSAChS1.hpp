#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: VVSAChS1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace instrumentation {

class VVSAChS1
{
public:

    // RVA: 0x82 | Ordinal: 131
        void VVSAChS1(class EagleFM::dcswwii::instrumentation::VVSAChS1 const &);

    // RVA: 0x83 | Ordinal: 132
        void VVSAChS1(class EagleFM::dcswwii::FlightModel *, double, class EagleFM::Elec::ItemBase *, class EagleFM::Elec::ItemBase *);

    // RVA: 0x363 | Ordinal: 868
        void getControl(int);

    // RVA: 0x3A9 | Ordinal: 938
        void getReading(int);

    // RVA: 0x47E | Ordinal: 1151
        void normalize(double *);

    // RVA: 0x4AA | Ordinal: 1195
        void post_initialize(void);

    // RVA: 0x53F | Ordinal: 1344
        void setControl(int, double);

    // RVA: 0x5EC | Ordinal: 1517
        void simulate(double);

    // RVA: 0x11A | Ordinal: 283
        void _VVSAChS1(void);
};

} // namespace instrumentation
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_VVSACHS1_HPP
