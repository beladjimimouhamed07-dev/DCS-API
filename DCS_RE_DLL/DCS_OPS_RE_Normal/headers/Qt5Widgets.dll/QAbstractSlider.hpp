#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAbstractSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractSlider
{
public:

    // RVA: 0xB | Ordinal: 12
        void QAbstractSlider(class QAbstractSliderPrivate &, class QWidget *);

    // RVA: 0xC | Ordinal: 13
        void QAbstractSlider(class QWidget *);

    // RVA: 0x505 | Ordinal: 1286
        void actionTriggered(int);

    // RVA: 0x6B0 | Ordinal: 1713
        void changeEvent(class QEvent *);

    // RVA: 0x8AF | Ordinal: 2224
        void d_func(void);

    // RVA: 0x8B0 | Ordinal: 2225
        void d_func(void) const;

    // RVA: 0xB30 | Ordinal: 2865
        void event(class QEvent *);

    // RVA: 0xCFA | Ordinal: 3323
        void hasTracking(void) const;

    // RVA: 0xE98 | Ordinal: 3737
        void invertedAppearance(void) const;

    // RVA: 0xE9A | Ordinal: 3739
        void invertedControls(void) const;

    // RVA: 0xF4B | Ordinal: 3916
        void isSliderDown(void) const;

    // RVA: 0xFF6 | Ordinal: 4087
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x10DF | Ordinal: 4320
        void maximum(void) const;

    // RVA: 0x1110 | Ordinal: 4369
        void metaObject(void) const;

    // RVA: 0x11AF | Ordinal: 4528
        void minimum(void) const;

    // RVA: 0x12EE | Ordinal: 4847
        void orientation(void) const;

    // RVA: 0x130D | Ordinal: 4878
        void pageStep(void) const;

    // RVA: 0x1429 | Ordinal: 5162
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14BC | Ordinal: 5309
        void qt_metacast(char const *);

    // RVA: 0x1552 | Ordinal: 5459
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15EC | Ordinal: 5613
        void rangeChanged(int, int);

    // RVA: 0x1661 | Ordinal: 5730
        void repeatAction(void) const;

    // RVA: 0x1A2B | Ordinal: 6700
        void setInvertedAppearance(bool);

    // RVA: 0x1A2D | Ordinal: 6702
        void setInvertedControls(bool);

    // RVA: 0x1A8C | Ordinal: 6797
        void setMaximum(int);

    // RVA: 0x1AAA | Ordinal: 6827
        void setMinimum(int);

    // RVA: 0x1B23 | Ordinal: 6948
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1B35 | Ordinal: 6966
        void setPageStep(int);

    // RVA: 0x1B76 | Ordinal: 7031
        void setRange(int, int);

    // RVA: 0x1B8D | Ordinal: 7054
        void setRepeatAction(enum QAbstractSlider::SliderAction, int, int);

    // RVA: 0x1C08 | Ordinal: 7177
        void setSingleStep(int);

    // RVA: 0x1C1C | Ordinal: 7197
        void setSliderDown(bool);

    // RVA: 0x1C1D | Ordinal: 7198
        void setSliderPosition(int);

    // RVA: 0x1CDD | Ordinal: 7390
        void setTracking(bool);

    // RVA: 0x1CF9 | Ordinal: 7418
        void setValue(int);

    // RVA: 0x1DD2 | Ordinal: 7635
        void singleStep(void) const;

    // RVA: 0x1E28 | Ordinal: 7721
        void sliderChange(enum QAbstractSlider::SliderChange);

    // RVA: 0x1E2B | Ordinal: 7724
        void sliderMoved(int);

    // RVA: 0x1E2C | Ordinal: 7725
        void sliderPosition(void) const;

    // RVA: 0x1E2E | Ordinal: 7727
        void sliderPressed(void);

    // RVA: 0x1E2F | Ordinal: 7728
        void sliderReleased(void);

    // RVA: 0x201D | Ordinal: 8222
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2078 | Ordinal: 8313
        void tr(char const *, char const *, int);

    // RVA: 0x210B | Ordinal: 8460
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21B0 | Ordinal: 8625
        void triggerAction(enum QAbstractSlider::SliderAction);

    // RVA: 0x226B | Ordinal: 8812
        void value(void) const;

    // RVA: 0x2271 | Ordinal: 8818
        void valueChanged(int);

    // RVA: 0x22E0 | Ordinal: 8929
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x1B6 | Ordinal: 439
        void _QAbstractSlider(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QABSTRACTSLIDER_HPP
