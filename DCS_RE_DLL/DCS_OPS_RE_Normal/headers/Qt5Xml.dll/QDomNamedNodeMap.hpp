#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QDomNamedNodeMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDomNamedNodeMap
{
public:

    // RVA: 0x23 | Ordinal: 36
        void QDomNamedNodeMap(class QDomNamedNodeMapPrivate *);

    // RVA: 0x24 | Ordinal: 37
        void QDomNamedNodeMap(class QDomNamedNodeMap const &);

    // RVA: 0x25 | Ordinal: 38
        void QDomNamedNodeMap(void);

    // RVA: 0xBC | Ordinal: 189
        void contains(class QString const &) const;

    // RVA: 0xBE | Ordinal: 191
        void count(void) const;

    // RVA: 0x109 | Ordinal: 266
        void isEmpty(void) const;

    // RVA: 0x113 | Ordinal: 276
        void item(int) const;

    // RVA: 0x118 | Ordinal: 281
        void length(void) const;

    // RVA: 0x123 | Ordinal: 292
        void namedItem(class QString const &) const;

    // RVA: 0x125 | Ordinal: 294
        void namedItemNS(class QString const &, class QString const &) const;

    // RVA: 0x159 | Ordinal: 346
        void removeNamedItem(class QString const &);

    // RVA: 0x15A | Ordinal: 347
        void removeNamedItemNS(class QString const &, class QString const &);

    // RVA: 0x186 | Ordinal: 391
        void setNamedItem(class QDomNode const &);

    // RVA: 0x187 | Ordinal: 392
        void setNamedItemNS(class QDomNode const &);

    // RVA: 0x18E | Ordinal: 399
        void size(void) const;

    // RVA: 0x5B | Ordinal: 92
        void _QDomNamedNodeMap(void);
};

// DCS_OPS_RE_QT5XML.DLL_QDOMNAMEDNODEMAP_HPP
