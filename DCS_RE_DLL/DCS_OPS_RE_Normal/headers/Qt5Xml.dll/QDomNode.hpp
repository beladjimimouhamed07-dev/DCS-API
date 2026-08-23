#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QDomNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDomNode
{
public:

    // RVA: 0x26 | Ordinal: 39
        void QDomNode(class QDomNodePrivate *);

    // RVA: 0x27 | Ordinal: 40
        void QDomNode(class QDomNode const &);

    // RVA: 0x28 | Ordinal: 41
        void QDomNode(void);

    // RVA: 0xAA | Ordinal: 171
        void appendChild(class QDomNode const &);

    // RVA: 0xB3 | Ordinal: 180
        void attributes(void) const;

    // RVA: 0xB5 | Ordinal: 182
        void childNodes(void) const;

    // RVA: 0xB6 | Ordinal: 183
        void clear(void);

    // RVA: 0xB8 | Ordinal: 185
        void cloneNode(bool) const;

    // RVA: 0xB9 | Ordinal: 186
        void columnNumber(void) const;

    // RVA: 0xEA | Ordinal: 235
        void firstChild(void) const;

    // RVA: 0xEB | Ordinal: 236
        void firstChildElement(class QString const &) const;

    // RVA: 0xEF | Ordinal: 240
        void hasAttributes(void) const;

    // RVA: 0xF0 | Ordinal: 241
        void hasChildNodes(void) const;

    // RVA: 0xFB | Ordinal: 252
        void insertAfter(class QDomNode const &, class QDomNode const &);

    // RVA: 0xFC | Ordinal: 253
        void insertBefore(class QDomNode const &, class QDomNode const &);

    // RVA: 0x101 | Ordinal: 258
        void isAttr(void) const;

    // RVA: 0x102 | Ordinal: 259
        void isCDATASection(void) const;

    // RVA: 0x103 | Ordinal: 260
        void isCharacterData(void) const;

    // RVA: 0x104 | Ordinal: 261
        void isComment(void) const;

    // RVA: 0x105 | Ordinal: 262
        void isDocument(void) const;

    // RVA: 0x106 | Ordinal: 263
        void isDocumentFragment(void) const;

    // RVA: 0x107 | Ordinal: 264
        void isDocumentType(void) const;

    // RVA: 0x108 | Ordinal: 265
        void isElement(void) const;

    // RVA: 0x10B | Ordinal: 268
        void isEntity(void) const;

    // RVA: 0x10C | Ordinal: 269
        void isEntityReference(void) const;

    // RVA: 0x10D | Ordinal: 270
        void isNotation(void) const;

    // RVA: 0x10F | Ordinal: 272
        void isNull(void) const;

    // RVA: 0x110 | Ordinal: 273
        void isProcessingInstruction(void) const;

    // RVA: 0x111 | Ordinal: 274
        void isSupported(class QString const &, class QString const &) const;

    // RVA: 0x112 | Ordinal: 275
        void isText(void) const;

    // RVA: 0x115 | Ordinal: 278
        void lastChild(void) const;

    // RVA: 0x116 | Ordinal: 279
        void lastChildElement(class QString const &) const;

    // RVA: 0x11C | Ordinal: 285
        void lineNumber(void) const;

    // RVA: 0x11E | Ordinal: 287
        void localName(void) const;

    // RVA: 0x124 | Ordinal: 293
        void namedItem(class QString const &) const;

    // RVA: 0x126 | Ordinal: 295
        void namespaceURI(void) const;

    // RVA: 0x128 | Ordinal: 297
        void nextSibling(void) const;

    // RVA: 0x129 | Ordinal: 298
        void nextSiblingElement(class QString const &) const;

    // RVA: 0x12A | Ordinal: 299
        void nodeName(void) const;

    // RVA: 0x135 | Ordinal: 310
        void nodeType(void) const;

    // RVA: 0x139 | Ordinal: 314
        void nodeValue(void) const;

    // RVA: 0x13A | Ordinal: 315
        void normalize(void);

    // RVA: 0x13E | Ordinal: 319
        void ownerDocument(void) const;

    // RVA: 0x140 | Ordinal: 321
        void parentNode(void) const;

    // RVA: 0x146 | Ordinal: 327
        void prefix(void) const;

    // RVA: 0x14A | Ordinal: 331
        void previousSibling(void) const;

    // RVA: 0x14B | Ordinal: 332
        void previousSiblingElement(class QString const &) const;

    // RVA: 0x158 | Ordinal: 345
        void removeChild(class QDomNode const &);

    // RVA: 0x15B | Ordinal: 348
        void replaceChild(class QDomNode const &, class QDomNode const &);

    // RVA: 0x160 | Ordinal: 353
        void save(class QTextStream &, int, enum QDomNode::EncodingPolicy) const;

    // RVA: 0x188 | Ordinal: 393
        void setNodeValue(class QString const &);

    // RVA: 0x189 | Ordinal: 394
        void setPrefix(class QString const &);

    // RVA: 0x1A3 | Ordinal: 420
        void toAttr(void) const;

    // RVA: 0x1A5 | Ordinal: 422
        void toCDATASection(void) const;

    // RVA: 0x1A6 | Ordinal: 423
        void toCharacterData(void) const;

    // RVA: 0x1A7 | Ordinal: 424
        void toComment(void) const;

    // RVA: 0x1A8 | Ordinal: 425
        void toDocument(void) const;

    // RVA: 0x1A9 | Ordinal: 426
        void toDocumentFragment(void) const;

    // RVA: 0x1AA | Ordinal: 427
        void toDocumentType(void) const;

    // RVA: 0x1AB | Ordinal: 428
        void toElement(void) const;

    // RVA: 0x1AC | Ordinal: 429
        void toEntity(void) const;

    // RVA: 0x1AD | Ordinal: 430
        void toEntityReference(void) const;

    // RVA: 0x1AE | Ordinal: 431
        void toNotation(void) const;

    // RVA: 0x1AF | Ordinal: 432
        void toProcessingInstruction(void) const;

    // RVA: 0x1B1 | Ordinal: 434
        void toText(void) const;

    // RVA: 0x5C | Ordinal: 93
        void _QDomNode(void);
};

// DCS_OPS_RE_QT5XML.DLL_QDOMNODE_HPP
