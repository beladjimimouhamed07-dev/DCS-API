#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIOBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIOBuffer
{
public:

    // RVA: 0x17F | Ordinal: 384
        void FXIOBuffer(unsigned char *, unsigned __int64, unsigned int);

    // RVA: 0x180 | Ordinal: 385
        void FXIOBuffer(void);

    // RVA: 0xAF7 | Ordinal: 2808
        void close(void);

    // RVA: 0xC19 | Ordinal: 3098
        void data(void) const;

    // RVA: 0xE2D | Ordinal: 3630
        void eof(void);

    // RVA: 0xF4B | Ordinal: 3916
        void flush(void);

    // RVA: 0x19AF | Ordinal: 6576
        void isOpen(void) const;

    // RVA: 0x19E4 | Ordinal: 6629
        void isSerial(void) const;

    // RVA: 0x263C | Ordinal: 9789
        void open(unsigned char *, unsigned __int64, unsigned int);

    // RVA: 0x2690 | Ordinal: 9873
        void position(__int64, unsigned int);

    // RVA: 0x2691 | Ordinal: 9874
        void position(void) const;

    // RVA: 0x26E3 | Ordinal: 9956
        void readBlock(void *, __int64);

    // RVA: 0x2E36 | Ordinal: 11831
        void size(void);

    // RVA: 0x2ED7 | Ordinal: 11992
        void truncate(__int64);

    // RVA: 0x2FD9 | Ordinal: 12250
        void writeBlock(void const *, __int64);

    // RVA: 0x434 | Ordinal: 1077
        void _FXIOBuffer(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIOBUFFER_HPP
