#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QDomElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDomElement
{
public:

    // RVA: 0x17 | Ordinal: 24
        void QDomElement(class QDomElementPrivate *);

    // RVA: 0x18 | Ordinal: 25
        void QDomElement(class QDomElement const &);

    // RVA: 0x19 | Ordinal: 26
        void QDomElement(void);

    // RVA: 0xAD | Ordinal: 174
        void attribute(class QString const &, class QString const &) const;

    // RVA: 0xAF | Ordinal: 176
        void attributeNS(class QString, class QString const &, class QString const &) const;

    // RVA: 0xB0 | Ordinal: 177
        void attributeNode(class QString const &);

    // RVA: 0xB1 | Ordinal: 178
        void attributeNodeNS(class QString const &, class QString const &);

    // RVA: 0xB2 | Ordinal: 179
        void attributes(void) const;

    // RVA: 0xD8 | Ordinal: 217
        void elementsByTagName(class QString const &) const;

    // RVA: 0xDA | Ordinal: 219
        void elementsByTagNameNS(class QString const &, class QString const &) const;

    // RVA: 0xED | Ordinal: 238
        void hasAttribute(class QString const &) const;

    // RVA: 0xEE | Ordinal: 239
        void hasAttributeNS(class QString const &, class QString const &) const;

    // RVA: 0x132 | Ordinal: 307
        void nodeType(void) const;

    // RVA: 0x155 | Ordinal: 342
        void removeAttribute(class QString const &);

    // RVA: 0x156 | Ordinal: 343
        void removeAttributeNS(class QString const &, class QString const &);

    // RVA: 0x157 | Ordinal: 344
        void removeAttributeNode(class QDomAttr const &);

    // RVA: 0x161 | Ordinal: 354
        void setAttribute(class QString const &, class QString const &);

    // RVA: 0x162 | Ordinal: 355
        void setAttribute(class QString const &, int);

    // RVA: 0x163 | Ordinal: 356
        void setAttribute(class QString const &, unsigned int);

    // RVA: 0x164 | Ordinal: 357
        void setAttribute(class QString const &, float);

    // RVA: 0x165 | Ordinal: 358
        void setAttribute(class QString const &, double);

    // RVA: 0x166 | Ordinal: 359
        void setAttribute(class QString const &, __int64);

    // RVA: 0x167 | Ordinal: 360
        void setAttribute(class QString const &, unsigned __int64);

    // RVA: 0x168 | Ordinal: 361
        void setAttributeNS(class QString, class QString const &, class QString const &);

    // RVA: 0x169 | Ordinal: 362
        void setAttributeNS(class QString, class QString const &, int);

    // RVA: 0x16A | Ordinal: 363
        void setAttributeNS(class QString, class QString const &, unsigned int);

    // RVA: 0x16B | Ordinal: 364
        void setAttributeNS(class QString, class QString const &, double);

    // RVA: 0x16C | Ordinal: 365
        void setAttributeNS(class QString, class QString const &, __int64);

    // RVA: 0x16D | Ordinal: 366
        void setAttributeNS(class QString, class QString const &, unsigned __int64);

    // RVA: 0x16E | Ordinal: 367
        void setAttributeNode(class QDomAttr const &);

    // RVA: 0x16F | Ordinal: 368
        void setAttributeNodeNS(class QDomAttr const &);

    // RVA: 0x18C | Ordinal: 397
        void setTagName(class QString const &);

    // RVA: 0x1A0 | Ordinal: 417
        void tagName(void) const;

    // RVA: 0x1A2 | Ordinal: 419
        void text(void) const;

    // RVA: 0x57 | Ordinal: 88
        void _QDomElement(void);
};

// DCS_OPS_RE_QT5XML.DLL_QDOMELEMENT_HPP
