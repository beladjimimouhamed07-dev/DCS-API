#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextMarkdownWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextMarkdownWriter
{
public:

    // RVA: 0x378 | Ordinal: 889
        void QTextMarkdownWriter(class QTextMarkdownWriter &&);

    // RVA: 0x379 | Ordinal: 890
        void QTextMarkdownWriter(class QTextStream &, class QFlags<enum QTextDocument::MarkdownFeature>);

    // RVA: 0x37A | Ordinal: 891
        void QTextMarkdownWriter(class QTextMarkdownWriter const &);

    // RVA: 0x517D | Ordinal: 20862
        void listInfo(class QTextList *);

    // RVA: 0x619F | Ordinal: 24992
        void writeAll(class QTextDocument const *);

    // RVA: 0x61A1 | Ordinal: 24994
        void writeBlock(class QTextBlock const &, bool, bool, bool);

    // RVA: 0x61A6 | Ordinal: 24999
        void writeFrame(class QTextFrame const *);

    // RVA: 0x61AD | Ordinal: 25006
        void writeTable(class QAbstractItemModel const *);

    // RVA: 0x541 | Ordinal: 1346
        void _QTextMarkdownWriter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTMARKDOWNWRITER_HPP
