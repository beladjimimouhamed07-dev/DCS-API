#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: AoAIndicator_40
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class AoAIndicator_40
{
public:

    // RVA: 0x12 | Ordinal: 19
        void AoAIndicator_40(class AFM::AoAIndicator_40 &&);

    // RVA: 0x13 | Ordinal: 20
        void AoAIndicator_40(class AFM::AoAIndicator_40 const &);

    // RVA: 0x14 | Ordinal: 21
        void AoAIndicator_40(void);

    // RVA: 0x341 | Ordinal: 834
        void Construct(void);

    // RVA: 0x399 | Ordinal: 922
        void Create(void);

    // RVA: 0x4AC | Ordinal: 1197
        void LockSensor(class AFM::Sensor *);

    // RVA: 0x4D2 | Ordinal: 1235
        void Simulation(double);

    // RVA: 0x60B | Ordinal: 1548
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x108 | Ordinal: 265
        void _AoAIndicator_40(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_AOAINDICATOR_40_HPP
