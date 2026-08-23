#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: processor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class processor
{
public:

    // RVA: 0x20B | Ordinal: 524
        void getProcessorInfo(struct ed::processor::PROCESSOR_INFO &, bool);

    // RVA: 0x3F6 | Ordinal: 1015
        void updateProcessorInfo(struct ed::processor::PROCESSOR_INFO &);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_PROCESSOR_HPP
