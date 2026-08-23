#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Wheel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Wheel
{
public:

    // RVA: 0x37C | Ordinal: 893
        void Construct(void);

    // RVA: 0x3E3 | Ordinal: 996
        void Create(void);

    // RVA: 0x4FA | Ordinal: 1275
        void Simulation(double);

    // RVA: 0xF3 | Ordinal: 244
        void Wheel(class AFM::Wheel &&);

    // RVA: 0xF4 | Ordinal: 245
        void Wheel(class AFM::Wheel const &);

    // RVA: 0xF5 | Ordinal: 246
        void Wheel(void);

    // RVA: 0x58C | Ordinal: 1421
        void getBreakMoment(double *);

    // RVA: 0x5B6 | Ordinal: 1463
        void getForce_ocs(double *);

    // RVA: 0x6A4 | Ordinal: 1701
        void getIntegrityFactor(double *);

    // RVA: 0x6C7 | Ordinal: 1736
        void getMaxBreakMoment(double *);

    // RVA: 0x703 | Ordinal: 1796
        void getRadius(double *);

    // RVA: 0x729 | Ordinal: 1834
        void getRotationPhase(double *);

    // RVA: 0x738 | Ordinal: 1849
        void getSpeedX_ocs(double *);

    // RVA: 0x73D | Ordinal: 1854
        void getSpeedZ_ocs(double *);

    // RVA: 0x747 | Ordinal: 1864
        void getSurfaceType(int *);

    // RVA: 0x793 | Ordinal: 1940
        void setBreakMoment(double);

    // RVA: 0x79F | Ordinal: 1952
        void setDamageForceFactor(double);

    // RVA: 0x7A0 | Ordinal: 1953
        void setDamageSpeed(double);

    // RVA: 0x7C1 | Ordinal: 1986
        void setForce_ocs(double *);

    // RVA: 0x7C8 | Ordinal: 1993
        void setGlideFrictionFactor(double);

    // RVA: 0x7E0 | Ordinal: 2017
        void setImmortal(bool);

    // RVA: 0x80D | Ordinal: 2062
        void setMaxBreakMoment(double);

    // RVA: 0x878 | Ordinal: 2169
        void setPrecipitationFactor(double);

    // RVA: 0x87C | Ordinal: 2173
        void setRadius(double);

    // RVA: 0x87D | Ordinal: 2174
        void setRateFactor(double);

    // RVA: 0x890 | Ordinal: 2193
        void setRollFrictionFactor(double);

    // RVA: 0x8AC | Ordinal: 2221
        void setRotationPhase(double);

    // RVA: 0x8B8 | Ordinal: 2233
        void setSpeedX_ocs(double);

    // RVA: 0x8BD | Ordinal: 2238
        void setSpeedZ_ocs(double);

    // RVA: 0x8C5 | Ordinal: 2246
        void setStaticFrictionFactor(double);

    // RVA: 0x8CC | Ordinal: 2253
        void setSurfaceType(int);

    // RVA: 0x8EE | Ordinal: 2287
        void setVersion(unsigned long);

    // RVA: 0x153 | Ordinal: 340
        void _Wheel(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_WHEEL_HPP
