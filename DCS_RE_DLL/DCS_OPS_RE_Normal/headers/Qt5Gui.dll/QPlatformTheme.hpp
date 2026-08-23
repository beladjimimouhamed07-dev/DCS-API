#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformTheme
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformTheme
{
public:

    // RVA: 0x25A | Ordinal: 603
        void QPlatformTheme(class QPlatformThemePrivate *);

    // RVA: 0x25B | Ordinal: 604
        void QPlatformTheme(void);

    // RVA: 0xCA7 | Ordinal: 3240
        void createIconEngine(class QString const &) const;

    // RVA: 0xCB7 | Ordinal: 3256
        void createPlatformDialogHelper(enum QPlatformTheme::DialogType) const;

    // RVA: 0xCB9 | Ordinal: 3258
        void createPlatformMenu(void) const;

    // RVA: 0xCBA | Ordinal: 3259
        void createPlatformMenuBar(void) const;

    // RVA: 0xCBB | Ordinal: 3260
        void createPlatformMenuItem(void) const;

    // RVA: 0xCC1 | Ordinal: 3266
        void createPlatformSystemTrayIcon(void) const;

    // RVA: 0xD6E | Ordinal: 3439
        void d_func(void);

    // RVA: 0xD6F | Ordinal: 3440
        void d_func(void) const;

    // RVA: 0xDD3 | Ordinal: 3540
        void defaultStandardButtonText(int);

    // RVA: 0xDD8 | Ordinal: 3545
        void defaultThemeHint(enum QPlatformTheme::ThemeHint);

    // RVA: 0x1028 | Ordinal: 4137
        void fileIcon(class QFileInfo const &, class QFlags<enum QPlatformTheme::IconOption>) const;

    // RVA: 0x10B8 | Ordinal: 4281
        void font(enum QPlatformTheme::Font) const;

    // RVA: 0x50F2 | Ordinal: 20723
        void keyBindings(enum QKeySequence::StandardKey) const;

    // RVA: 0x53FD | Ordinal: 21502
        void palette(enum QPlatformTheme::Palette) const;

    // RVA: 0x56DD | Ordinal: 22238
        void removeMnemonics(class QString const &);

    // RVA: 0x5D21 | Ordinal: 23842
        void showPlatformMenuBar(void);

    // RVA: 0x5D79 | Ordinal: 23930
        void standardButtonShortcut(int) const;

    // RVA: 0x5D7A | Ordinal: 23931
        void standardButtonText(int) const;

    // RVA: 0x5D7E | Ordinal: 23935
        void standardPixmap(enum QPlatformTheme::StandardPixmap, class QSizeF const &) const;

    // RVA: 0x5F24 | Ordinal: 24357
        void themeHint(enum QPlatformTheme::ThemeHint) const;

    // RVA: 0x60DF | Ordinal: 24800
        void usePlatformNativeDialog(enum QPlatformTheme::DialogType) const;

    // RVA: 0x4E4 | Ordinal: 1253
        void _QPlatformTheme(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMTHEME_HPP
