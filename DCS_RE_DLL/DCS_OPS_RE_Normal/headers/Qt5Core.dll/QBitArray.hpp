#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QBitArray
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBitArray
{
public:

    // RVA: 0x58 | Ordinal: 89
        void QBitArray(class QBitArray &&);

    // RVA: 0x59 | Ordinal: 90
        void QBitArray(class QBitArray const &);

    // RVA: 0x5A | Ordinal: 91
        void QBitArray(int, bool);

    // RVA: 0x5B | Ordinal: 92
        void QBitArray(void);

    // RVA: 0x8B0 | Ordinal: 2225
        void at(int) const;

    // RVA: 0x917 | Ordinal: 2328
        void bits(void) const;

    // RVA: 0x9DD | Ordinal: 2526
        void clear(void);

    // RVA: 0x9F3 | Ordinal: 2548
        void clearBit(int);

    // RVA: 0xAFC | Ordinal: 2813
        void count(void) const;

    // RVA: 0xAFD | Ordinal: 2814
        void count(bool) const;

    // RVA: 0xC10 | Ordinal: 3089
        void data_ptr(void);

    // RVA: 0xC7F | Ordinal: 3200
        void detach(void);

    // RVA: 0xE19 | Ordinal: 3610
        void fill(bool, int, int);

    // RVA: 0xE1A | Ordinal: 3611
        void fill(bool, int);

    // RVA: 0xE9F | Ordinal: 3744
        void fromBits(char const *, __int64);

    // RVA: 0x10AF | Ordinal: 4272
        void isDetached(void) const;

    // RVA: 0x10C6 | Ordinal: 4295
        void isEmpty(void) const;

    // RVA: 0x1140 | Ordinal: 4417
        void isNull(void) const;

    // RVA: 0x680 | Ordinal: 1665
        void operator_(void) const;

    // RVA: 0x1869 | Ordinal: 6250
        void resize(int);

    // RVA: 0x193B | Ordinal: 6460
        void setBit(int);

    // RVA: 0x193C | Ordinal: 6461
        void setBit(int, bool);

    // RVA: 0x1B31 | Ordinal: 6962
        void size(void) const;

    // RVA: 0x1C67 | Ordinal: 7272
        void swap(class QBitArray &);

    // RVA: 0x1CC9 | Ordinal: 7370
        void testBit(int) const;

    // RVA: 0x1E5F | Ordinal: 7776
        void toggleBit(int);

    // RVA: 0x1F1E | Ordinal: 7967
        void truncate(int);

    // RVA: 0x2EA | Ordinal: 747
        void _QBitArray(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QBITARRAY_HPP
