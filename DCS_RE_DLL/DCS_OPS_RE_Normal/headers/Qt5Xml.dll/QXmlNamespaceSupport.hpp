#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QXmlNamespaceSupport
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QXmlNamespaceSupport
{
public:

    // RVA: 0x4A | Ordinal: 75
        void QXmlNamespaceSupport(void);

    // RVA: 0x145 | Ordinal: 326
        void popContext(void);

    // RVA: 0x147 | Ordinal: 328
        void prefix(class QString const &) const;

    // RVA: 0x148 | Ordinal: 329
        void prefixes(class QString const &) const;

    // RVA: 0x149 | Ordinal: 330
        void prefixes(void) const;

    // RVA: 0x14C | Ordinal: 333
        void processName(class QString const &, bool, class QString &, class QString &) const;

    // RVA: 0x153 | Ordinal: 340
        void pushContext(void);

    // RVA: 0x15E | Ordinal: 351
        void reset(void);

    // RVA: 0x18A | Ordinal: 395
        void setPrefix(class QString const &, class QString const &);

    // RVA: 0x192 | Ordinal: 403
        void splitName(class QString const &, class QString &, class QString &) const;

    // RVA: 0x1B7 | Ordinal: 440
        void uri(class QString const &) const;

    // RVA: 0x6B | Ordinal: 108
        void _QXmlNamespaceSupport(void);
};

// DCS_OPS_RE_QT5XML.DLL_QXMLNAMESPACESUPPORT_HPP
