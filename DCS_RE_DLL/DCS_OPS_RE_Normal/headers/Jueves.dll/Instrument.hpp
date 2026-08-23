#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Instrument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace instrumentation {

class Instrument
{
public:

    // RVA: 0x39 | Ordinal: 58
        void Instrument(class EagleFM::dcswwii::instrumentation::Instrument const &);

    // RVA: 0x3A | Ordinal: 59
        void Instrument(class EagleFM::dcswwii::FlightModel *);

    // RVA: 0x361 | Ordinal: 866
        void getControl(int);

    // RVA: 0x37D | Ordinal: 894
        void getHint(void);

    // RVA: 0x501 | Ordinal: 1282
        void repair(void);

    // RVA: 0x53D | Ordinal: 1342
        void setControl(int, double);

    // RVA: 0x549 | Ordinal: 1354
        void setFailure(enum WorldGeneral::Failures);

    // RVA: 0x572 | Ordinal: 1395
        void setPowerSource(class EagleFM::Elec::Consumer *);

    // RVA: 0x5DC | Ordinal: 1501
        void simulate(double);

    // RVA: 0xFB | Ordinal: 252
        void _Instrument(void);
};

} // namespace instrumentation
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_INSTRUMENT_HPP
