#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CScopeTrace
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CScopeTrace
{
public:

    // RVA: 0x3F | Ordinal: 64
        void CScopeTrace(char const *);

    // RVA: 0x1EA | Ordinal: 491
        void Init(void);

    // RVA: 0x1EC | Ordinal: 493
        void IsActive(void);

    // RVA: 0x244 | Ordinal: 581
        void Report(enum SpeedTree::CScopeTrace::EReportFormat, class SpeedTree::CBasicString<1> &, struct SpeedTree::CScopeTrace::SNode *);

    // RVA: 0x293 | Ordinal: 660
        void Start(void);

    // RVA: 0x295 | Ordinal: 662
        void Stop(void);

    // RVA: 0x8E | Ordinal: 143
        void _CScopeTrace(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CSCOPETRACE_HPP
