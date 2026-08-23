#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformScreen
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformScreen
{
public:

    // RVA: 0x251 | Ordinal: 594
        void QPlatformScreen(void);

    // RVA: 0x9EE | Ordinal: 2543
        void angleBetween(enum Qt::ScreenOrientation, enum Qt::ScreenOrientation);

    // RVA: 0xA3E | Ordinal: 2623
        void availableGeometry(void) const;

    // RVA: 0xCF1 | Ordinal: 3314
        void currentMode(void) const;

    // RVA: 0xCFA | Ordinal: 3323
        void cursor(void) const;

    // RVA: 0xD6A | Ordinal: 3435
        void d_func(void);

    // RVA: 0xD6B | Ordinal: 3436
        void d_func(void) const;

    // RVA: 0xE47 | Ordinal: 3656
        void deviceIndependentGeometry(void) const;

    // RVA: 0xE51 | Ordinal: 3666
        void devicePixelRatio(void) const;

    // RVA: 0x4E0C | Ordinal: 19981
        void grabWindow(unsigned __int64, int, int, int, int) const;

    // RVA: 0x5064 | Ordinal: 20581
        void isPlaceholder(void) const;

    // RVA: 0x51AB | Ordinal: 20908
        void logicalBaseDpi(void) const;

    // RVA: 0x51B1 | Ordinal: 20914
        void logicalDpi(void) const;

    // RVA: 0x51E2 | Ordinal: 20963
        void manufacturer(void) const;

    // RVA: 0x5200 | Ordinal: 20993
        void mapBetween(enum Qt::ScreenOrientation, enum Qt::ScreenOrientation, class QRect const &);

    // RVA: 0x52E5 | Ordinal: 21222
        void model(void) const;

    // RVA: 0x52E9 | Ordinal: 21226
        void modes(void) const;

    // RVA: 0x5314 | Ordinal: 21269
        void name(void) const;

    // RVA: 0x5324 | Ordinal: 21285
        void nativeOrientation(void) const;

    // RVA: 0x53B2 | Ordinal: 21427
        void orientation(void) const;

    // RVA: 0x53C8 | Ordinal: 21449
        void overrideDpi(struct QPair<double, double> const &);

    // RVA: 0x5444 | Ordinal: 21573
        void physicalSize(void) const;

    // RVA: 0x5450 | Ordinal: 21585
        void pixelDensity(void) const;

    // RVA: 0x546B | Ordinal: 21612
        void platformScreenForWindow(class QWindow const *);

    // RVA: 0x54AD | Ordinal: 21678
        void powerState(void) const;

    // RVA: 0x54B3 | Ordinal: 21684
        void preferredMode(void) const;

    // RVA: 0x569D | Ordinal: 22174
        void refreshRate(void) const;

    // RVA: 0x572B | Ordinal: 22316
        void resizeMaximizedWindows(void);

    // RVA: 0x57CA | Ordinal: 22475
        void screen(void) const;

    // RVA: 0x57D5 | Ordinal: 22486
        void screenForPosition(class QPoint const &) const;

    // RVA: 0x5804 | Ordinal: 22533
        void serialNumber(void) const;

    // RVA: 0x5AC1 | Ordinal: 23234
        void setOrientationUpdateMask(class QFlags<enum Qt::ScreenOrientation>);

    // RVA: 0x5B11 | Ordinal: 23314
        void setPowerState(enum QPlatformScreen::PowerState);

    // RVA: 0x5E45 | Ordinal: 24134
        void subpixelAntialiasingTypeHint(void) const;

    // RVA: 0x5F8C | Ordinal: 24461
        void topLevelAt(class QPoint const &) const;

    // RVA: 0x602B | Ordinal: 24620
        void transformBetween(enum Qt::ScreenOrientation, enum Qt::ScreenOrientation, class QRect const &);

    // RVA: 0x612D | Ordinal: 24878
        void virtualSiblings(void) const;

    // RVA: 0x618B | Ordinal: 24972
        void windows(void) const;

    // RVA: 0x4DC | Ordinal: 1245
        void _QPlatformScreen(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMSCREEN_HPP
