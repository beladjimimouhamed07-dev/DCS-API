#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QIconLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIconLoader
{
public:

    // RVA: 0x132 | Ordinal: 307
        void QIconLoader(class QIconLoader &&);

    // RVA: 0x133 | Ordinal: 308
        void QIconLoader(class QIconLoader const &);

    // RVA: 0x134 | Ordinal: 309
        void QIconLoader(void);

    // RVA: 0xFD3 | Ordinal: 4052
        void ensureInitialized(void);

    // RVA: 0x101D | Ordinal: 4126
        void fallbackSearchPaths(void) const;

    // RVA: 0x101F | Ordinal: 4128
        void fallbackThemeName(void) const;

    // RVA: 0x1079 | Ordinal: 4218
        void findIconHelper(class QString const &, class QString const &, class QStringList &) const;

    // RVA: 0x4E7F | Ordinal: 20096
        void hasUserTheme(void) const;

    // RVA: 0x4F87 | Ordinal: 20360
        void instance(void);

    // RVA: 0x4FA9 | Ordinal: 20394
        void invalidateKey(void);

    // RVA: 0x5192 | Ordinal: 20883
        void loadIcon(class QString const &) const;

    // RVA: 0x51B8 | Ordinal: 20921
        void lookupFallbackIcon(class QString const &) const;

    // RVA: 0x5965 | Ordinal: 22886
        void setFallbackSearchPaths(class QStringList const &);

    // RVA: 0x5968 | Ordinal: 22889
        void setFallbackThemeName(class QString const &);

    // RVA: 0x5C04 | Ordinal: 23557
        void setThemeName(class QString const &);

    // RVA: 0x5C05 | Ordinal: 23558
        void setThemeSearchPath(class QStringList const &);

    // RVA: 0x5F23 | Ordinal: 24356
        void theme(void);

    // RVA: 0x5F25 | Ordinal: 24358
        void themeKey(void) const;

    // RVA: 0x5F27 | Ordinal: 24360
        void themeName(void) const;

    // RVA: 0x5F2A | Ordinal: 24363
        void themeSearchPaths(void) const;

    // RVA: 0x60CC | Ordinal: 24781
        void updateSystemTheme(void);

    // RVA: 0x44F | Ordinal: 1104
        void _QIconLoader(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QICONLOADER_HPP
