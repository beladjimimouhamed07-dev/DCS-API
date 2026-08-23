#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRingBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRingBuffer
{
public:

    // RVA: 0x86D | Ordinal: 2158
        void append(class QByteArray const &);

    // RVA: 0x86E | Ordinal: 2159
        void append(char const *, __int64);

    // RVA: 0x9C8 | Ordinal: 2505
        void chop(__int64);

    // RVA: 0x9E6 | Ordinal: 2535
        void clear(void);

    // RVA: 0xE8B | Ordinal: 3724
        void free(__int64);

    // RVA: 0xFBE | Ordinal: 4031
        void indexOf(char, __int64, __int64) const;

    // RVA: 0x14D6 | Ordinal: 5335
        void peek(char *, __int64, __int64) const;

    // RVA: 0x171C | Ordinal: 5917
        void read(void);

    // RVA: 0x171D | Ordinal: 5918
        void read(char *, __int64);

    // RVA: 0x1734 | Ordinal: 5941
        void readLine(char *, __int64);

    // RVA: 0x173F | Ordinal: 5952
        void readPointerAtPosition(__int64, __int64 &) const;

    // RVA: 0x1850 | Ordinal: 6225
        void reserve(__int64);

    // RVA: 0x1852 | Ordinal: 6227
        void reserveFront(__int64);
};

// DCS_OPS_RE_QT5CORE.DLL_QRINGBUFFER_HPP
