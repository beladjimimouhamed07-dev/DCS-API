#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: FileStream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace io {

class FileStream
{
public:

    // RVA: 0x111 | Ordinal: 274
        void Close(void);

    // RVA: 0x57 | Ordinal: 88
        void FileStream(class io::FileStream const &);

    // RVA: 0x58 | Ordinal: 89
        void FileStream(class io::File *, enum io::Stream::Mode, unsigned __int64, unsigned int);

    // RVA: 0x59 | Ordinal: 90
        void FileStream(char const *, enum io::Stream::Mode, unsigned int);

    // RVA: 0x5A | Ordinal: 91
        void FileStream(void);

    // RVA: 0x12B | Ordinal: 300
        void Open(char const *, enum io::Stream::Mode, unsigned int);

    // RVA: 0x1C6 | Ordinal: 455
        void flush(void);

    // RVA: 0x1FD | Ordinal: 510
        void getMode(void);

    // RVA: 0x333 | Ordinal: 820
        void recommenededBufferSize(enum io::Stream::Mode, unsigned int, unsigned __int64);

    // RVA: 0x37E | Ordinal: 895
        void setBufferSize(unsigned int, unsigned __int64);

    // RVA: 0x3B4 | Ordinal: 949
        void stream(void *, unsigned int);

    // RVA: 0x3B7 | Ordinal: 952
        void streamString(char const *&);

    // RVA: 0xB8 | Ordinal: 185
        void _FileStream(void);
};

} // namespace io

// DCS_OPS_RE_EDCORE.DLL_FILESTREAM_HPP
