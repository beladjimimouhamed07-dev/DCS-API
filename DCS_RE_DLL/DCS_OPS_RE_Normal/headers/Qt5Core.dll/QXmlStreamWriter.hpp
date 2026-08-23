#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QXmlStreamWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QXmlStreamWriter
{
public:

    // RVA: 0x2B7 | Ordinal: 696
        void QXmlStreamWriter(class QByteArray *);

    // RVA: 0x2B8 | Ordinal: 697
        void QXmlStreamWriter(class QIODevice *);

    // RVA: 0x2B9 | Ordinal: 698
        void QXmlStreamWriter(class QString *);

    // RVA: 0x2BA | Ordinal: 699
        void QXmlStreamWriter(void);

    // RVA: 0x8C8 | Ordinal: 2249
        void autoFormatting(void) const;

    // RVA: 0x8C9 | Ordinal: 2250
        void autoFormattingIndent(void) const;

    // RVA: 0xA12 | Ordinal: 2579
        void codec(void) const;

    // RVA: 0xBF2 | Ordinal: 3059
        void d_func(void);

    // RVA: 0xBF3 | Ordinal: 3060
        void d_func(void) const;

    // RVA: 0xC9B | Ordinal: 3228
        void device(void) const;

    // RVA: 0xF54 | Ordinal: 3925
        void hasError(void) const;

    // RVA: 0x1936 | Ordinal: 6455
        void setAutoFormatting(bool);

    // RVA: 0x1937 | Ordinal: 6456
        void setAutoFormattingIndent(int);

    // RVA: 0x1950 | Ordinal: 6481
        void setCodec(class QTextCodec *);

    // RVA: 0x1951 | Ordinal: 6482
        void setCodec(char const *);

    // RVA: 0x1980 | Ordinal: 6529
        void setDevice(class QIODevice *);

    // RVA: 0x201F | Ordinal: 8224
        void writeAttribute(class QString const &, class QString const &, class QString const &);

    // RVA: 0x2020 | Ordinal: 8225
        void writeAttribute(class QString const &, class QString const &);

    // RVA: 0x2021 | Ordinal: 8226
        void writeAttribute(class QXmlStreamAttribute const &);

    // RVA: 0x2022 | Ordinal: 8227
        void writeAttributes(class QXmlStreamAttributes const &);

    // RVA: 0x2025 | Ordinal: 8230
        void writeCDATA(class QString const &);

    // RVA: 0x2027 | Ordinal: 8232
        void writeCharacters(class QString const &);

    // RVA: 0x2028 | Ordinal: 8233
        void writeComment(class QString const &);

    // RVA: 0x2029 | Ordinal: 8234
        void writeCurrentToken(class QXmlStreamReader const &);

    // RVA: 0x202A | Ordinal: 8235
        void writeDTD(class QString const &);

    // RVA: 0x202F | Ordinal: 8240
        void writeDefaultNamespace(class QString const &);

    // RVA: 0x2030 | Ordinal: 8241
        void writeEmptyElement(class QString const &, class QString const &);

    // RVA: 0x2031 | Ordinal: 8242
        void writeEmptyElement(class QString const &);

    // RVA: 0x2032 | Ordinal: 8243
        void writeEndDocument(void);

    // RVA: 0x2033 | Ordinal: 8244
        void writeEndElement(void);

    // RVA: 0x2034 | Ordinal: 8245
        void writeEntityReference(class QString const &);

    // RVA: 0x2036 | Ordinal: 8247
        void writeNamespace(class QString const &, class QString const &);

    // RVA: 0x2038 | Ordinal: 8249
        void writeProcessingInstruction(class QString const &, class QString const &);

    // RVA: 0x203A | Ordinal: 8251
        void writeStartDocument(class QString const &);

    // RVA: 0x203B | Ordinal: 8252
        void writeStartDocument(class QString const &, bool);

    // RVA: 0x203C | Ordinal: 8253
        void writeStartDocument(void);

    // RVA: 0x203D | Ordinal: 8254
        void writeStartElement(class QString const &, class QString const &);

    // RVA: 0x203E | Ordinal: 8255
        void writeStartElement(class QString const &);

    // RVA: 0x203F | Ordinal: 8256
        void writeTextElement(class QString const &, class QString const &, class QString const &);

    // RVA: 0x2040 | Ordinal: 8257
        void writeTextElement(class QString const &, class QString const &);

    // RVA: 0x38D | Ordinal: 910
        void _QXmlStreamWriter(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QXMLSTREAMWRITER_HPP
