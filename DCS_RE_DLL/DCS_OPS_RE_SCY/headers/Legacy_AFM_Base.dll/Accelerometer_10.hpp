#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Accelerometer_10
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Accelerometer_10
{
public:

    // RVA: 0x3 | Ordinal: 4
        void Accelerometer_10(class AFM::Accelerometer_10 &&);

    // RVA: 0x4 | Ordinal: 5
        void Accelerometer_10(class AFM::Accelerometer_10 const &);

    // RVA: 0x5 | Ordinal: 6
        void Accelerometer_10(void);

    // RVA: 0x33D | Ordinal: 830
        void Construct(void);

    // RVA: 0x394 | Ordinal: 917
        void Create(void);

    // RVA: 0x471 | Ordinal: 1138
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4C3 | Ordinal: 1220
        void Reset(void);

    // RVA: 0x4CF | Ordinal: 1232
        void Simulation(double);

    // RVA: 0x609 | Ordinal: 1546
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x6CB | Ordinal: 1740
        void getMaxG(double *);

    // RVA: 0x6DA | Ordinal: 1755
        void getMinG(double *);

    // RVA: 0x77A | Ordinal: 1915
        void setAccelerometerPosition_scs(double *);

    // RVA: 0x103 | Ordinal: 260
        void _Accelerometer_10(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ACCELEROMETER_10_HPP
