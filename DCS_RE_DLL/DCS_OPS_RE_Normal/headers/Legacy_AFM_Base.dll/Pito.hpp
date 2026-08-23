#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Pito
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Pito
{
public:

    // RVA: 0x364 | Ordinal: 869
        void Construct(void);

    // RVA: 0x3C6 | Ordinal: 967
        void Create(void);

    // RVA: 0x47B | Ordinal: 1148
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x99 | Ordinal: 154
        void Pito(class AFM::Pito &&);

    // RVA: 0x9A | Ordinal: 155
        void Pito(class AFM::Pito const &);

    // RVA: 0x9B | Ordinal: 156
        void Pito(void);

    // RVA: 0x4EA | Ordinal: 1259
        void Simulation(double);

    // RVA: 0x57C | Ordinal: 1405
        void getAirSpeed(double *);

    // RVA: 0x580 | Ordinal: 1409
        void getAtmospherePressure(double *);

    // RVA: 0x581 | Ordinal: 1410
        void getAtmosphereTemperature(double *);

    // RVA: 0x5A1 | Ordinal: 1442
        void getFailureFactor(double *);

    // RVA: 0x697 | Ordinal: 1688
        void getIndicatedAirSpeed(double *);

    // RVA: 0x75A | Ordinal: 1883
        void getVerticalSpeed(double *);

    // RVA: 0x7AA | Ordinal: 1963
        void setFailureFactor(double);

    // RVA: 0x845 | Ordinal: 2118
        void setPitoElevation_scs(double);

    // RVA: 0x846 | Ordinal: 2119
        void setPitoPosition_scs(double *);

    // RVA: 0x8CA | Ordinal: 2251
        void setSurfaceProp(double *, double *);

    // RVA: 0x135 | Ordinal: 310
        void _Pito(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_PITO_HPP
