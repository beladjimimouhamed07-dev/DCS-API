#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QListData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QListData
{
public:

    // RVA: 0x86A | Ordinal: 2155
        void append(struct QListData const &);

    // RVA: 0x86B | Ordinal: 2156
        void append(int);

    // RVA: 0x86C | Ordinal: 2157
        void append(void);

    // RVA: 0x8B4 | Ordinal: 2229
        void at(int) const;

    // RVA: 0x8FC | Ordinal: 2301
        void begin(void) const;

    // RVA: 0xC87 | Ordinal: 3208
        void detach(int);

    // RVA: 0xC90 | Ordinal: 3217
        void detach_grow(int *, int);

    // RVA: 0xCBF | Ordinal: 3264
        void dispose(void);

    // RVA: 0xCC0 | Ordinal: 3265
        void dispose(struct QListData::Data *);

    // RVA: 0xD22 | Ordinal: 3363
        void end(void) const;

    // RVA: 0xD7E | Ordinal: 3455
        void erase(void **);

    // RVA: 0x101E | Ordinal: 4127
        void insert(int);

    // RVA: 0x10CF | Ordinal: 4304
        void isEmpty(void) const;

    // RVA: 0x13CC | Ordinal: 5069
        void move(int, int);

    // RVA: 0x1523 | Ordinal: 5412
        void prepend(void);

    // RVA: 0x1750 | Ordinal: 5969
        void realloc(int);

    // RVA: 0x1759 | Ordinal: 5978
        void realloc_grow(int);

    // RVA: 0x17B4 | Ordinal: 6069
        void remove(int);

    // RVA: 0x17B5 | Ordinal: 6070
        void remove(int, int);

    // RVA: 0x1B3D | Ordinal: 6974
        void size(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QLISTDATA_HPP
