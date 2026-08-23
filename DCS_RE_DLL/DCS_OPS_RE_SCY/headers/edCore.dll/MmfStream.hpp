#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: MmfStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace io {

class MmfStream
{
public:

    // RVA: 0x112 | Ordinal: 275
        void Close(void);

    // RVA: 0x71 | Ordinal: 114
        void MmfStream(class io::File *, enum io::Stream::Mode, unsigned __int64, unsigned int);

    // RVA: 0x72 | Ordinal: 115
        void MmfStream(char const *, enum io::Stream::Mode, unsigned int);

    // RVA: 0x73 | Ordinal: 116
        void MmfStream(void);

    // RVA: 0x12C | Ordinal: 301
        void Open(char const *, enum io::Stream::Mode, unsigned int);

    // RVA: 0x370 | Ordinal: 881
        void serializeOffset(unsigned __int64 &);

    // RVA: 0x3B8 | Ordinal: 953
        void streamString(char const *&);

    // RVA: 0x3B9 | Ordinal: 954
        void streamsecondary(void **, unsigned __int64, class io::File *&, unsigned __int64 &);

    // RVA: 0xC6 | Ordinal: 199
        void _MmfStream(void);
};

} // namespace io

// DCS_OPS_RE_EDCORE.DLL_MMFSTREAM_HPP
