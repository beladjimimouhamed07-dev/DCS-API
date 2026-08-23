#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QDomCharacterData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDomCharacterData
{
public:

    // RVA: 0x6 | Ordinal: 7
        void QDomCharacterData(class QDomCharacterDataPrivate *);

    // RVA: 0x7 | Ordinal: 8
        void QDomCharacterData(class QDomCharacterData const &);

    // RVA: 0x8 | Ordinal: 9
        void QDomCharacterData(void);

    // RVA: 0xAB | Ordinal: 172
        void appendData(class QString const &);

    // RVA: 0xCF | Ordinal: 208
        void data(void) const;

    // RVA: 0xD3 | Ordinal: 212
        void deleteData(unsigned long, unsigned long);

    // RVA: 0xFD | Ordinal: 254
        void insertData(unsigned long, class QString const &);

    // RVA: 0x117 | Ordinal: 280
        void length(void) const;

    // RVA: 0x12D | Ordinal: 302
        void nodeType(void) const;

    // RVA: 0x15C | Ordinal: 349
        void replaceData(unsigned long, unsigned long, class QString const &);

    // RVA: 0x17B | Ordinal: 380
        void setData(class QString const &);

    // RVA: 0x19A | Ordinal: 411
        void substringData(unsigned long, unsigned long);

    // RVA: 0x52 | Ordinal: 83
        void _QDomCharacterData(void);
};

// DCS_OPS_RE_QT5XML.DLL_QDOMCHARACTERDATA_HPP
