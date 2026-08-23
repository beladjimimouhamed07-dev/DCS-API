#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Blade
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Blade
{
public:

    // RVA: 0x2F | Ordinal: 48
        void Blade(class EagleFM::Blade const &);

    // RVA: 0x30 | Ordinal: 49
        void Blade(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *, class EagleFM::RigidBody *);

    // RVA: 0x31 | Ordinal: 50
        void Blade(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *, class EagleFM::RigidBody *, struct EagleFM::BladeInit const &);

    // RVA: 0x3F0 | Ordinal: 1009
        void calcBladeTipPnt_l(void) const;

    // RVA: 0x403 | Ordinal: 1028
        void calcFlappingHeight(double) const;

    // RVA: 0x41F | Ordinal: 1056
        void calcMatrix(void);

    // RVA: 0x4B3 | Ordinal: 1204
        void getADForce_l(void) const;

    // RVA: 0x4E2 | Ordinal: 1251
        void getBladeForce(void) const;

    // RVA: 0x500 | Ordinal: 1281
        void getCirculation(void) const;

    // RVA: 0x521 | Ordinal: 1314
        void getD2Flapping(void) const;

    // RVA: 0x522 | Ordinal: 1315
        void getDFlapping(void) const;

    // RVA: 0x52C | Ordinal: 1325
        void getDeflection(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void getDeltaLimFlapping(void) const;

    // RVA: 0x55B | Ordinal: 1372
        void getFlapping(void) const;

    // RVA: 0x568 | Ordinal: 1385
        void getForce_l(void) const;

    // RVA: 0x586 | Ordinal: 1415
        void getHunting(void) const;

    // RVA: 0x588 | Ordinal: 1417
        void getIF(void) const;

    // RVA: 0x591 | Ordinal: 1426
        void getIceForInductive(int) const;

    // RVA: 0x5B6 | Ordinal: 1463
        void getMOI_y(void) const;

    // RVA: 0x5D1 | Ordinal: 1490
        void getMoment_l(void) const;

    // RVA: 0x5FF | Ordinal: 1536
        void getPhase(void) const;

    // RVA: 0x604 | Ordinal: 1541
        void getPitch(void) const;

    // RVA: 0x64D | Ordinal: 1614
        void getRelativeFlapping(void) const;

    // RVA: 0x64E | Ordinal: 1615
        void getRelativeHunting(void) const;

    // RVA: 0x671 | Ordinal: 1650
        void getRotorMoment(void) const;

    // RVA: 0x687 | Ordinal: 1672
        void getShakeValue(void) const;

    // RVA: 0x711 | Ordinal: 1810
        void init(struct EagleFM::BladeInit const &);

    // RVA: 0x7EB | Ordinal: 2028
        void resetMovement(double);

    // RVA: 0x7FA | Ordinal: 2043
        void setADSegmentsNum(int);

    // RVA: 0x7FE | Ordinal: 2047
        void setAddedFlowVelocityFunc(class std::function<class Math::Vector<3, double> __cdecl(class Math::Vector<3, double> const &)> const &);

    // RVA: 0x81F | Ordinal: 2080
        void setCirculation0(double);

    // RVA: 0x83C | Ordinal: 2109
        void setDeicerRate(double);

    // RVA: 0x874 | Ordinal: 2165
        void setIF(double);

    // RVA: 0x880 | Ordinal: 2177
        void setInductiveVelocity(class Math::Vector<3, double> const *, double, double);

    // RVA: 0x8AF | Ordinal: 2224
        void setOmega(double);

    // RVA: 0x8C3 | Ordinal: 2244
        void setPitch(double);

    // RVA: 0x8EF | Ordinal: 2288
        void setRigidBodyElement(int);

    // RVA: 0x8F1 | Ordinal: 2290
        void setRigidContact(double, double);

    // RVA: 0x915 | Ordinal: 2326
        void setUnderlyingSurface(double, class Math::Vector<3, double> const &);

    // RVA: 0x91E | Ordinal: 2335
        void setVindSegmentsNum(int);

    // RVA: 0x92A | Ordinal: 2347
        void setVortexPhaseMax(double);

    // RVA: 0x951 | Ordinal: 2386
        void simulate(double);

    // RVA: 0x988 | Ordinal: 2441
        void takeBlowForce_l(void);

    // RVA: 0x989 | Ordinal: 2442
        void takeBlowMoment_l(void);

    // RVA: 0x98A | Ordinal: 2443
        void takeBlowRotorMoment(void);

    // RVA: 0x187 | Ordinal: 392
        void _Blade(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BLADE_HPP
