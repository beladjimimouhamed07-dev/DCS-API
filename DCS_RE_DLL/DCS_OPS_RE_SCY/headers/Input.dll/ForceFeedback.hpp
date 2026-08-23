#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Input.dll
// Class: ForceFeedback
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ForceFeedback
{
public:

    // RVA: 0x29 | Ordinal: 42
        void assumedChannel(void) const;

    // RVA: 0x74 | Ordinal: 117
        void playConditionEffect(void);

    // RVA: 0x75 | Ordinal: 118
        void playPeriodicEffect(void);

    // RVA: 0x80 | Ordinal: 129
        void setConditionEffect(double, double, double, double);

    // RVA: 0x8C | Ordinal: 141
        void setPeriodicEffect(double, double, double);

    // RVA: 0x96 | Ordinal: 151
        void stopConditionEffect(void);

    // RVA: 0x97 | Ordinal: 152
        void stopPeriodicEffect(void);
};

// DCS_OPS_RE_INPUT.DLL_FORCEFEEDBACK_HPP
