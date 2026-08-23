#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextDocumentWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextDocumentWriter
{
public:

    // RVA: 0x34A | Ordinal: 843
        void QTextDocumentWriter(class QString const &, class QByteArray const &);

    // RVA: 0x34B | Ordinal: 844
        void QTextDocumentWriter(class QIODevice *, class QByteArray const &);

    // RVA: 0x34C | Ordinal: 845
        void QTextDocumentWriter(void);

    // RVA: 0xBEF | Ordinal: 3056
        void codec(void) const;

    // RVA: 0xE41 | Ordinal: 3650
        void device(void) const;

    // RVA: 0x102F | Ordinal: 4144
        void fileName(void) const;

    // RVA: 0x10FA | Ordinal: 4347
        void format(void) const;

    // RVA: 0x58B5 | Ordinal: 22710
        void setCodec(class QTextCodec *);

    // RVA: 0x5940 | Ordinal: 22849
        void setDevice(class QIODevice *);

    // RVA: 0x5970 | Ordinal: 22897
        void setFileName(class QString const &);

    // RVA: 0x59BD | Ordinal: 22974
        void setFormat(class QByteArray const &);

    // RVA: 0x5E51 | Ordinal: 24146
        void supportedDocumentFormats(void);

    // RVA: 0x619D | Ordinal: 24990
        void write(class QTextDocumentFragment const &);

    // RVA: 0x619E | Ordinal: 24991
        void write(class QTextDocument const *);

    // RVA: 0x534 | Ordinal: 1333
        void _QTextDocumentWriter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTDOCUMENTWRITER_HPP
