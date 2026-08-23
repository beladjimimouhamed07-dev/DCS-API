#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Xml.dll
// Class: QXmlInputSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QXmlInputSource
{
public:

    // RVA: 0x43 | Ordinal: 68
        void QXmlInputSource(class QXmlInputSource const &);

    // RVA: 0x44 | Ordinal: 69
        void QXmlInputSource(class QIODevice *);

    // RVA: 0x45 | Ordinal: 70
        void QXmlInputSource(void);

    // RVA: 0xD1 | Ordinal: 210
        void data(void) const;

    // RVA: 0xE9 | Ordinal: 234
        void fetchData(void);

    // RVA: 0xEC | Ordinal: 237
        void fromRawData(class QByteArray const &, bool);

    // RVA: 0xFA | Ordinal: 251
        void init(void);

    // RVA: 0x127 | Ordinal: 296
        void next(void);

    // RVA: 0x15D | Ordinal: 350
        void reset(void);

    // RVA: 0x17D | Ordinal: 382
        void setData(class QByteArray const &);

    // RVA: 0x17E | Ordinal: 383
        void setData(class QString const &);

    // RVA: 0x68 | Ordinal: 105
        void _QXmlInputSource(void);
};

// DCS_OPS_RE_QT5XML.DLL_QXMLINPUTSOURCE_HPP
