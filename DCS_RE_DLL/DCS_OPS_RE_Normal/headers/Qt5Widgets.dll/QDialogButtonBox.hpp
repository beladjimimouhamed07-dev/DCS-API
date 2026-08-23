#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDialogButtonBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDialogButtonBox
{
public:

    // RVA: 0x3D | Ordinal: 62
        void QDialogButtonBox(class QWidget *);

    // RVA: 0x3E | Ordinal: 63
        void QDialogButtonBox(class QFlags<enum QDialogButtonBox::StandardButton>, class QWidget *);

    // RVA: 0x3F | Ordinal: 64
        void QDialogButtonBox(class QFlags<enum QDialogButtonBox::StandardButton>, enum Qt::Orientation, class QWidget *);

    // RVA: 0x40 | Ordinal: 65
        void QDialogButtonBox(enum Qt::Orientation, class QWidget *);

    // RVA: 0x4EC | Ordinal: 1261
        void accepted(void);

    // RVA: 0x541 | Ordinal: 1346
        void addButton(class QString const &, enum QDialogButtonBox::ButtonRole);

    // RVA: 0x542 | Ordinal: 1347
        void addButton(enum QDialogButtonBox::StandardButton);

    // RVA: 0x543 | Ordinal: 1348
        void addButton(class QAbstractButton *, enum QDialogButtonBox::ButtonRole);

    // RVA: 0x65A | Ordinal: 1627
        void button(enum QDialogButtonBox::StandardButton) const;

    // RVA: 0x669 | Ordinal: 1642
        void buttonRole(class QAbstractButton *) const;

    // RVA: 0x672 | Ordinal: 1651
        void buttons(void) const;

    // RVA: 0x6A5 | Ordinal: 1702
        void centerButtons(void) const;

    // RVA: 0x6B5 | Ordinal: 1718
        void changeEvent(class QEvent *);

    // RVA: 0x70E | Ordinal: 1807
        void clear(void);

    // RVA: 0x73D | Ordinal: 1854
        void clicked(class QAbstractButton *);

    // RVA: 0x8D7 | Ordinal: 2264
        void d_func(void);

    // RVA: 0x8D8 | Ordinal: 2265
        void d_func(void) const;

    // RVA: 0xB3B | Ordinal: 2876
        void event(class QEvent *);

    // RVA: 0xD18 | Ordinal: 3353
        void helpRequested(void);

    // RVA: 0x1127 | Ordinal: 4392
        void metaObject(void) const;

    // RVA: 0x12F1 | Ordinal: 4850
        void orientation(void) const;

    // RVA: 0x1440 | Ordinal: 5185
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D3 | Ordinal: 5332
        void qt_metacast(char const *);

    // RVA: 0x1569 | Ordinal: 5482
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1619 | Ordinal: 5658
        void rejected(void);

    // RVA: 0x162C | Ordinal: 5677
        void removeButton(class QAbstractButton *);

    // RVA: 0x1866 | Ordinal: 6247
        void setCenterButtons(bool);

    // RVA: 0x1B26 | Ordinal: 6951
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1C3E | Ordinal: 7231
        void setStandardButtons(class QFlags<enum QDialogButtonBox::StandardButton>);

    // RVA: 0x1E67 | Ordinal: 7784
        void standardButton(class QAbstractButton *) const;

    // RVA: 0x1E69 | Ordinal: 7786
        void standardButtons(void) const;

    // RVA: 0x208F | Ordinal: 8336
        void tr(char const *, char const *, int);

    // RVA: 0x2122 | Ordinal: 8483
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1D2 | Ordinal: 467
        void _QDialogButtonBox(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDIALOGBUTTONBOX_HPP
