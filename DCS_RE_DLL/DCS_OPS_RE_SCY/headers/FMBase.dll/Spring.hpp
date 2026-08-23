#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Spring
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Spring
{
public:

    // RVA: 0x138 | Ordinal: 313
        void Spring(void);

    // RVA: 0x406 | Ordinal: 1031
        void calcForceByLength(double);

    // RVA: 0x407 | Ordinal: 1032
        void calcForceByLength(void);

    // RVA: 0x41B | Ordinal: 1052
        void calcLengthByForce(double);

    // RVA: 0x41C | Ordinal: 1053
        void calcLengthByForce(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SPRING_HPP
