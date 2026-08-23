#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextListFormat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextListFormat
{
public:

    // RVA: 0x370 | Ordinal: 881
        void QTextListFormat(class QTextFormat const &);

    // RVA: 0x371 | Ordinal: 882
        void QTextListFormat(class QTextListFormat &&);

    // RVA: 0x372 | Ordinal: 883
        void QTextListFormat(class QTextListFormat const &);

    // RVA: 0x373 | Ordinal: 884
        void QTextListFormat(void);

    // RVA: 0x4EF6 | Ordinal: 20215
        void indent(void) const;

    // RVA: 0x50B0 | Ordinal: 20657
        void isValid(void) const;

    // RVA: 0x5377 | Ordinal: 21368
        void numberPrefix(void) const;

    // RVA: 0x5378 | Ordinal: 21369
        void numberSuffix(void) const;

    // RVA: 0x59FF | Ordinal: 23040
        void setIndent(int);

    // RVA: 0x5AA3 | Ordinal: 23204
        void setNumberPrefix(class QString const &);

    // RVA: 0x5AA4 | Ordinal: 23205
        void setNumberSuffix(class QString const &);

    // RVA: 0x5BCB | Ordinal: 23500
        void setStyle(enum QTextListFormat::Style);

    // RVA: 0x5E2F | Ordinal: 24112
        void style(void) const;

    // RVA: 0x53F | Ordinal: 1344
        void _QTextListFormat(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTLISTFORMAT_HPP
