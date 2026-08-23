#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Rotor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Rotor
{
public:

    // RVA: 0x126 | Ordinal: 295
        void Rotor(class EagleFM::Rotor const &);

    // RVA: 0x127 | Ordinal: 296
        void Rotor(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *, class EagleFM::RigidBody *, class EagleFM::EffectManager *);

    // RVA: 0x3CF | Ordinal: 976
        void applyForces(void);

    // RVA: 0x3EF | Ordinal: 1008
        void calcBladeFlappingHeight(int, double) const;

    // RVA: 0x430 | Ordinal: 1073
        void calcSlipstreamVelocity(struct EagleFM::Rotor::SlipstreamPoint &) const;

    // RVA: 0x45E | Ordinal: 1119
        void cleanBlades(void);

    // RVA: 0x47C | Ordinal: 1149
        void createBlades(struct EagleFM::BladeInit const &, int, int, int);

    // RVA: 0x496 | Ordinal: 1175
        void doSimulate(void);

    // RVA: 0x4DE | Ordinal: 1247
        void getBladeDeflection(int) const;

    // RVA: 0x4DF | Ordinal: 1248
        void getBladeDeltaLimFlapping(int) const;

    // RVA: 0x4E1 | Ordinal: 1250
        void getBladeFlapping(int) const;

    // RVA: 0x4E4 | Ordinal: 1253
        void getBladeHunting(int) const;

    // RVA: 0x4E5 | Ordinal: 1254
        void getBladeIF(int) const;

    // RVA: 0x4E6 | Ordinal: 1255
        void getBladePhase(int) const;

    // RVA: 0x4E7 | Ordinal: 1256
        void getBladePitch(int) const;

    // RVA: 0x4E8 | Ordinal: 1257
        void getBladeRelativeFlapping(int) const;

    // RVA: 0x4E9 | Ordinal: 1258
        void getBladeRelativeHunting(int) const;

    // RVA: 0x4EA | Ordinal: 1259
        void getBladesNum(void) const;

    // RVA: 0x501 | Ordinal: 1282
        void getCirculation(double) const;

    // RVA: 0x55C | Ordinal: 1373
        void getFlappingAvr(void) const;

    // RVA: 0x55D | Ordinal: 1374
        void getFlappingIm(void) const;

    // RVA: 0x55E | Ordinal: 1375
        void getFlappingRe(void) const;

    // RVA: 0x55F | Ordinal: 1376
        void getFlowRotorModel(void);

    // RVA: 0x56B | Ordinal: 1388
        void getForce_l(void) const;

    // RVA: 0x598 | Ordinal: 1433
        void getInductiveFlow(void) const;

    // RVA: 0x5A0 | Ordinal: 1441
        void getIsDamaged(void) const;

    // RVA: 0x5AB | Ordinal: 1452
        void getLambda(void) const;

    // RVA: 0x5D3 | Ordinal: 1492
        void getMoment_l(void) const;

    // RVA: 0x5D7 | Ordinal: 1496
        void getMu(void) const;

    // RVA: 0x669 | Ordinal: 1642
        void getRotorAoA(void) const;

    // RVA: 0x66A | Ordinal: 1643
        void getRotorBrakeFriction(void) const;

    // RVA: 0x66C | Ordinal: 1645
        void getRotorDir_l(void) const;

    // RVA: 0x66E | Ordinal: 1647
        void getRotorMOI(void) const;

    // RVA: 0x66F | Ordinal: 1648
        void getRotorMR(void) const;

    // RVA: 0x670 | Ordinal: 1649
        void getRotorMR_T(void) const;

    // RVA: 0x672 | Ordinal: 1651
        void getRotorMoment(void) const;

    // RVA: 0x673 | Ordinal: 1652
        void getRotorOmega(void) const;

    // RVA: 0x678 | Ordinal: 1657
        void getRotorRPM(void) const;

    // RVA: 0x688 | Ordinal: 1673
        void getShakeValue(void) const;

    // RVA: 0x6A7 | Ordinal: 1704
        void getTailRotorN(void) const;

    // RVA: 0x6B2 | Ordinal: 1715
        void getThrust(void) const;

    // RVA: 0x6D3 | Ordinal: 1748
        void getVind(int) const;

    // RVA: 0x6D5 | Ordinal: 1750
        void getVindAvr(void) const;

    // RVA: 0x733 | Ordinal: 1844
        void initAirStart(double);

    // RVA: 0x73C | Ordinal: 1853
        void initColdStart(void);

    // RVA: 0x748 | Ordinal: 1865
        void initHotStart(double);

    // RVA: 0x74B | Ordinal: 1868
        void initInductiveMachCorr(double *, double *, int);

    // RVA: 0x75A | Ordinal: 1883
        void initReductorFriction(double);

    // RVA: 0x75E | Ordinal: 1887
        void initSlipSteamDiamK(float);

    // RVA: 0x764 | Ordinal: 1893
        void initTailRotorN(double);

    // RVA: 0x769 | Ordinal: 1898
        void initThrustIAS_Corr(double, double, double, double);

    // RVA: 0x77F | Ordinal: 1920
        void isExtarnalRevCalc(void) const;

    // RVA: 0x7D0 | Ordinal: 2001
        void repair(void);

    // RVA: 0x7EC | Ordinal: 2029
        void resetMovement(double);

    // RVA: 0x7FF | Ordinal: 2048
        void setAddedFlowVelocityFunc(class std::function<class Math::Vector<3, double> __cdecl(class Math::Vector<3, double> const &)> const &);

    // RVA: 0x80B | Ordinal: 2060
        void setAuxDeviceMoment(double);

    // RVA: 0x811 | Ordinal: 2066
        void setBladeContact(int, double, double);

    // RVA: 0x812 | Ordinal: 2067
        void setBladeIF(int, double, bool);

    // RVA: 0x813 | Ordinal: 2068
        void setBladeRigidBodyElement(int, int);

    // RVA: 0x820 | Ordinal: 2081
        void setCirculation0(double);

    // RVA: 0x83D | Ordinal: 2110
        void setDeicerRate(double);

    // RVA: 0x855 | Ordinal: 2134
        void setExternalRevCalc(bool);

    // RVA: 0x873 | Ordinal: 2164
        void setHuntingVibranceCalc(bool);

    // RVA: 0x8DF | Ordinal: 2272
        void setReductorMOI(double);

    // RVA: 0x8E0 | Ordinal: 2273
        void setReductorMoment(double);

    // RVA: 0x8F9 | Ordinal: 2298
        void setRotorBrakeFriction(double);

    // RVA: 0x8FA | Ordinal: 2299
        void setRotorOmega(double);

    // RVA: 0x907 | Ordinal: 2312
        void setTailRotorMOI(double);

    // RVA: 0x908 | Ordinal: 2313
        void setTailRotorMoment(double);

    // RVA: 0x917 | Ordinal: 2328
        void setUnderlyingSurface(double, class Math::Vector<3, double>, double);

    // RVA: 0x1D4 | Ordinal: 469
        void _Rotor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ROTOR_HPP
