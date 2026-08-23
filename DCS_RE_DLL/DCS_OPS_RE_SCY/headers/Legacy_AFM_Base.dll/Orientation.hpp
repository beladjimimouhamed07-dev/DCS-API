#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Orientation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Orientation
{
public:

    // RVA: 0x363 | Ordinal: 868
        void Construct(void);

    // RVA: 0x3C4 | Ordinal: 965
        void Create(void);

    // RVA: 0x93 | Ordinal: 148
        void Orientation(class AFM::Orientation &&);

    // RVA: 0x94 | Ordinal: 149
        void Orientation(class AFM::Orientation const &);

    // RVA: 0x95 | Ordinal: 150
        void Orientation(void);

    // RVA: 0x53E | Ordinal: 1343
        void calcMatrixRotationByQuaternion(void);

    // RVA: 0x540 | Ordinal: 1345
        void calcMatrixRotationByYawPitchRoll(void);

    // RVA: 0x54C | Ordinal: 1357
        void calcQuaternionByMatrixRotation(void);

    // RVA: 0x566 | Ordinal: 1383
        void calcVector3D_bcsByVector3D_ocs(double *, double *);

    // RVA: 0x568 | Ordinal: 1385
        void calcVector3D_ocsByVector3D_bcs(double *, double *);

    // RVA: 0x56A | Ordinal: 1387
        void calcYawPitchRollByMatrixRotation(void);

    // RVA: 0x6C5 | Ordinal: 1734
        void getMatrixRotation(double *);

    // RVA: 0x6FA | Ordinal: 1787
        void getPitch(double *);

    // RVA: 0x701 | Ordinal: 1794
        void getQuaternion(double *);

    // RVA: 0x711 | Ordinal: 1810
        void getRoll(double *);

    // RVA: 0x75B | Ordinal: 1884
        void getYaw(double *);

    // RVA: 0x80B | Ordinal: 2060
        void setMatrixRotation(double *);

    // RVA: 0x83D | Ordinal: 2110
        void setPitch(double);

    // RVA: 0x87A | Ordinal: 2171
        void setQuaternion(double *);

    // RVA: 0x88E | Ordinal: 2191
        void setRoll(double);

    // RVA: 0x8EF | Ordinal: 2288
        void setYaw(double);

    // RVA: 0x133 | Ordinal: 308
        void _Orientation(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ORIENTATION_HPP
