#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: YawDamper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class YawDamper
{
public:

    // RVA: 0x3E6 | Ordinal: 999
        void Create(void);

    // RVA: 0x41E | Ordinal: 1055
        void Destroy(void);

    // RVA: 0x466 | Ordinal: 1127
        void Instance(void);

    // RVA: 0xFC | Ordinal: 253
        void YawDamper(void);

    // RVA: 0xFD | Ordinal: 254
        void YawDamper(class AFM::YawDamper &&);

    // RVA: 0xFE | Ordinal: 255
        void YawDamper(class AFM::YawDamper const &);

    // RVA: 0x526 | Ordinal: 1319
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x156 | Ordinal: 343
        void _YawDamper(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_YAWDAMPER_HPP
