#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QProcessEnvironment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QProcessEnvironment
{
public:

    // RVA: 0x1B6 | Ordinal: 439
        void QProcessEnvironment(class QProcessEnvironment const &);

    // RVA: 0x1B7 | Ordinal: 440
        void QProcessEnvironment(void);

    // RVA: 0x9E5 | Ordinal: 2534
        void clear(void);

    // RVA: 0xAC9 | Ordinal: 2762
        void contains(class QString const &) const;

    // RVA: 0x101F | Ordinal: 4128
        void insert(class QProcessEnvironment const &);

    // RVA: 0x1020 | Ordinal: 4129
        void insert(class QString const &, class QString const &);

    // RVA: 0x10D1 | Ordinal: 4306
        void isEmpty(void) const;

    // RVA: 0x1250 | Ordinal: 4689
        void keys(void) const;

    // RVA: 0x17B7 | Ordinal: 6072
        void remove(class QString const &);

    // RVA: 0x1C7D | Ordinal: 7294
        void swap(class QProcessEnvironment &);

    // RVA: 0x1C99 | Ordinal: 7322
        void systemEnvironment(void);

    // RVA: 0x1E04 | Ordinal: 7685
        void toStringList(void) const;

    // RVA: 0x1FBC | Ordinal: 8125
        void value(class QString const &, class QString const &) const;

    // RVA: 0x348 | Ordinal: 841
        void _QProcessEnvironment(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QPROCESSENVIRONMENT_HPP
