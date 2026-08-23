#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Writer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mail {

class Writer
{
public:

    // RVA: 0x94 | Ordinal: 149
        void Writer(class Mail::Message const &);

    // RVA: 0x1C7 | Ordinal: 456
        void flush(void);

    // RVA: 0x30A | Ordinal: 779
        void put(unsigned int, unsigned char);

    // RVA: 0x3B6 | Ordinal: 951
        void stream(void *, int);

    // RVA: 0x406 | Ordinal: 1031
        void writeFixed(double, int);

    // RVA: 0x407 | Ordinal: 1032
        void writeFixed(double, int, int);

    // RVA: 0x409 | Ordinal: 1034
        void writeHalf(float);

    // RVA: 0xD4 | Ordinal: 213
        void _Writer(void);
};

} // namespace Mail

// DCS_OPS_RE_EDCORE.DLL_WRITER_HPP
