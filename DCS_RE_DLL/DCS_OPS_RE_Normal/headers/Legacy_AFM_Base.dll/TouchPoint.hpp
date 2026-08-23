#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: TouchPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class TouchPoint
{
public:

    // RVA: 0x379 | Ordinal: 890
        void Construct(void);

    // RVA: 0x3E0 | Ordinal: 993
        void Create(void);

    // RVA: 0x481 | Ordinal: 1154
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4F7 | Ordinal: 1272
        void Simulation(double);

    // RVA: 0xEA | Ordinal: 235
        void TouchPoint(class AFM::TouchPoint &&);

    // RVA: 0xEB | Ordinal: 236
        void TouchPoint(class AFM::TouchPoint const &);

    // RVA: 0xEC | Ordinal: 237
        void TouchPoint(void);

    // RVA: 0x583 | Ordinal: 1412
        void getBackDamperForceFactor(double *);

    // RVA: 0x59B | Ordinal: 1436
        void getDirectDamperForceFactor(double *);

    // RVA: 0x5B9 | Ordinal: 1466
        void getForce_scs(double *);

    // RVA: 0x5BA | Ordinal: 1467
        void getFrictionForceFactor(double *);

    // RVA: 0x651 | Ordinal: 1618
        void getIPointerPosition(class AFM::Position **);

    // RVA: 0x702 | Ordinal: 1795
        void getRadius(double *);

    // RVA: 0x704 | Ordinal: 1797
        void getRelativeSpeed_scs(double *);

    // RVA: 0x741 | Ordinal: 1858
        void getSpringForceFactor(double *);

    // RVA: 0x746 | Ordinal: 1863
        void getSurfaceType(int *);

    // RVA: 0x789 | Ordinal: 1930
        void setBackDamperForceFactor(double);

    // RVA: 0x7A2 | Ordinal: 1955
        void setDirectDamperForceFactor(double);

    // RVA: 0x7C2 | Ordinal: 1987
        void setFrictionForceFactor(double);

    // RVA: 0x84B | Ordinal: 2124
        void setPointerToObjectDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double, double *), void *);

    // RVA: 0x850 | Ordinal: 2129
        void setPointerToSurfaceDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double *), void *);

    // RVA: 0x855 | Ordinal: 2134
        void setPointerToSurfaceHeightFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x85A | Ordinal: 2139
        void setPointerToSurfaceHeightNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x85F | Ordinal: 2144
        void setPointerToSurfaceLevelFunction(void (__cdecl *)(void *, double *, double, double *), void *);

    // RVA: 0x864 | Ordinal: 2149
        void setPointerToSurfaceNormalFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x869 | Ordinal: 2154
        void setPointerToSurfaceNormalNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x86E | Ordinal: 2159
        void setPointerToSurfaceSpeedFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x873 | Ordinal: 2164
        void setPointerToSurfaceTypeFunction(void (__cdecl *)(void *, double *, unsigned int *), void *);

    // RVA: 0x87B | Ordinal: 2172
        void setRadius(double);

    // RVA: 0x8C1 | Ordinal: 2242
        void setSpringForceFactor(double);

    // RVA: 0x8C8 | Ordinal: 2249
        void setSurfaceLevel(double);

    // RVA: 0x150 | Ordinal: 337
        void _TouchPoint(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_TOUCHPOINT_HPP
