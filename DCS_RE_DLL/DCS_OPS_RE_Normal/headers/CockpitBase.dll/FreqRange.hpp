#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: FreqRange
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class FreqRange
{
public:

    // RVA: 0x3B | Ordinal: 60
        void FreqRange(struct FrequencyRange const &);

    // RVA: 0x3C | Ordinal: 61
        void FreqRange(double, double);

    // RVA: 0x3D | Ordinal: 62
        void FreqRange(void);

    // RVA: 0x516 | Ordinal: 1303
        void operator_(struct cockpit::FreqRange const &) const;
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_FREQRANGE_HPP
