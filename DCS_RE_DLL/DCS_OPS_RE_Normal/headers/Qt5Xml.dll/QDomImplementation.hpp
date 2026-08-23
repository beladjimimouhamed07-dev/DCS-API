#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QDomImplementation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDomImplementation
{
public:

    // RVA: 0x20 | Ordinal: 33
        void QDomImplementation(class QDomImplementationPrivate *);

    // RVA: 0x21 | Ordinal: 34
        void QDomImplementation(class QDomImplementation const &);

    // RVA: 0x22 | Ordinal: 35
        void QDomImplementation(void);

    // RVA: 0xC5 | Ordinal: 198
        void createDocument(class QString const &, class QString const &, class QDomDocumentType const &);

    // RVA: 0xC7 | Ordinal: 200
        void createDocumentType(class QString const &, class QString const &, class QString const &);

    // RVA: 0xF1 | Ordinal: 242
        void hasFeature(class QString const &, class QString const &) const;

    // RVA: 0x100 | Ordinal: 257
        void invalidDataPolicy(void);

    // RVA: 0x10E | Ordinal: 271
        void isNull(void);

    // RVA: 0x184 | Ordinal: 389
        void setInvalidDataPolicy(enum QDomImplementation::InvalidDataPolicy);

    // RVA: 0x5A | Ordinal: 91
        void _QDomImplementation(void);
};

// DCS_OPS_RE_QT5XML.DLL_QDOMIMPLEMENTATION_HPP
