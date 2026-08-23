#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: easy_profiler.dll
// Class: SerializedData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace profiler {

class SerializedData
{
public:

    // RVA: 0xE | Ordinal: 15
        void SerializedData(class profiler::SerializedData &&);

    // RVA: 0xF | Ordinal: 16
        void SerializedData(void);

    // RVA: 0x25 | Ordinal: 38
        void clear(void);

    // RVA: 0x2C | Ordinal: 45
        void data(void);

    // RVA: 0x2D | Ordinal: 46
        void data(void) const;

    // RVA: 0x30 | Ordinal: 49
        void empty(void) const;

    // RVA: 0x32 | Ordinal: 51
        void extend(unsigned __int64);

    // RVA: 0x46 | Ordinal: 71
        void set(char *, unsigned __int64);

    // RVA: 0x47 | Ordinal: 72
        void set(unsigned __int64);

    // RVA: 0x4E | Ordinal: 79
        void size(void) const;

    // RVA: 0x54 | Ordinal: 85
        void swap(class profiler::SerializedData &);

    // RVA: 0x13 | Ordinal: 20
        void _SerializedData(void);
};

} // namespace profiler

// DCS_OPS_RE_EASY_PROFILER.DLL_SERIALIZEDDATA_HPP
