#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextFormatCollection
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextFormatCollection
{
public:

    // RVA: 0x353 | Ordinal: 852
        void QTextFormatCollection(void);

    // RVA: 0xAB6 | Ordinal: 2743
        void blockFormat(int) const;

    // RVA: 0xB81 | Ordinal: 2946
        void charFormat(int) const;

    // RVA: 0xBA9 | Ordinal: 2986
        void clear(void);

    // RVA: 0xCB5 | Ordinal: 3254
        void createObjectIndex(class QTextFormat const &);

    // RVA: 0xDCA | Ordinal: 3531
        void defaultFont(void) const;

    // RVA: 0x10FC | Ordinal: 4349
        void format(int) const;

    // RVA: 0x4E68 | Ordinal: 20073
        void hasFormatCached(class QTextFormat const &) const;

    // RVA: 0x4EE6 | Ordinal: 20199
        void imageFormat(int) const;

    // RVA: 0x4EFA | Ordinal: 20219
        void indexForFormat(class QTextFormat const &);

    // RVA: 0x517B | Ordinal: 20860
        void listFormat(int) const;

    // RVA: 0x5374 | Ordinal: 21365
        void numFormats(void) const;

    // RVA: 0x5384 | Ordinal: 21381
        void objectFormat(int) const;

    // RVA: 0x5385 | Ordinal: 21382
        void objectFormatIndex(int) const;

    // RVA: 0x5919 | Ordinal: 22810
        void setDefaultFont(class QFont const &);

    // RVA: 0x5AA5 | Ordinal: 23206
        void setObjectFormat(int, class QTextFormat const &);

    // RVA: 0x5AA6 | Ordinal: 23207
        void setObjectFormatIndex(int, int);

    // RVA: 0x5EB4 | Ordinal: 24245
        void tableFormat(int) const;

    // RVA: 0x537 | Ordinal: 1336
        void _QTextFormatCollection(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTFORMATCOLLECTION_HPP
