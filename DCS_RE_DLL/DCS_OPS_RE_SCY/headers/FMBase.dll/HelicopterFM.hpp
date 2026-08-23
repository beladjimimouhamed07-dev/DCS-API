#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HelicopterFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HelicopterFM
{
public:

    // RVA: 0xA6 | Ordinal: 167
        void HelicopterFM(class IwoLA *, double);

    // RVA: 0x4DD | Ordinal: 1246
        void getBladeDeflection(int) const;

    // RVA: 0x4E0 | Ordinal: 1249
        void getBladeFlapping(int) const;

    // RVA: 0x4E3 | Ordinal: 1252
        void getBladeHunting(int) const;

    // RVA: 0x505 | Ordinal: 1286
        void getCollectiveBladePitch(void) const;

    // RVA: 0x51F | Ordinal: 1312
        void getCyclicXBladePitch(void) const;

    // RVA: 0x520 | Ordinal: 1313
        void getCyclicZBladePitch(void) const;

    // RVA: 0x52A | Ordinal: 1323
        void getDebugParam(int) const;

    // RVA: 0x66B | Ordinal: 1644
        void getRotorControlState(int) const;

    // RVA: 0x66D | Ordinal: 1646
        void getRotorIF(char) const;

    // RVA: 0x674 | Ordinal: 1653
        void getRotorPhase(char) const;

    // RVA: 0x675 | Ordinal: 1654
        void getRotorPitch(void);

    // RVA: 0x676 | Ordinal: 1655
        void getRotorRPM(void);

    // RVA: 0x677 | Ordinal: 1656
        void getRotorRPM(char) const;

    // RVA: 0x679 | Ordinal: 1658
        void getRotorRoll(void);

    // RVA: 0x67A | Ordinal: 1659
        void getRudderBladePitch(void) const;

    // RVA: 0x81B | Ordinal: 2076
        void setCargoForce(class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x95E | Ordinal: 2399
        void simulate(double);

    // RVA: 0x1AE | Ordinal: 431
        void _HelicopterFM(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HELICOPTERFM_HPP
