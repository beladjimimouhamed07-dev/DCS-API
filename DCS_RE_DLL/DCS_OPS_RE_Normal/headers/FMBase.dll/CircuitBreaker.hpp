#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: CircuitBreaker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class CircuitBreaker
{
public:

    // RVA: 0x43 | Ordinal: 68
        void CircuitBreaker(class EagleFM::Elec::CircuitBreaker const &);

    // RVA: 0x44 | Ordinal: 69
        void CircuitBreaker(double, double);

    // RVA: 0x4A1 | Ordinal: 1186
        void doTrip(void);

    // RVA: 0x833 | Ordinal: 2100
        void setCutoffCoil(class EagleFM::Elec::ItemBase *);

    // RVA: 0x8A9 | Ordinal: 2218
        void setNominalAmperage(double, double);

    // RVA: 0x952 | Ordinal: 2387
        void simulate(double);

    // RVA: 0x953 | Ordinal: 2388
        void simulate(double, double);

    // RVA: 0x18F | Ordinal: 400
        void _CircuitBreaker(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CIRCUITBREAKER_HPP
