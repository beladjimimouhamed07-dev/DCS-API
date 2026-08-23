#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: RadarAltitudeSensor_1500
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class RadarAltitudeSensor_1500
{
public:

    // RVA: 0x369 | Ordinal: 874
        void Construct(void);

    // RVA: 0x3CB | Ordinal: 972
        void Create(void);

    // RVA: 0x47C | Ordinal: 1149
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0xA8 | Ordinal: 169
        void RadarAltitudeSensor_1500(class AFM::RadarAltitudeSensor_1500 &&);

    // RVA: 0xA9 | Ordinal: 170
        void RadarAltitudeSensor_1500(class AFM::RadarAltitudeSensor_1500 const &);

    // RVA: 0xAA | Ordinal: 171
        void RadarAltitudeSensor_1500(void);

    // RVA: 0x4ED | Ordinal: 1262
        void Simulation(double *, double *, double);

    // RVA: 0x67B | Ordinal: 1660
        void getIPointerSensor(class AFM::Sensor **);

    // RVA: 0x849 | Ordinal: 2122
        void setPointerToObjectDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double, double *), void *);

    // RVA: 0x84E | Ordinal: 2127
        void setPointerToSurfaceDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double *), void *);

    // RVA: 0x853 | Ordinal: 2132
        void setPointerToSurfaceHeightFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x858 | Ordinal: 2137
        void setPointerToSurfaceHeightNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x85D | Ordinal: 2142
        void setPointerToSurfaceLevelFunction(void (__cdecl *)(void *, double *, double, double *), void *);

    // RVA: 0x862 | Ordinal: 2147
        void setPointerToSurfaceNormalFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x867 | Ordinal: 2152
        void setPointerToSurfaceNormalNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x86C | Ordinal: 2157
        void setPointerToSurfaceSpeedFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x871 | Ordinal: 2162
        void setPointerToSurfaceTypeFunction(void (__cdecl *)(void *, double *, unsigned int *), void *);

    // RVA: 0x8AF | Ordinal: 2224
        void setSensorPosition_scs(double *);

    // RVA: 0x8EC | Ordinal: 2285
        void setVersion(unsigned long);

    // RVA: 0x13A | Ordinal: 315
        void _RadarAltitudeSensor_1500(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_RADARALTITUDESENSOR_1500_HPP
