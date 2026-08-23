#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QInputMethod
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInputMethod
{
public:

    // RVA: 0x156 | Ordinal: 343
        void QInputMethod(void);

    // RVA: 0x9EA | Ordinal: 2539
        void anchorRectangle(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void anchorRectangleChanged(void);

    // RVA: 0x9F1 | Ordinal: 2546
        void animatingChanged(void);

    // RVA: 0xC19 | Ordinal: 3098
        void commit(void);

    // RVA: 0xD02 | Ordinal: 3331
        void cursorRectangle(void) const;

    // RVA: 0xD03 | Ordinal: 3332
        void cursorRectangleChanged(void);

    // RVA: 0xD25 | Ordinal: 3366
        void d_func(void);

    // RVA: 0xD26 | Ordinal: 3367
        void d_func(void) const;

    // RVA: 0x4EA1 | Ordinal: 20130
        void hide(void);

    // RVA: 0x4F3B | Ordinal: 20284
        void inputDirection(void) const;

    // RVA: 0x4F3D | Ordinal: 20286
        void inputDirectionChanged(enum Qt::LayoutDirection);

    // RVA: 0x4F41 | Ordinal: 20290
        void inputItemClipRectangle(void) const;

    // RVA: 0x4F42 | Ordinal: 20291
        void inputItemClipRectangleChanged(void);

    // RVA: 0x4F43 | Ordinal: 20292
        void inputItemRectangle(void) const;

    // RVA: 0x4F44 | Ordinal: 20293
        void inputItemTransform(void) const;

    // RVA: 0x4FB6 | Ordinal: 20407
        void invokeAction(enum QInputMethod::Action, int);

    // RVA: 0x4FC9 | Ordinal: 20426
        void isAnimating(void) const;

    // RVA: 0x50BA | Ordinal: 20667
        void isVisible(void) const;

    // RVA: 0x50FE | Ordinal: 20735
        void keyboardRectangle(void) const;

    // RVA: 0x50FF | Ordinal: 20736
        void keyboardRectangleChanged(void);

    // RVA: 0x5199 | Ordinal: 20890
        void locale(void) const;

    // RVA: 0x519C | Ordinal: 20893
        void localeChanged(void);

    // RVA: 0x526B | Ordinal: 21100
        void metaObject(void) const;

    // RVA: 0x5582 | Ordinal: 21891
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55C6 | Ordinal: 21959
        void qt_metacast(char const *);

    // RVA: 0x561C | Ordinal: 22045
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x565F | Ordinal: 22112
        void queryFocusObject(enum Qt::InputMethodQuery, class QVariant);

    // RVA: 0x5715 | Ordinal: 22294
        void reset(void);

    // RVA: 0x5A06 | Ordinal: 23047
        void setInputItemRectangle(class QRectF const &);

    // RVA: 0x5A07 | Ordinal: 23048
        void setInputItemTransform(class QTransform const &);

    // RVA: 0x5CAB | Ordinal: 23724
        void setVisible(bool);

    // RVA: 0x5D15 | Ordinal: 23830
        void show(void);

    // RVA: 0x5FA9 | Ordinal: 24490
        void tr(char const *, char const *, int);

    // RVA: 0x5FF0 | Ordinal: 24561
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60AF | Ordinal: 24752
        void update(class QFlags<enum Qt::InputMethodQuery>);

    // RVA: 0x6135 | Ordinal: 24886
        void visibleChanged(void);

    // RVA: 0x45C | Ordinal: 1117
        void _QInputMethod(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QINPUTMETHOD_HPP
