#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIHelicopterFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIHelicopterFM
{
public:

    // RVA: 0xD | Ordinal: 14
        void AIHelicopterFM(class EagleFM::AIFM::AIHelicopterFM const &);

    // RVA: 0xE | Ordinal: 15
        void AIHelicopterFM(class IwoLA *, class EagleFM::AIFM::AIHelicopterInit const &);

    // RVA: 0xF | Ordinal: 16
        void AIHelicopterFM(void);

    // RVA: 0x5E | Ordinal: 95
        void doSetStartupSequencePhase(unsigned char);

    // RVA: 0x61 | Ordinal: 98
        void doSimulate(void);

    // RVA: 0x67 | Ordinal: 104
        void getAPU_RPM_Delay(void) const;

    // RVA: 0x6F | Ordinal: 112
        void getElecPower(void) const;

    // RVA: 0x71 | Ordinal: 114
        void getEngineRelativeRPM(int) const;

    // RVA: 0x72 | Ordinal: 115
        void getEnginesNum(void) const;

    // RVA: 0x73 | Ordinal: 116
        void getEnginesSafeNum(void) const;

    // RVA: 0x75 | Ordinal: 118
        void getFlowVelocity(void) const;

    // RVA: 0x8F | Ordinal: 144
        void getRotorFixed(void) const;

    // RVA: 0x90 | Ordinal: 145
        void getRotorIF(void) const;

    // RVA: 0x91 | Ordinal: 146
        void getRotorPhase(void) const;

    // RVA: 0x92 | Ordinal: 147
        void getRotorRPM(void) const;

    // RVA: 0x93 | Ordinal: 148
        void getRotorRelativeRPM(void) const;

    // RVA: 0x9B | Ordinal: 156
        void getTailBroken(void) const;

    // RVA: 0x9D | Ordinal: 158
        void getTailRotorRelativeRPM(void) const;

    // RVA: 0x115 | Ordinal: 278
        void init(class IwoLA *, class EagleFM::AustereFM::Propulsion::AustereEngine **, class EagleFM::AIFM::AIHelicopterInit const &);

    // RVA: 0x11A | Ordinal: 283
        void initAirStart(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0x11D | Ordinal: 286
        void initColdStart(class Math::Vector<3, double> const &, float, class Math::Vector<3, double> const &);

    // RVA: 0x120 | Ordinal: 289
        void initHotStart(class Math::Vector<3, double> const &, float, class Math::Vector<3, double> const &);

    // RVA: 0x12C | Ordinal: 301
        void setCellIF(int, float, float);

    // RVA: 0x131 | Ordinal: 306
        void setEnginesPitchControls(float);

    // RVA: 0x132 | Ordinal: 307
        void setEnginesTertiaryControls(float);

    // RVA: 0x133 | Ordinal: 308
        void setEnginesThrustControls(float);

    // RVA: 0x134 | Ordinal: 309
        void setEnginesVelocityControls(float);

    // RVA: 0x142 | Ordinal: 323
        void setRotorFixed(bool);

    // RVA: 0x149 | Ordinal: 330
        void setSurfaceProp(double, class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>, float, float);

    // RVA: 0x159 | Ordinal: 346
        void shutDown(void);

    // RVA: 0x15E | Ordinal: 351
        void startUp(void);

    // RVA: 0x160 | Ordinal: 353
        void stop(void);

    // RVA: 0x24 | Ordinal: 37
        void _AIHelicopterFM(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIHELICOPTERFM_HPP
