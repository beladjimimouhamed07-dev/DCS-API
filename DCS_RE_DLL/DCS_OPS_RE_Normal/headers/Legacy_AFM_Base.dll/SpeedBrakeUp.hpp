#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: SpeedBrakeUp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class SpeedBrakeUp
{
public:

    // RVA: 0x3D6 | Ordinal: 983
        void Create(void);

    // RVA: 0x419 | Ordinal: 1050
        void Destroy(void);

    // RVA: 0x461 | Ordinal: 1122
        void Instance(void);

    // RVA: 0xC9 | Ordinal: 202
        void SpeedBrakeUp(void);

    // RVA: 0xCA | Ordinal: 203
        void SpeedBrakeUp(class AFM::SpeedBrakeUp &&);

    // RVA: 0xCB | Ordinal: 204
        void SpeedBrakeUp(class AFM::SpeedBrakeUp const &);

    // RVA: 0x520 | Ordinal: 1313
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x145 | Ordinal: 326
        void _SpeedBrakeUp(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SPEEDBRAKEUP_HPP
