#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: Block
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class Block
{
public:

    // RVA: 0x4 | Ordinal: 5
        void Block(class profiler::Block &&);

    // RVA: 0x5 | Ordinal: 6
        void Block(class profiler::BaseBlockDescriptor const *, char const *, bool);

    // RVA: 0x6 | Ordinal: 7
        void Block(unsigned __int64, unsigned __int64, unsigned int, char const *);

    // RVA: 0x7 | Ordinal: 8
        void Block(unsigned __int64, unsigned int, char const *);

    // RVA: 0x34 | Ordinal: 53
        void finish(void);

    // RVA: 0x35 | Ordinal: 54
        void finish(unsigned __int64);

    // RVA: 0x36 | Ordinal: 55
        void finished(void) const;

    // RVA: 0x40 | Ordinal: 65
        void name(void) const;

    // RVA: 0x4C | Ordinal: 77
        void setStatus(enum profiler::EasyBlockStatus);

    // RVA: 0x4F | Ordinal: 80
        void start(void);

    // RVA: 0x50 | Ordinal: 81
        void start(unsigned __int64);

    // RVA: 0x53 | Ordinal: 84
        void status(void) const;

    // RVA: 0x11 | Ordinal: 18
        void _Block(void);
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_BLOCK_HPP
