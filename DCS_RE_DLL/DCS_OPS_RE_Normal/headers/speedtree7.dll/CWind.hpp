#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CWind
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CWind
{
public:

    // RVA: 0x179 | Ordinal: 378
        void Advance(bool, float);

    // RVA: 0x41 | Ordinal: 66
        void CWind(class SpeedTree::CWind &&);

    // RVA: 0x42 | Ordinal: 67
        void CWind(class SpeedTree::CWind const &);

    // RVA: 0x43 | Ordinal: 68
        void CWind(void);

    // RVA: 0x192 | Ordinal: 403
        void ComputeWindAnchor(float *);

    // RVA: 0x1A7 | Ordinal: 424
        void EnableGusting(bool);

    // RVA: 0x1B9 | Ordinal: 442
        void GetBranchAnchor(void) const;

    // RVA: 0x1CF | Ordinal: 464
        void GetMaxBranchLength(void) const;

    // RVA: 0x1D2 | Ordinal: 467
        void GetParams(void) const;

    // RVA: 0x1DB | Ordinal: 476
        void GetShaderTable(void) const;

    // RVA: 0x1E5 | Ordinal: 486
        void Gust(float);

    // RVA: 0x1EE | Ordinal: 495
        void IsBranchWindEnabled(void) const;

    // RVA: 0x1F6 | Ordinal: 503
        void IsGlobalWindEnabled(void) const;

    // RVA: 0x1FB | Ordinal: 508
        void IsOptionEnabled(enum SpeedTree::CWind::EOptions) const;

    // RVA: 0x203 | Ordinal: 516
        void LinearSigmoid(float, float);

    // RVA: 0x216 | Ordinal: 535
        void Normalize(float *);

    // RVA: 0x23C | Ordinal: 573
        void RandomFloat(float, float) const;

    // RVA: 0x259 | Ordinal: 602
        void Scale(float);

    // RVA: 0x276 | Ordinal: 631
        void SetDirection(class SpeedTree::Vec3 const &);

    // RVA: 0x27C | Ordinal: 637
        void SetGustFrequency(float);

    // RVA: 0x282 | Ordinal: 643
        void SetInitDirection(class SpeedTree::Vec3 const &);

    // RVA: 0x284 | Ordinal: 645
        void SetOption(enum SpeedTree::CWind::EOptions, bool);

    // RVA: 0x285 | Ordinal: 646
        void SetParams(struct SpeedTree::CWind::SParams const &);

    // RVA: 0x289 | Ordinal: 650
        void SetStrength(float);

    // RVA: 0x28B | Ordinal: 652
        void SetTreeValues(class SpeedTree::Vec3 const &, float);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CWIND_HPP
