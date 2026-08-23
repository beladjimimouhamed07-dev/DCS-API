#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QActionGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QActionGroup
{
public:

    // RVA: 0x14 | Ordinal: 21
        void QActionGroup(class QObject *);

    // RVA: 0x507 | Ordinal: 1288
        void actions(void) const;

    // RVA: 0x52B | Ordinal: 1324
        void addAction(class QIcon const &, class QString const &);

    // RVA: 0x52C | Ordinal: 1325
        void addAction(class QString const &);

    // RVA: 0x52D | Ordinal: 1326
        void addAction(class QAction *);

    // RVA: 0x6DD | Ordinal: 1758
        void checkedAction(void) const;

    // RVA: 0x8B5 | Ordinal: 2230
        void d_func(void);

    // RVA: 0x8B6 | Ordinal: 2231
        void d_func(void) const;

    // RVA: 0xB8C | Ordinal: 2957
        void exclusionPolicy(void) const;

    // RVA: 0xD7F | Ordinal: 3456
        void hovered(class QAction *);

    // RVA: 0xED7 | Ordinal: 3800
        void isEnabled(void) const;

    // RVA: 0xEDF | Ordinal: 3808
        void isExclusive(void) const;

    // RVA: 0xF6C | Ordinal: 3949
        void isVisible(void) const;

    // RVA: 0x1113 | Ordinal: 4372
        void metaObject(void) const;

    // RVA: 0x142C | Ordinal: 5165
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14BF | Ordinal: 5312
        void qt_metacast(char const *);

    // RVA: 0x1555 | Ordinal: 5462
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1625 | Ordinal: 5670
        void removeAction(class QAction *);

    // RVA: 0x1915 | Ordinal: 6422
        void setDisabled(bool);

    // RVA: 0x1946 | Ordinal: 6471
        void setEnabled(bool);

    // RVA: 0x1952 | Ordinal: 6483
        void setExclusionPolicy(enum QActionGroup::ExclusionPolicy);

    // RVA: 0x1953 | Ordinal: 6484
        void setExclusive(bool);

    // RVA: 0x1D16 | Ordinal: 7447
        void setVisible(bool);

    // RVA: 0x207B | Ordinal: 8316
        void tr(char const *, char const *, int);

    // RVA: 0x210E | Ordinal: 8463
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21B2 | Ordinal: 8627
        void triggered(class QAction *);

    // RVA: 0x1BA | Ordinal: 443
        void _QActionGroup(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QACTIONGROUP_HPP
