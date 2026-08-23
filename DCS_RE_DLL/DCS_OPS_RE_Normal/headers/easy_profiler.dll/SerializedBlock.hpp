#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: SerializedBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class SerializedBlock
{
public:

    // RVA: 0xC | Ordinal: 13
        void SerializedBlock(class profiler::Block const &, unsigned short);

    // RVA: 0x29 | Ordinal: 42
        void data(void) const;

    // RVA: 0x41 | Ordinal: 66
        void name(void) const;
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_SERIALIZEDBLOCK_HPP
