#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: SlipBall
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class SlipBall
{
public:

    // RVA: 0x371 | Ordinal: 882
        void Construct(void);

    // RVA: 0x3D4 | Ordinal: 981
        void Create(void);

    // RVA: 0x47F | Ordinal: 1152
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4F2 | Ordinal: 1267
        void Simulation(double);

    // RVA: 0xC3 | Ordinal: 196
        void SlipBall(class AFM::SlipBall &&);

    // RVA: 0xC4 | Ordinal: 197
        void SlipBall(class AFM::SlipBall const &);

    // RVA: 0xC5 | Ordinal: 198
        void SlipBall(void);

    // RVA: 0x60F | Ordinal: 1552
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x78A | Ordinal: 1931
        void setBallDampingFactor(double);

    // RVA: 0x8B2 | Ordinal: 2227
        void setSlipBallPosition_scs(double *);

    // RVA: 0x8D9 | Ordinal: 2266
        void setTubeLength(double);

    // RVA: 0x8DA | Ordinal: 2267
        void setTubeSector(double);

    // RVA: 0x143 | Ordinal: 324
        void _SlipBall(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SLIPBALL_HPP
