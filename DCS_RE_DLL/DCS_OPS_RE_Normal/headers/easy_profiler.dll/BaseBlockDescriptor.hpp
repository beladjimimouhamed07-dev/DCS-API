#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: BaseBlockDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class BaseBlockDescriptor
{
public:

    // RVA: 0x3 | Ordinal: 4
        void BaseBlockDescriptor(unsigned int, enum profiler::EasyBlockStatus, int, enum profiler::BlockType, unsigned int);

    // RVA: 0x26 | Ordinal: 39
        void color(void) const;

    // RVA: 0x39 | Ordinal: 58
        void id(void) const;

    // RVA: 0x3E | Ordinal: 63
        void line(void) const;

    // RVA: 0x52 | Ordinal: 83
        void status(void) const;

    // RVA: 0x57 | Ordinal: 88
        void type(void) const;
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_BASEBLOCKDESCRIPTOR_HPP
