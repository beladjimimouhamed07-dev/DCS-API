#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Damper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Damper
{
public:

    // RVA: 0x67 | Ordinal: 104
        void Damper(double);

    // RVA: 0x408 | Ordinal: 1033
        void calcForceBySpeed(double);

    // RVA: 0x409 | Ordinal: 1034
        void calcForceBySpeed(void);

    // RVA: 0x432 | Ordinal: 1075
        void calcSpeedByForce(double);

    // RVA: 0x433 | Ordinal: 1076
        void calcSpeedByForce(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_DAMPER_HPP
