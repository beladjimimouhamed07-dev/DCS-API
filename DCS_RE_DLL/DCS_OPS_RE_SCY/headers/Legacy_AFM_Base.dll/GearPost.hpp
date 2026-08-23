#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: GearPost
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class GearPost
{
public:

    // RVA: 0x357 | Ordinal: 856
        void Construct(void);

    // RVA: 0x3B3 | Ordinal: 948
        void Create(void);

    // RVA: 0x60 | Ordinal: 97
        void GearPost(class AFM::GearPost &&);

    // RVA: 0x61 | Ordinal: 98
        void GearPost(class AFM::GearPost const &);

    // RVA: 0x62 | Ordinal: 99
        void GearPost(void);

    // RVA: 0x477 | Ordinal: 1144
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4E0 | Ordinal: 1249
        void Simulation(double);

    // RVA: 0x4FB | Ordinal: 1276
        void SimulationWithoutTouch(double);

    // RVA: 0x599 | Ordinal: 1434
        void getDamageHeight(double *);

    // RVA: 0x5AD | Ordinal: 1454
        void getForcePosition_scs(double *);

    // RVA: 0x5B8 | Ordinal: 1465
        void getForce_scs(double *);

    // RVA: 0x5D1 | Ordinal: 1490
        void getIPointerAmortizater(class AFM::Amortizater **);

    // RVA: 0x684 | Ordinal: 1669
        void getIPointerStructureMember(class AFM::StructureMember **);

    // RVA: 0x68D | Ordinal: 1678
        void getIPointerWheel(class AFM::Wheel **);

    // RVA: 0x848 | Ordinal: 2121
        void setPointerToObjectDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double, double *), void *);

    // RVA: 0x84D | Ordinal: 2126
        void setPointerToSurfaceDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double *), void *);

    // RVA: 0x852 | Ordinal: 2131
        void setPointerToSurfaceHeightFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x857 | Ordinal: 2136
        void setPointerToSurfaceHeightNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x85C | Ordinal: 2141
        void setPointerToSurfaceLevelFunction(void (__cdecl *)(void *, double *, double, double *), void *);

    // RVA: 0x861 | Ordinal: 2146
        void setPointerToSurfaceNormalFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x866 | Ordinal: 2151
        void setPointerToSurfaceNormalNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x86B | Ordinal: 2156
        void setPointerToSurfaceSpeedFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x870 | Ordinal: 2161
        void setPointerToSurfaceTypeFunction(void (__cdecl *)(void *, double *, unsigned int *), void *);

    // RVA: 0x8C7 | Ordinal: 2248
        void setSurfaceLevel(double);

    // RVA: 0x122 | Ordinal: 291
        void _GearPost(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_GEARPOST_HPP
