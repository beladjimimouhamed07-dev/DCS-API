#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextMarkdownImporter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextMarkdownImporter
{
public:

    // RVA: 0x374 | Ordinal: 885
        void QTextMarkdownImporter(class QTextMarkdownImporter &&);

    // RVA: 0x375 | Ordinal: 886
        void QTextMarkdownImporter(class QTextMarkdownImporter const &);

    // RVA: 0x376 | Ordinal: 887
        void QTextMarkdownImporter(class QFlags<enum QTextMarkdownImporter::Feature>);

    // RVA: 0x377 | Ordinal: 888
        void QTextMarkdownImporter(class QFlags<enum QTextDocument::MarkdownFeature>);

    // RVA: 0xB58 | Ordinal: 2905
        void cbEnterBlock(int, void *);

    // RVA: 0xB59 | Ordinal: 2906
        void cbEnterSpan(int, void *);

    // RVA: 0xB5A | Ordinal: 2907
        void cbLeaveBlock(int, void *);

    // RVA: 0xB5B | Ordinal: 2908
        void cbLeaveSpan(int, void *);

    // RVA: 0xB5C | Ordinal: 2909
        void cbText(int, char const *, unsigned int);

    // RVA: 0x4EEE | Ordinal: 20207
        void import(class QTextDocument *, class QString const &);

    // RVA: 0x4F54 | Ordinal: 20309
        void insertBlock(void);

    // RVA: 0x540 | Ordinal: 1345
        void _QTextMarkdownImporter(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTMARKDOWNIMPORTER_HPP
