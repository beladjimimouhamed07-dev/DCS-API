#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QXmlDefaultHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QXmlDefaultHandler
{
public:

    // RVA: 0x3E | Ordinal: 63
        void QXmlDefaultHandler(void);

    // RVA: 0xAE | Ordinal: 175
        void attributeDecl(class QString const &, class QString const &, class QString const &, class QString const &, class QString const &);

    // RVA: 0xB4 | Ordinal: 181
        void characters(class QString const &);

    // RVA: 0xBB | Ordinal: 188
        void comment(class QString const &);

    // RVA: 0xDB | Ordinal: 220
        void endCDATA(void);

    // RVA: 0xDC | Ordinal: 221
        void endDTD(void);

    // RVA: 0xDD | Ordinal: 222
        void endDocument(void);

    // RVA: 0xDE | Ordinal: 223
        void endElement(class QString const &, class QString const &, class QString const &);

    // RVA: 0xDF | Ordinal: 224
        void endEntity(class QString const &);

    // RVA: 0xE0 | Ordinal: 225
        void endPrefixMapping(class QString const &);

    // RVA: 0xE3 | Ordinal: 228
        void error(class QXmlParseException const &);

    // RVA: 0xE5 | Ordinal: 230
        void errorString(void) const;

    // RVA: 0xE6 | Ordinal: 231
        void externalEntityDecl(class QString const &, class QString const &, class QString const &);

    // RVA: 0xE7 | Ordinal: 232
        void fatalError(class QXmlParseException const &);

    // RVA: 0xF4 | Ordinal: 245
        void ignorableWhitespace(class QString const &);

    // RVA: 0xFE | Ordinal: 255
        void internalEntityDecl(class QString const &, class QString const &);

    // RVA: 0x13B | Ordinal: 316
        void notationDecl(class QString const &, class QString const &, class QString const &);

    // RVA: 0x14D | Ordinal: 334
        void processingInstruction(class QString const &, class QString const &);

    // RVA: 0x15F | Ordinal: 352
        void resolveEntity(class QString const &, class QString const &, class QXmlInputSource *&);

    // RVA: 0x180 | Ordinal: 385
        void setDocumentLocator(class QXmlLocator *);

    // RVA: 0x190 | Ordinal: 401
        void skippedEntity(class QString const &);

    // RVA: 0x194 | Ordinal: 405
        void startCDATA(void);

    // RVA: 0x195 | Ordinal: 406
        void startDTD(class QString const &, class QString const &, class QString const &);

    // RVA: 0x196 | Ordinal: 407
        void startDocument(void);

    // RVA: 0x197 | Ordinal: 408
        void startElement(class QString const &, class QString const &, class QString const &, class QXmlAttributes const &);

    // RVA: 0x198 | Ordinal: 409
        void startEntity(class QString const &);

    // RVA: 0x199 | Ordinal: 410
        void startPrefixMapping(class QString const &, class QString const &);

    // RVA: 0x1B5 | Ordinal: 438
        void unparsedEntityDecl(class QString const &, class QString const &, class QString const &, class QString const &);

    // RVA: 0x1BD | Ordinal: 446
        void warning(class QXmlParseException const &);

    // RVA: 0x65 | Ordinal: 102
        void _QXmlDefaultHandler(void);
};

// DCS_OPS_RE_QT5XML.DLL_QXMLDEFAULTHANDLER_HPP
