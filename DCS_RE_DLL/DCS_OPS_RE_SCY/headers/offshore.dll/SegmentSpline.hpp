#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: SegmentSpline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class SegmentSpline
{
public:

    // RVA: 0x7 | Ordinal: 8
        void SegmentSpline(struct offshore::Spline const &);

    // RVA: 0xE0 | Ordinal: 225
        void convertToOffshore(struct offshore::Spline &);

    // RVA: 0x105 | Ordinal: 262
        void divide(void);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_SEGMENTSPLINE_HPP
