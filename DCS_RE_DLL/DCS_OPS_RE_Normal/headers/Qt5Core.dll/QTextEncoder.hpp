#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTextEncoder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextEncoder
{
public:

    // RVA: 0x22C | Ordinal: 557
        void QTextEncoder(class QTextCodec const *);

    // RVA: 0x22D | Ordinal: 558
        void QTextEncoder(class QTextCodec const *, class QFlags<enum QTextCodec::ConversionFlag>);

    // RVA: 0xEF0 | Ordinal: 3825
        void fromUnicode(class QString const &);

    // RVA: 0xEF1 | Ordinal: 3826
        void fromUnicode(class QChar const *, int);

    // RVA: 0xEF2 | Ordinal: 3827
        void fromUnicode(class QStringView);

    // RVA: 0xF59 | Ordinal: 3930
        void hasFailure(void) const;

    // RVA: 0x36D | Ordinal: 878
        void _QTextEncoder(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEXTENCODER_HPP
