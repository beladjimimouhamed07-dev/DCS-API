#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Damper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Damper
{
public:

    // RVA: 0x350 | Ordinal: 849
        void Construct(void);

    // RVA: 0x3A9 | Ordinal: 938
        void Create(void);

    // RVA: 0x42 | Ordinal: 67
        void Damper(class AFM::Damper &&);

    // RVA: 0x43 | Ordinal: 68
        void Damper(class AFM::Damper const &);

    // RVA: 0x44 | Ordinal: 69
        void Damper(void);

    // RVA: 0x52E | Ordinal: 1327
        void calcForceBySpeed(void);

    // RVA: 0x557 | Ordinal: 1368
        void calcSpeedByForce(void);

    // RVA: 0x5A9 | Ordinal: 1450
        void getForce(double *);

    // RVA: 0x5AB | Ordinal: 1452
        void getForceFactor(double *);

    // RVA: 0x732 | Ordinal: 1843
        void getSpeed(double *);

    // RVA: 0x7B4 | Ordinal: 1973
        void setForce(double);

    // RVA: 0x7B6 | Ordinal: 1975
        void setForceFactor(double);

    // RVA: 0x8B3 | Ordinal: 2228
        void setSpeed(double);

    // RVA: 0x118 | Ordinal: 281
        void _Damper(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_DAMPER_HPP
