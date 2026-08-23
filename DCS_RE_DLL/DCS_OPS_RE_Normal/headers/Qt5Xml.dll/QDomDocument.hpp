#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QDomDocument
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDomDocument
{
public:

    // RVA: 0xC | Ordinal: 13
        void QDomDocument(class QDomDocumentPrivate *);

    // RVA: 0xD | Ordinal: 14
        void QDomDocument(class QDomDocument const &);

    // RVA: 0xE | Ordinal: 15
        void QDomDocument(class QDomDocumentType const &);

    // RVA: 0xF | Ordinal: 16
        void QDomDocument(class QString const &);

    // RVA: 0x10 | Ordinal: 17
        void QDomDocument(void);

    // RVA: 0xC1 | Ordinal: 194
        void createAttribute(class QString const &);

    // RVA: 0xC2 | Ordinal: 195
        void createAttributeNS(class QString const &, class QString const &);

    // RVA: 0xC3 | Ordinal: 196
        void createCDATASection(class QString const &);

    // RVA: 0xC4 | Ordinal: 197
        void createComment(class QString const &);

    // RVA: 0xC6 | Ordinal: 199
        void createDocumentFragment(void);

    // RVA: 0xC8 | Ordinal: 201
        void createElement(class QString const &);

    // RVA: 0xC9 | Ordinal: 202
        void createElementNS(class QString const &, class QString const &);

    // RVA: 0xCA | Ordinal: 203
        void createEntityReference(class QString const &);

    // RVA: 0xCB | Ordinal: 204
        void createProcessingInstruction(class QString const &, class QString const &);

    // RVA: 0xCC | Ordinal: 205
        void createTextNode(class QString const &);

    // RVA: 0xD4 | Ordinal: 213
        void doctype(void) const;

    // RVA: 0xD5 | Ordinal: 214
        void documentElement(void) const;

    // RVA: 0xD6 | Ordinal: 215
        void elementById(class QString const &);

    // RVA: 0xD7 | Ordinal: 216
        void elementsByTagName(class QString const &) const;

    // RVA: 0xD9 | Ordinal: 218
        void elementsByTagNameNS(class QString const &, class QString const &);

    // RVA: 0xF5 | Ordinal: 246
        void implementation(void) const;

    // RVA: 0xF6 | Ordinal: 247
        void importNode(class QDomNode const &, bool);

    // RVA: 0x12F | Ordinal: 304
        void nodeType(void) const;

    // RVA: 0x170 | Ordinal: 369
        void setContent(class QByteArray const &, class QString *, int *, int *);

    // RVA: 0x171 | Ordinal: 370
        void setContent(class QByteArray const &, bool, class QString *, int *, int *);

    // RVA: 0x172 | Ordinal: 371
        void setContent(class QString const &, class QString *, int *, int *);

    // RVA: 0x173 | Ordinal: 372
        void setContent(class QString const &, bool, class QString *, int *, int *);

    // RVA: 0x174 | Ordinal: 373
        void setContent(class QIODevice *, class QString *, int *, int *);

    // RVA: 0x175 | Ordinal: 374
        void setContent(class QIODevice *, bool, class QString *, int *, int *);

    // RVA: 0x176 | Ordinal: 375
        void setContent(class QXmlInputSource *, class QXmlReader *, class QString *, int *, int *);

    // RVA: 0x177 | Ordinal: 376
        void setContent(class QXmlInputSource *, bool, class QString *, int *, int *);

    // RVA: 0x178 | Ordinal: 377
        void setContent(class QXmlStreamReader *, bool, class QString *, int *, int *);

    // RVA: 0x1A4 | Ordinal: 421
        void toByteArray(int) const;

    // RVA: 0x1B0 | Ordinal: 433
        void toString(int) const;

    // RVA: 0x54 | Ordinal: 85
        void _QDomDocument(void);
};

// DCS_OPS_RE_QT5XML.DLL_QDOMDOCUMENT_HPP
