#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Tachometer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace instrumentation {

class Tachometer
{
public:

    // RVA: 0x77 | Ordinal: 120
        void Tachometer(class EagleFM::dcswwii::instrumentation::Tachometer const &);

    // RVA: 0x78 | Ordinal: 121
        void Tachometer(class EagleFM::dcswwii::FlightModel *, class EagleFM::Sensor *);

    // RVA: 0x3A8 | Ordinal: 937
        void getReading(int);

    // RVA: 0x50C | Ordinal: 1293
        void repair(void);

    // RVA: 0x54A | Ordinal: 1355
        void setFailure(enum WorldGeneral::Failures);

    // RVA: 0x5EA | Ordinal: 1515
        void simulate(double, double);

    // RVA: 0x115 | Ordinal: 278
        void _Tachometer(void);
};

} // namespace instrumentation
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_TACHOMETER_HPP
