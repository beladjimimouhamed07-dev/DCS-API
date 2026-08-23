#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Breakable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Breakable
{
public:

    // RVA: 0x3D | Ordinal: 62
        void Breakable(class EagleFM::Breakable const &);

    // RVA: 0x3E | Ordinal: 63
        void Breakable(class EagleFM::AerodyneFM *);

    // RVA: 0x73E | Ordinal: 1855
        void initFailureProbability(class ed::basic_string<char> const &, double);

    // RVA: 0x73F | Ordinal: 1856
        void initFailureProbability(enum WorldGeneral::Failures, double);

    // RVA: 0x77A | Ordinal: 1915
        void isDamaged(class ed::basic_string<char> const &) const;

    // RVA: 0x77B | Ordinal: 1916
        void isDamaged(enum WorldGeneral::Failures) const;

    // RVA: 0x77C | Ordinal: 1917
        void isDamaged(void) const;

    // RVA: 0x782 | Ordinal: 1923
        void isImmortal(void);

    // RVA: 0x7A6 | Ordinal: 1959
        void parseFailure(class ed::basic_string<char> const &) const;

    // RVA: 0x7D8 | Ordinal: 2009
        void requestFailure(class ed::basic_string<char> const &);

    // RVA: 0x7D9 | Ordinal: 2010
        void requestFailure(struct Damage::Initiator &, enum WorldGeneral::Failures);

    // RVA: 0x7DA | Ordinal: 2011
        void requestFailure(enum WorldGeneral::Failures);

    // RVA: 0x7E6 | Ordinal: 2023
        void resetFailureProbability(class ed::basic_string<char> const &);

    // RVA: 0x7E7 | Ordinal: 2024
        void resetFailureProbability(enum WorldGeneral::Failures);

    // RVA: 0x859 | Ordinal: 2138
        void setFailureProbability(class ed::basic_string<char> const &, double, double, double);

    // RVA: 0x85A | Ordinal: 2139
        void setFailureProbability(enum WorldGeneral::Failures, double, double, double);

    // RVA: 0x87E | Ordinal: 2175
        void setImmortal(bool);

    // RVA: 0x18C | Ordinal: 397
        void _Breakable(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BREAKABLE_HPP
