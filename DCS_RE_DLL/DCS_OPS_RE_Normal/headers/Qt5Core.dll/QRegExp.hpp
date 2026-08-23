#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRegExp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRegExp
{
public:

    // RVA: 0x1C9 | Ordinal: 458
        void QRegExp(class QRegExp const &);

    // RVA: 0x1CA | Ordinal: 459
        void QRegExp(class QString const &, enum Qt::CaseSensitivity, enum QRegExp::PatternSyntax);

    // RVA: 0x1CB | Ordinal: 460
        void QRegExp(void);

    // RVA: 0x968 | Ordinal: 2409
        void cap(int);

    // RVA: 0x969 | Ordinal: 2410
        void cap(int) const;

    // RVA: 0x96F | Ordinal: 2416
        void captureCount(void) const;

    // RVA: 0x980 | Ordinal: 2433
        void capturedTexts(void);

    // RVA: 0x981 | Ordinal: 2434
        void capturedTexts(void) const;

    // RVA: 0x988 | Ordinal: 2441
        void caseSensitivity(void) const;

    // RVA: 0xD90 | Ordinal: 3473
        void errorString(void);

    // RVA: 0xD91 | Ordinal: 3474
        void errorString(void) const;

    // RVA: 0xD9A | Ordinal: 3483
        void escape(class QString const &);

    // RVA: 0xDC0 | Ordinal: 3521
        void exactMatch(class QString const &) const;

    // RVA: 0xFB1 | Ordinal: 4018
        void indexIn(class QString const &, int, enum QRegExp::CaretMode) const;

    // RVA: 0x10D4 | Ordinal: 4309
        void isEmpty(void) const;

    // RVA: 0x1137 | Ordinal: 4408
        void isMinimal(void) const;

    // RVA: 0x1209 | Ordinal: 4618
        void isValid(void) const;

    // RVA: 0x1268 | Ordinal: 4713
        void lastIndexIn(class QString const &, int, enum QRegExp::CaretMode) const;

    // RVA: 0x1324 | Ordinal: 4901
        void matchedLength(void) const;

    // RVA: 0x14C8 | Ordinal: 5321
        void pattern(void) const;

    // RVA: 0x14CD | Ordinal: 5326
        void patternSyntax(void) const;

    // RVA: 0x14FD | Ordinal: 5374
        void pos(int);

    // RVA: 0x14FE | Ordinal: 5375
        void pos(int) const;

    // RVA: 0x1948 | Ordinal: 6473
        void setCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x1A0D | Ordinal: 6670
        void setMinimal(bool);

    // RVA: 0x1A41 | Ordinal: 6722
        void setPattern(class QString const &);

    // RVA: 0x1A45 | Ordinal: 6726
        void setPatternSyntax(enum QRegExp::PatternSyntax);

    // RVA: 0x1C7E | Ordinal: 7295
        void swap(class QRegExp &);

    // RVA: 0x34D | Ordinal: 846
        void _QRegExp(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QREGEXP_HPP
