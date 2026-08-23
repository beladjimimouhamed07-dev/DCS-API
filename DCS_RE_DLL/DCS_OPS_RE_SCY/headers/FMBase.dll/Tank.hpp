#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Tank
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class Tank
{
public:

    // RVA: 0x14F | Ordinal: 336
        void Tank(class EagleFM::Cooling::Tank &&);

    // RVA: 0x150 | Ordinal: 337
        void Tank(class EagleFM::Cooling::Tank const &);

    // RVA: 0x151 | Ordinal: 338
        void Tank(void);

    // RVA: 0x3C3 | Ordinal: 964
        void addHole(float, enum EagleFM::Cooling::DamageElement, unsigned int, class EagleFM::Cooling::IElement *);

    // RVA: 0x3C4 | Ordinal: 965
        void addHole(float, enum EagleFM::Cooling::DamageElement, class Math::Vector<3, double>, class EagleFM::Cooling::IElement *);

    // RVA: 0x49B | Ordinal: 1180
        void doSimulate(double);

    // RVA: 0x563 | Ordinal: 1380
        void getFluidMass(void) const;

    // RVA: 0x562 | Ordinal: 1379
        void getFluidMass0(void) const;

    // RVA: 0x564 | Ordinal: 1381
        void getFluidRelMass(void) const;

    // RVA: 0x62F | Ordinal: 1584
        void getPwat(void) const;

    // RVA: 0x6C5 | Ordinal: 1734
        void getTwatBoil(void) const;

    // RVA: 0x741 | Ordinal: 1858
        void initForDamage(class EagleFM::EffectManager *);

    // RVA: 0x742 | Ordinal: 1859
        void initForDamageAndBoil(class EagleFM::EffectManager *, class EagleFM::DynamicBody *, unsigned int);

    // RVA: 0x765 | Ordinal: 1894
        void initTank(char const *, float, float);

    // RVA: 0x76B | Ordinal: 1900
        void initWaterPressValve(float, bool);

    // RVA: 0x77E | Ordinal: 1919
        void isEmpty(void) const;

    // RVA: 0x78A | Ordinal: 1931
        void isVigorousBoil(void) const;

    // RVA: 0x7D2 | Ordinal: 2003
        void repair(void);

    // RVA: 0x86A | Ordinal: 2155
        void setFull(void);

    // RVA: 0x1E4 | Ordinal: 485
        void _Tank(void);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_TANK_HPP
