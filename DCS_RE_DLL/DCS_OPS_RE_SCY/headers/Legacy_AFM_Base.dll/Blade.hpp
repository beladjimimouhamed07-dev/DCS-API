#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Blade
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Blade
{
public:

    // RVA: 0x1B | Ordinal: 28
        void Blade(class AFM::Blade &&);

    // RVA: 0x1C | Ordinal: 29
        void Blade(class AFM::Blade const &);

    // RVA: 0x1D | Ordinal: 30
        void Blade(void);

    // RVA: 0x344 | Ordinal: 837
        void Construct(void);

    // RVA: 0x39C | Ordinal: 925
        void Create(void);

    // RVA: 0x442 | Ordinal: 1091
        void InitMatrix(double, double);

    // RVA: 0x46D | Ordinal: 1134
        void LockBladeAerodynamics(class AFM::AerodynamicBody *);

    // RVA: 0x473 | Ordinal: 1140
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4C5 | Ordinal: 1222
        void ResetRotation(void);

    // RVA: 0x4D5 | Ordinal: 1238
        void Simulation(int, double, double, double *, double *, int, double);

    // RVA: 0x500 | Ordinal: 1281
        void Vector0toVectorF(double *, double *, bool);

    // RVA: 0x501 | Ordinal: 1282
        void Vector0toVectorS(double *, double *, bool);

    // RVA: 0x502 | Ordinal: 1283
        void VectorFtoVector0(double *, double *, bool);

    // RVA: 0x503 | Ordinal: 1284
        void VectorFtoVectorP(double *, double *);

    // RVA: 0x504 | Ordinal: 1285
        void VectorHtoVectorP(double *, double *, bool);

    // RVA: 0x505 | Ordinal: 1286
        void VectorPtoVectorF(double *, double *);

    // RVA: 0x506 | Ordinal: 1287
        void VectorPtoVectorH(double *, double *, bool);

    // RVA: 0x507 | Ordinal: 1288
        void VectorStoVector0(double *, double *, bool);

    // RVA: 0x508 | Ordinal: 1289
        void VectorStoVectorW(int, double *, double *, bool);

    // RVA: 0x509 | Ordinal: 1290
        void VectorWtoVectorS(int, double *, double *, bool);

    // RVA: 0x53D | Ordinal: 1342
        void calcMatrix(int);

    // RVA: 0x577 | Ordinal: 1400
        void getAerodynamicFactor(int, double *);

    // RVA: 0x58F | Ordinal: 1424
        void getConstructionPhase(double *);

    // RVA: 0x5A3 | Ordinal: 1444
        void getFanPhase(double *);

    // RVA: 0x5A7 | Ordinal: 1448
        void getFlapping(double *);

    // RVA: 0x5B7 | Ordinal: 1464
        void getForce_scs(double *);

    // RVA: 0x5C5 | Ordinal: 1478
        void getHunting(double *);

    // RVA: 0x6A1 | Ordinal: 1698
        void getIntegrityFactor(double *);

    // RVA: 0x6B6 | Ordinal: 1719
        void getMOI(double *);

    // RVA: 0x6EC | Ordinal: 1773
        void getMoment_scs(double *);

    // RVA: 0x6F9 | Ordinal: 1786
        void getPitch(double *);

    // RVA: 0x72A | Ordinal: 1835
        void getRotorMoment(double *);

    // RVA: 0x771 | Ordinal: 1906
        void log(int);

    // RVA: 0x77D | Ordinal: 1918
        void setAerodynamicFactor(int, double);

    // RVA: 0x796 | Ordinal: 1943
        void setConstructionPhase(double);

    // RVA: 0x7AC | Ordinal: 1965
        void setFanPhase(double);

    // RVA: 0x7AD | Ordinal: 1966
        void setFanPosition(double *);

    // RVA: 0x7AF | Ordinal: 1968
        void setFlapping(double);

    // RVA: 0x7B0 | Ordinal: 1969
        void setFlappingHingeDamper(double);

    // RVA: 0x7B1 | Ordinal: 1970
        void setFlappingHingeRadius(double);

    // RVA: 0x7B2 | Ordinal: 1971
        void setFlappingHingeSpring(double);

    // RVA: 0x7CC | Ordinal: 1997
        void setHunting(double);

    // RVA: 0x7CD | Ordinal: 1998
        void setHuntingHingeDamper(double);

    // RVA: 0x7CE | Ordinal: 1999
        void setHuntingHingeRadius(double);

    // RVA: 0x7CF | Ordinal: 2000
        void setHuntingHingeSpring(double);

    // RVA: 0x7EA | Ordinal: 2027
        void setIntegrityFactor(double);

    // RVA: 0x800 | Ordinal: 2049
        void setMass(double);

    // RVA: 0x802 | Ordinal: 2051
        void setMassPosition(double *);

    // RVA: 0x811 | Ordinal: 2066
        void setMaxFlapping(double);

    // RVA: 0x812 | Ordinal: 2067
        void setMaxHunting(double);

    // RVA: 0x821 | Ordinal: 2082
        void setMinFlapping(double);

    // RVA: 0x822 | Ordinal: 2083
        void setMinHunting(double);

    // RVA: 0x826 | Ordinal: 2087
        void setMinMaxRadius(double, double);

    // RVA: 0x83C | Ordinal: 2109
        void setPitch(double);

    // RVA: 0x88A | Ordinal: 2187
        void setRightRotation(void);

    // RVA: 0x8E0 | Ordinal: 2273
        void setTurbulenceOff(void);

    // RVA: 0x8E2 | Ordinal: 2275
        void setTurbulenceOn(void);

    // RVA: 0x8E4 | Ordinal: 2277
        void setTwist(double, double);

    // RVA: 0x10B | Ordinal: 268
        void _Blade(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_BLADE_HPP
