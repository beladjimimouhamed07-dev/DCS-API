#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIO
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIO
{
public:

    // RVA: 0x17D | Ordinal: 382
        void FXIO(unsigned int);

    // RVA: 0x17E | Ordinal: 383
        void FXIO(void);

    // RVA: 0xAF6 | Ordinal: 2807
        void close(void);

    // RVA: 0xE2C | Ordinal: 3629
        void eof(void);

    // RVA: 0xF4A | Ordinal: 3915
        void flush(void);

    // RVA: 0x19AE | Ordinal: 6575
        void isOpen(void) const;

    // RVA: 0x19D7 | Ordinal: 6616
        void isReadable(void) const;

    // RVA: 0x19E3 | Ordinal: 6628
        void isSerial(void) const;

    // RVA: 0x1A0A | Ordinal: 6667
        void isWritable(void) const;

    // RVA: 0x1E99 | Ordinal: 7834
        void mode(void) const;

    // RVA: 0x268E | Ordinal: 9871
        void position(__int64, unsigned int);

    // RVA: 0x268F | Ordinal: 9872
        void position(void) const;

    // RVA: 0x26E2 | Ordinal: 9955
        void readBlock(void *, __int64);

    // RVA: 0x26EC | Ordinal: 9965
        void readChar(char &);

    // RVA: 0x2E35 | Ordinal: 11830
        void size(void);

    // RVA: 0x2ED6 | Ordinal: 11991
        void truncate(__int64);

    // RVA: 0x2FD8 | Ordinal: 12249
        void writeBlock(void const *, __int64);

    // RVA: 0x2FE2 | Ordinal: 12259
        void writeChar(char);

    // RVA: 0x433 | Ordinal: 1076
        void _FXIO(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIO_HPP
