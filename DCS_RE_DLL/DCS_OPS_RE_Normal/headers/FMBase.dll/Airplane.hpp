#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Airplane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Airplane
{
public:

    // RVA: 0x13 | Ordinal: 20
        void Airplane(class EagleFM::Airplane &&);

    // RVA: 0x14 | Ordinal: 21
        void Airplane(class EagleFM::Airplane const &);

    // RVA: 0x15 | Ordinal: 22
        void Airplane(class EagleFM::DynamicBody *);

    // RVA: 0x3CD | Ordinal: 974
        void applyForces(void);

    // RVA: 0x45D | Ordinal: 1118
        void cleanADElements(void);

    // RVA: 0x486 | Ordinal: 1159
        void doSimulate(void);

    // RVA: 0x4A2 | Ordinal: 1187
        void doWindTunneled(double, char const *);

    // RVA: 0x567 | Ordinal: 1384
        void getForce_l(void) const;

    // RVA: 0x5D0 | Ordinal: 1489
        void getMoment_l(void) const;

    // RVA: 0x6C6 | Ordinal: 1735
        void getUnderlyingSurface(class Math::Vector<3, double> &, class Math::Vector<3, double> &);

    // RVA: 0x76D | Ordinal: 1902
        void initWindTunneledChar(double, double, double);

    // RVA: 0x7F7 | Ordinal: 2040
        void setADElement(class EagleFM::ADElement *);

    // RVA: 0x8C6 | Ordinal: 2247
        void setPlanePart(class EagleFM::ADElement *);

    // RVA: 0x914 | Ordinal: 2325
        void setUnderlyingSurface(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x17E | Ordinal: 383
        void _Airplane(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AIRPLANE_HPP
