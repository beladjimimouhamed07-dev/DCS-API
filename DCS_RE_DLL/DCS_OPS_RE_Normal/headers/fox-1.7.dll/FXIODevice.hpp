#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXIODevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXIODevice
{
public:

    // RVA: 0x181 | Ordinal: 386
        void FXIODevice(void *, unsigned int);

    // RVA: 0x182 | Ordinal: 387
        void FXIODevice(void);

    // RVA: 0xA4F | Ordinal: 2640
        void attach(void *, unsigned int);

    // RVA: 0xAF8 | Ordinal: 2809
        void close(void);

    // RVA: 0xCA6 | Ordinal: 3239
        void detach(void);

    // RVA: 0xE2E | Ordinal: 3631
        void eof(void);

    // RVA: 0xF4C | Ordinal: 3917
        void flush(void);

    // RVA: 0x1777 | Ordinal: 6008
        void handle(void) const;

    // RVA: 0x19B0 | Ordinal: 6577
        void isOpen(void) const;

    // RVA: 0x19E5 | Ordinal: 6630
        void isSerial(void) const;

    // RVA: 0x263D | Ordinal: 9790
        void open(void *, unsigned int);

    // RVA: 0x2692 | Ordinal: 9875
        void position(__int64, unsigned int);

    // RVA: 0x2693 | Ordinal: 9876
        void position(void) const;

    // RVA: 0x26E4 | Ordinal: 9957
        void readBlock(void *, __int64);

    // RVA: 0x2E37 | Ordinal: 11832
        void size(void);

    // RVA: 0x2ED8 | Ordinal: 11993
        void truncate(__int64);

    // RVA: 0x2FDA | Ordinal: 12251
        void writeBlock(void const *, __int64);

    // RVA: 0x435 | Ordinal: 1078
        void _FXIODevice(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXIODEVICE_HPP
