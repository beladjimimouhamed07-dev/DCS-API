#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTextDecoder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextDecoder
{
public:

    // RVA: 0x22A | Ordinal: 555
        void QTextDecoder(class QTextCodec const *);

    // RVA: 0x22B | Ordinal: 556
        void QTextDecoder(class QTextCodec const *, class QFlags<enum QTextCodec::ConversionFlag>);

    // RVA: 0xF58 | Ordinal: 3929
        void hasFailure(void) const;

    // RVA: 0x1423 | Ordinal: 5156
        void needsMoreData(void) const;

    // RVA: 0x1E34 | Ordinal: 7733
        void toUnicode(class QByteArray const &);

    // RVA: 0x1E35 | Ordinal: 7734
        void toUnicode(char const *, int);

    // RVA: 0x1E36 | Ordinal: 7735
        void toUnicode(class QString *, char const *, int);

    // RVA: 0x36C | Ordinal: 877
        void _QTextDecoder(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEXTDECODER_HPP
