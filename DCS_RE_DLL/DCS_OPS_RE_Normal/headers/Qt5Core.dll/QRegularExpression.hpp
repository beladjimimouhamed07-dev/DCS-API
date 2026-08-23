#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRegularExpression
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRegularExpression
{
public:

    // RVA: 0x1CC | Ordinal: 461
        void QRegularExpression(struct QRegularExpressionPrivate &);

    // RVA: 0x1CD | Ordinal: 462
        void QRegularExpression(class QRegularExpression const &);

    // RVA: 0x1CE | Ordinal: 463
        void QRegularExpression(class QString const &, class QFlags<enum QRegularExpression::PatternOption>);

    // RVA: 0x1CF | Ordinal: 464
        void QRegularExpression(void);

    // RVA: 0x83A | Ordinal: 2107
        void anchoredPattern(class QString const &);

    // RVA: 0x83B | Ordinal: 2108
        void anchoredPattern(class QStringView);

    // RVA: 0x970 | Ordinal: 2417
        void captureCount(void) const;

    // RVA: 0xD92 | Ordinal: 3475
        void errorString(void) const;

    // RVA: 0xD9B | Ordinal: 3484
        void escape(class QString const &);

    // RVA: 0xD9C | Ordinal: 3485
        void escape(class QStringView);

    // RVA: 0xF33 | Ordinal: 3892
        void globalMatch(class QString const &, int, enum QRegularExpression::MatchType, class QFlags<enum QRegularExpression::MatchOption>) const;

    // RVA: 0xF34 | Ordinal: 3893
        void globalMatch(class QStringRef const &, int, enum QRegularExpression::MatchType, class QFlags<enum QRegularExpression::MatchOption>) const;

    // RVA: 0xF35 | Ordinal: 3894
        void globalMatch(class QStringView, int, enum QRegularExpression::MatchType, class QFlags<enum QRegularExpression::MatchOption>) const;

    // RVA: 0x120A | Ordinal: 4619
        void isValid(void) const;

    // RVA: 0x131C | Ordinal: 4893
        void match(class QString const &, int, enum QRegularExpression::MatchType, class QFlags<enum QRegularExpression::MatchOption>) const;

    // RVA: 0x131D | Ordinal: 4894
        void match(class QStringRef const &, int, enum QRegularExpression::MatchType, class QFlags<enum QRegularExpression::MatchOption>) const;

    // RVA: 0x131E | Ordinal: 4895
        void match(class QStringView, int, enum QRegularExpression::MatchType, class QFlags<enum QRegularExpression::MatchOption>) const;

    // RVA: 0x1418 | Ordinal: 5145
        void namedCaptureGroups(void) const;

    // RVA: 0x1490 | Ordinal: 5265
        void optimize(void) const;

    // RVA: 0x14C9 | Ordinal: 5322
        void pattern(void) const;

    // RVA: 0x14CB | Ordinal: 5324
        void patternErrorOffset(void) const;

    // RVA: 0x14CC | Ordinal: 5325
        void patternOptions(void) const;

    // RVA: 0x1A42 | Ordinal: 6723
        void setPattern(class QString const &);

    // RVA: 0x1A44 | Ordinal: 6725
        void setPatternOptions(class QFlags<enum QRegularExpression::PatternOption>);

    // RVA: 0x1C7F | Ordinal: 7296
        void swap(class QRegularExpression &);

    // RVA: 0x200A | Ordinal: 8203
        void wildcardToRegularExpression(class QString const &);

    // RVA: 0x200B | Ordinal: 8204
        void wildcardToRegularExpression(class QStringView);

    // RVA: 0x34E | Ordinal: 847
        void _QRegularExpression(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QREGULAREXPRESSION_HPP
