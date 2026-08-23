#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: SerializedBlockDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class SerializedBlockDescriptor
{
public:

    // RVA: 0x2A | Ordinal: 43
        void data(void) const;

    // RVA: 0x33 | Ordinal: 52
        void file(void) const;

    // RVA: 0x42 | Ordinal: 67
        void name(void) const;

    // RVA: 0x4D | Ordinal: 78
        void setStatus(enum profiler::EasyBlockStatus);
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_SERIALIZEDBLOCKDESCRIPTOR_HPP
