#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QStringMatcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStringMatcher
{
public:

    // RVA: 0x211 | Ordinal: 530
        void QStringMatcher(class QStringMatcher const &);

    // RVA: 0x212 | Ordinal: 531
        void QStringMatcher(class QString const &, enum Qt::CaseSensitivity);

    // RVA: 0x213 | Ordinal: 532
        void QStringMatcher(class QChar const *, int, enum Qt::CaseSensitivity);

    // RVA: 0x214 | Ordinal: 533
        void QStringMatcher(class QStringView, enum Qt::CaseSensitivity);

    // RVA: 0x215 | Ordinal: 534
        void QStringMatcher(void);

    // RVA: 0x989 | Ordinal: 2442
        void caseSensitivity(void) const;

    // RVA: 0xFB2 | Ordinal: 4019
        void indexIn(class QString const &, int) const;

    // RVA: 0xFB3 | Ordinal: 4020
        void indexIn(class QChar const *, int, int) const;

    // RVA: 0xFB4 | Ordinal: 4021
        void indexIn(class QStringView, __int64) const;

    // RVA: 0x14CA | Ordinal: 5323
        void pattern(void) const;

    // RVA: 0x1949 | Ordinal: 6474
        void setCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x1A43 | Ordinal: 6724
        void setPattern(class QString const &);

    // RVA: 0x364 | Ordinal: 869
        void _QStringMatcher(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTRINGMATCHER_HPP
