#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: mOrientation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class mOrientation
{
public:

    // RVA: 0x3E7 | Ordinal: 1000
        void Create(void);

    // RVA: 0x41F | Ordinal: 1056
        void Destroy(void);

    // RVA: 0x467 | Ordinal: 1128
        void Instance(void);

    // RVA: 0x53F | Ordinal: 1344
        void calcMatrixRotationByQuaternion(double *, double *);

    // RVA: 0x541 | Ordinal: 1346
        void calcMatrixRotationByYawPitchRoll(double, double, double, double *);

    // RVA: 0x54D | Ordinal: 1358
        void calcQuaternionByMatrixRotation(double *, double *);

    // RVA: 0x567 | Ordinal: 1384
        void calcVector3D_bcsByVector3D_ocsAndMatrixRotation(double *, double *, double *);

    // RVA: 0x569 | Ordinal: 1386
        void calcVector3D_ocsByVector3D_bcsAndMatrixRotation(double *, double *, double *);

    // RVA: 0x56B | Ordinal: 1388
        void calcYawPitchRollByMatrixRotation(double *, double *, double *, double *);

    // RVA: 0xFF | Ordinal: 256
        void mOrientation(void);

    // RVA: 0x100 | Ordinal: 257
        void mOrientation(class AFM::mOrientation &&);

    // RVA: 0x101 | Ordinal: 258
        void mOrientation(class AFM::mOrientation const &);

    // RVA: 0x157 | Ordinal: 344
        void _mOrientation(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_MORIENTATION_HPP
