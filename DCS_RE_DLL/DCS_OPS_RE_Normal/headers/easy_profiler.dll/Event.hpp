#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: Event
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class Event
{
public:

    // RVA: 0xA | Ordinal: 11
        void Event(unsigned __int64, unsigned __int64);

    // RVA: 0xB | Ordinal: 12
        void Event(unsigned __int64);

    // RVA: 0x21 | Ordinal: 34
        void begin(void) const;

    // RVA: 0x2F | Ordinal: 48
        void duration(void) const;

    // RVA: 0x31 | Ordinal: 50
        void end(void) const;
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_EVENT_HPP
