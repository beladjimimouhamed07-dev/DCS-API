#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QHighDpiScaling
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QHighDpiScaling
{
public:

    // RVA: 0xF74 | Ordinal: 3957
        void effectiveLogicalDpi(class QPlatformScreen const *, double, double);

    // RVA: 0x4F0C | Ordinal: 20237
        void initHighDpiScaling(void);

    // RVA: 0x4FBC | Ordinal: 20413
        void isActive(void);

    // RVA: 0x51B0 | Ordinal: 20913
        void logicalDpi(class QScreen const *);

    // RVA: 0x5205 | Ordinal: 20998
        void mapPositionFromGlobal(class QPoint const &, class QPoint const &, class QWindow const *);

    // RVA: 0x5206 | Ordinal: 20999
        void mapPositionFromNative(class QPoint const &, class QPlatformScreen const *);

    // RVA: 0x5207 | Ordinal: 21000
        void mapPositionToGlobal(class QPoint const &, class QPoint const &, class QWindow const *);

    // RVA: 0x5208 | Ordinal: 21001
        void mapPositionToNative(class QPoint const &, class QPlatformScreen const *);

    // RVA: 0x566B | Ordinal: 22124
        void rawScaleFactor(class QPlatformScreen const *);

    // RVA: 0x577B | Ordinal: 22396
        void roundScaleFactor(double);

    // RVA: 0x57AF | Ordinal: 22448
        void scaleAndOrigin(class QPlatformScreen const *, class QPoint *);

    // RVA: 0x57B0 | Ordinal: 22449
        void scaleAndOrigin(class QScreen const *, class QPoint *);

    // RVA: 0x57B1 | Ordinal: 22450
        void scaleAndOrigin(class QWindow const *, class QPoint *);

    // RVA: 0x57DC | Ordinal: 22493
        void screenSubfactor(class QPlatformScreen const *);

    // RVA: 0x59D5 | Ordinal: 22998
        void setGlobalFactor(double);

    // RVA: 0x5B74 | Ordinal: 23413
        void setScreenFactor(class QScreen *, double);

    // RVA: 0x60C0 | Ordinal: 24769
        void updateHighDpiScaling(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QHIGHDPISCALING_HPP
