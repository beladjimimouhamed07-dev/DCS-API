#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QIcon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIcon
{
public:

    // RVA: 0x127 | Ordinal: 296
        void QIcon(class QIcon &&);

    // RVA: 0x128 | Ordinal: 297
        void QIcon(class QIcon const &);

    // RVA: 0x129 | Ordinal: 298
        void QIcon(class QPixmap const &);

    // RVA: 0x12A | Ordinal: 299
        void QIcon(class QString const &);

    // RVA: 0x12B | Ordinal: 300
        void QIcon(class QIconEngine *);

    // RVA: 0x12C | Ordinal: 301
        void QIcon(void);

    // RVA: 0x957 | Ordinal: 2392
        void actualSize(class QSize const &, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x958 | Ordinal: 2393
        void actualSize(class QWindow *, class QSize const &, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x974 | Ordinal: 2421
        void addFile(class QString const &, class QSize const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0x987 | Ordinal: 2440
        void addPixmap(class QPixmap const &, enum QIcon::Mode, enum QIcon::State);

    // RVA: 0xA46 | Ordinal: 2631
        void availableSizes(enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0xB2B | Ordinal: 2860
        void cacheKey(void) const;

    // RVA: 0xDB0 | Ordinal: 3505
        void data_ptr(void);

    // RVA: 0xE1F | Ordinal: 3616
        void detach(void);

    // RVA: 0x101C | Ordinal: 4125
        void fallbackSearchPaths(void);

    // RVA: 0x101E | Ordinal: 4127
        void fallbackThemeName(void);

    // RVA: 0x1167 | Ordinal: 4456
        void fromTheme(class QString const &);

    // RVA: 0x1168 | Ordinal: 4457
        void fromTheme(class QString const &, class QIcon const &);

    // RVA: 0x4E7D | Ordinal: 20094
        void hasThemeIcon(class QString const &);

    // RVA: 0x5003 | Ordinal: 20484
        void isDetached(void) const;

    // RVA: 0x5049 | Ordinal: 20554
        void isMask(void) const;

    // RVA: 0x504F | Ordinal: 20560
        void isNull(void) const;

    // RVA: 0x5310 | Ordinal: 21265
        void name(void) const;

    // RVA: 0x53DE | Ordinal: 21471
        void paint(class QPainter *, class QRect const &, class QFlags<enum Qt::AlignmentFlag>, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x53DF | Ordinal: 21472
        void paint(class QPainter *, int, int, int, int, class QFlags<enum Qt::AlignmentFlag>, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x545E | Ordinal: 21599
        void pixmap(class QSize const &, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x545F | Ordinal: 21600
        void pixmap(int, int, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x5460 | Ordinal: 21601
        void pixmap(int, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x5461 | Ordinal: 21602
        void pixmap(class QWindow *, class QSize const &, enum QIcon::Mode, enum QIcon::State) const;

    // RVA: 0x57FE | Ordinal: 22527
        void serialNumber(void) const;

    // RVA: 0x5964 | Ordinal: 22885
        void setFallbackSearchPaths(class QStringList const &);

    // RVA: 0x5967 | Ordinal: 22888
        void setFallbackThemeName(class QString const &);

    // RVA: 0x5A0D | Ordinal: 23054
        void setIsMask(bool);

    // RVA: 0x5C03 | Ordinal: 23556
        void setThemeName(class QString const &);

    // RVA: 0x5C06 | Ordinal: 23559
        void setThemeSearchPaths(class QStringList const &);

    // RVA: 0x5E82 | Ordinal: 24195
        void swap(class QIcon &);

    // RVA: 0x5F26 | Ordinal: 24359
        void themeName(void);

    // RVA: 0x5F29 | Ordinal: 24362
        void themeSearchPaths(void);

    // RVA: 0x44B | Ordinal: 1100
        void _QIcon(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QICON_HPP
