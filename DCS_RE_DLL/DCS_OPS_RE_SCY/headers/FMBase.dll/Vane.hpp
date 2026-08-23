#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Vane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Vane
{
public:

    // RVA: 0x15D | Ordinal: 350
        void Vane(class EagleFM::DynamicBody *);

    // RVA: 0x4C6 | Ordinal: 1223
        void getAngle(void) const;

    // RVA: 0x52D | Ordinal: 1326
        void getDeicerRate(void) const;

    // RVA: 0x58F | Ordinal: 1424
        void getIF(void) const;

    // RVA: 0x594 | Ordinal: 1429
        void getIceLayerThickness(void) const;

    // RVA: 0x641 | Ordinal: 1602
        void getRelativeAngle(void) const;

    // RVA: 0x83E | Ordinal: 2111
        void setDeicerRate(double);

    // RVA: 0x87A | Ordinal: 2171
        void setIF(double);

    // RVA: 0x8F3 | Ordinal: 2292
        void setRoll(float);

    // RVA: 0x920 | Ordinal: 2337
        void setVind_l(class Math::Vector<3, double>);

    // RVA: 0x973 | Ordinal: 2420
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_VANE_HPP
