#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontDialogOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontDialogOptions
{
public:

    // RVA: 0x102 | Ordinal: 259
        void QFontDialogOptions(class QFontDialogOptionsPrivate *);

    // RVA: 0xBE2 | Ordinal: 3043
        void clone(void) const;

    // RVA: 0xC84 | Ordinal: 3205
        void create(void);

    // RVA: 0x53AB | Ordinal: 21420
        void options(void) const;

    // RVA: 0x5AB4 | Ordinal: 23221
        void setOption(enum QFontDialogOptions::FontDialogOption, bool);

    // RVA: 0x5ABA | Ordinal: 23227
        void setOptions(class QFlags<enum QFontDialogOptions::FontDialogOption>);

    // RVA: 0x5CCE | Ordinal: 23759
        void setWindowTitle(class QString const &);

    // RVA: 0x5EDB | Ordinal: 24284
        void testOption(enum QFontDialogOptions::FontDialogOption) const;

    // RVA: 0x6187 | Ordinal: 24968
        void windowTitle(void) const;

    // RVA: 0x438 | Ordinal: 1081
        void _QFontDialogOptions(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTDIALOGOPTIONS_HPP
