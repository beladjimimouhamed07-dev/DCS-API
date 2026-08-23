#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: GyroCompass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class GyroCompass
{
public:

    // RVA: 0x358 | Ordinal: 857
        void Construct(void);

    // RVA: 0x3B5 | Ordinal: 950
        void Create(void);

    // RVA: 0x66 | Ordinal: 103
        void GyroCompass(class AFM::GyroCompass &&);

    // RVA: 0x67 | Ordinal: 104
        void GyroCompass(class AFM::GyroCompass const &);

    // RVA: 0x68 | Ordinal: 105
        void GyroCompass(void);

    // RVA: 0x48D | Ordinal: 1166
        void LockGyroscope(class AFM::Gyroscope *);

    // RVA: 0x4B4 | Ordinal: 1205
        void LockWire(class AFM::Wire *);

    // RVA: 0x4E1 | Ordinal: 1250
        void Simulation(double);

    // RVA: 0x68F | Ordinal: 1680
        void getIPointerWire(class AFM::Wire **);

    // RVA: 0x694 | Ordinal: 1685
        void getIPointerYawIndicator(class AFM::Indicator **);

    // RVA: 0x8F0 | Ordinal: 2289
        void setYawIndicatorStatus(double);

    // RVA: 0x8F1 | Ordinal: 2290
        void setYawIndicatorTimeFactorOff(double);

    // RVA: 0x8F2 | Ordinal: 2291
        void setYawIndicatorTimeFactorOn(double);

    // RVA: 0x124 | Ordinal: 293
        void _GyroCompass(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_GYROCOMPASS_HPP
