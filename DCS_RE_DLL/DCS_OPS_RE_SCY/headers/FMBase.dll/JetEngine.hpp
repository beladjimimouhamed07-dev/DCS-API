#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetEngine
{
public:

    // RVA: 0xD0 | Ordinal: 209
        void JetEngine(class EagleFM::JetEngine const &);

    // RVA: 0xD1 | Ordinal: 210
        void JetEngine(class EagleFM::DynamicBody *, class EagleFM::FuelPipeline *, double);

    // RVA: 0x40A | Ordinal: 1035
        void calcFuelFlow(void);

    // RVA: 0x414 | Ordinal: 1045
        void calcGG_Moment(void);

    // RVA: 0x426 | Ordinal: 1063
        void calcOwnMoment(void);

    // RVA: 0x490 | Ordinal: 1169
        void doSimulate(void);

    // RVA: 0x509 | Ordinal: 1290
        void getComprOmega(void) const;

    // RVA: 0x50A | Ordinal: 1291
        void getComprRotationPhase(void) const;

    // RVA: 0x572 | Ordinal: 1395
        void getFuelFlow(void) const;

    // RVA: 0x5F1 | Ordinal: 1522
        void getOwnMoment_l(void) const;

    // RVA: 0x5F4 | Ordinal: 1525
        void getParam(int) const;

    // RVA: 0x646 | Ordinal: 1607
        void getRelativeComprRPM(void) const;

    // RVA: 0x841 | Ordinal: 2114
        void setDir_l(class Math::Vector<3, double>);

    // RVA: 0x868 | Ordinal: 2153
        void setFuelPipeline(class EagleFM::FuelPipeline *);

    // RVA: 0x933 | Ordinal: 2356
        void setYawPitch(float, float);

    // RVA: 0x976 | Ordinal: 2423
        void simulateComprOmega(void);

    // RVA: 0x977 | Ordinal: 2424
        void simulateFuelFlow(void);

    // RVA: 0x1B8 | Ordinal: 441
        void _JetEngine(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETENGINE_HPP
