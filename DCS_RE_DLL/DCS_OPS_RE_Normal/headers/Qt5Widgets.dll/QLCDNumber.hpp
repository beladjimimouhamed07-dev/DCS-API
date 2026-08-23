#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QLCDNumber
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLCDNumber
{
public:

    // RVA: 0xBB | Ordinal: 188
        void QLCDNumber(unsigned int, class QWidget *);

    // RVA: 0xBC | Ordinal: 189
        void QLCDNumber(class QWidget *);

    // RVA: 0x6D4 | Ordinal: 1749
        void checkOverflow(int) const;

    // RVA: 0x6D5 | Ordinal: 1750
        void checkOverflow(double) const;

    // RVA: 0x94F | Ordinal: 2384
        void d_func(void);

    // RVA: 0x950 | Ordinal: 2385
        void d_func(void) const;

    // RVA: 0xA17 | Ordinal: 2584
        void digitCount(void) const;

    // RVA: 0xA23 | Ordinal: 2596
        void display(class QString const &);

    // RVA: 0xA24 | Ordinal: 2597
        void display(int);

    // RVA: 0xA25 | Ordinal: 2598
        void display(double);

    // RVA: 0xB49 | Ordinal: 2890
        void event(class QEvent *);

    // RVA: 0xE77 | Ordinal: 3704
        void intValue(void) const;

    // RVA: 0x1150 | Ordinal: 4433
        void metaObject(void) const;

    // RVA: 0x11EC | Ordinal: 4589
        void mode(void) const;

    // RVA: 0x12FF | Ordinal: 4864
        void overflow(void);

    // RVA: 0x132F | Ordinal: 4912
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1469 | Ordinal: 5226
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14FC | Ordinal: 5373
        void qt_metacast(char const *);

    // RVA: 0x1592 | Ordinal: 5523
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x178F | Ordinal: 6032
        void segmentStyle(void) const;

    // RVA: 0x1840 | Ordinal: 6209
        void setBinMode(void);

    // RVA: 0x18F5 | Ordinal: 6390
        void setDecMode(void);

    // RVA: 0x190C | Ordinal: 6413
        void setDigitCount(int);

    // RVA: 0x19E9 | Ordinal: 6634
        void setHexMode(void);

    // RVA: 0x1AC2 | Ordinal: 6851
        void setMode(enum QLCDNumber::Mode);

    // RVA: 0x1AF8 | Ordinal: 6905
        void setOctMode(void);

    // RVA: 0x1BD7 | Ordinal: 7128
        void setSegmentStyle(enum QLCDNumber::SegmentStyle);

    // RVA: 0x1C1E | Ordinal: 7199
        void setSmallDecimalPoint(bool);

    // RVA: 0x1DFC | Ordinal: 7677
        void sizeHint(void) const;

    // RVA: 0x1E32 | Ordinal: 7731
        void smallDecimalPoint(void) const;

    // RVA: 0x20B8 | Ordinal: 8377
        void tr(char const *, char const *, int);

    // RVA: 0x214B | Ordinal: 8524
        void trUtf8(char const *, char const *, int);

    // RVA: 0x226D | Ordinal: 8814
        void value(void) const;

    // RVA: 0x21F | Ordinal: 544
        void _QLCDNumber(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLCDNUMBER_HPP
