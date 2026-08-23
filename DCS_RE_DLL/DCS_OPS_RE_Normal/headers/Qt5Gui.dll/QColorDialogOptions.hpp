#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QColorDialogOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColorDialogOptions
{
public:

    // RVA: 0xB2 | Ordinal: 179
        void QColorDialogOptions(class QColorDialogOptionsPrivate *);

    // RVA: 0xBE0 | Ordinal: 3041
        void clone(void) const;

    // RVA: 0xC80 | Ordinal: 3201
        void create(void);

    // RVA: 0xD0B | Ordinal: 3340
        void customColor(int);

    // RVA: 0xD0C | Ordinal: 3341
        void customColorCount(void);

    // RVA: 0xD0D | Ordinal: 3342
        void customColors(void);

    // RVA: 0x53A9 | Ordinal: 21418
        void options(void) const;

    // RVA: 0x58F4 | Ordinal: 22773
        void setCustomColor(int, unsigned int);

    // RVA: 0x5AB2 | Ordinal: 23219
        void setOption(enum QColorDialogOptions::ColorDialogOption, bool);

    // RVA: 0x5AB8 | Ordinal: 23225
        void setOptions(class QFlags<enum QColorDialogOptions::ColorDialogOption>);

    // RVA: 0x5BA6 | Ordinal: 23463
        void setStandardColor(int, unsigned int);

    // RVA: 0x5CCC | Ordinal: 23757
        void setWindowTitle(class QString const &);

    // RVA: 0x5D7C | Ordinal: 23933
        void standardColor(int);

    // RVA: 0x5D7D | Ordinal: 23934
        void standardColors(void);

    // RVA: 0x5ED9 | Ordinal: 24282
        void testOption(enum QColorDialogOptions::ColorDialogOption) const;

    // RVA: 0x6185 | Ordinal: 24966
        void windowTitle(void) const;

    // RVA: 0x41D | Ordinal: 1054
        void _QColorDialogOptions(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QCOLORDIALOGOPTIONS_HPP
