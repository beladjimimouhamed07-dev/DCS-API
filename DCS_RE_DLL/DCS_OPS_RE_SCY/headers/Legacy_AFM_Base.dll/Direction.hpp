#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Direction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Direction
{
public:

    // RVA: 0x3AA | Ordinal: 939
        void Create(void);

    // RVA: 0x40E | Ordinal: 1039
        void Destroy(void);

    // RVA: 0x45 | Ordinal: 70
        void Direction(void);

    // RVA: 0x46 | Ordinal: 71
        void Direction(class AFM::Direction &&);

    // RVA: 0x47 | Ordinal: 72
        void Direction(class AFM::Direction const &);

    // RVA: 0x456 | Ordinal: 1111
        void Instance(void);

    // RVA: 0x527 | Ordinal: 1320
        void calcAnglesOfAttackAndSlipByVector3D(double *, double *, double *);

    // RVA: 0x529 | Ordinal: 1322
        void calcAzimuthAndElevationByVector3D(double *, double *, double *);

    // RVA: 0x556 | Ordinal: 1367
        void calcSolidAzimuthAndSolidAngleOfAttackByVector3D(double *, double *, double *);

    // RVA: 0x563 | Ordinal: 1380
        void calcVector3DByAnglesOfAttackAndSlip(double, double, double, double *);

    // RVA: 0x564 | Ordinal: 1381
        void calcVector3DByAzimuthAndElevation(double, double, double, double *);

    // RVA: 0x565 | Ordinal: 1382
        void calcVector3DBySolidAzimuthAndSolidAngleOfAttack(double, double, double, double *);

    // RVA: 0x119 | Ordinal: 282
        void _Direction(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_DIRECTION_HPP
