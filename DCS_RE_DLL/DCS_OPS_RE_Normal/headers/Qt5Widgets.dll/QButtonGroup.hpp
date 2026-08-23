#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QButtonGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QButtonGroup
{
public:

    // RVA: 0x1A | Ordinal: 27
        void QButtonGroup(class QObject *);

    // RVA: 0x540 | Ordinal: 1345
        void addButton(class QAbstractButton *, int);

    // RVA: 0x659 | Ordinal: 1626
        void button(int) const;

    // RVA: 0x65F | Ordinal: 1632
        void buttonClicked(int);

    // RVA: 0x660 | Ordinal: 1633
        void buttonClicked(class QAbstractButton *);

    // RVA: 0x665 | Ordinal: 1638
        void buttonPressed(int);

    // RVA: 0x666 | Ordinal: 1639
        void buttonPressed(class QAbstractButton *);

    // RVA: 0x667 | Ordinal: 1640
        void buttonReleased(int);

    // RVA: 0x668 | Ordinal: 1641
        void buttonReleased(class QAbstractButton *);

    // RVA: 0x66F | Ordinal: 1648
        void buttonToggled(int, bool);

    // RVA: 0x670 | Ordinal: 1649
        void buttonToggled(class QAbstractButton *, bool);

    // RVA: 0x671 | Ordinal: 1650
        void buttons(void) const;

    // RVA: 0x6DE | Ordinal: 1759
        void checkedButton(void) const;

    // RVA: 0x6DF | Ordinal: 1760
        void checkedId(void) const;

    // RVA: 0x8BB | Ordinal: 2236
        void d_func(void);

    // RVA: 0x8BC | Ordinal: 2237
        void d_func(void) const;

    // RVA: 0xB8D | Ordinal: 2958
        void exclusive(void) const;

    // RVA: 0xD9C | Ordinal: 3485
        void id(class QAbstractButton *) const;

    // RVA: 0xD9F | Ordinal: 3488
        void idClicked(int);

    // RVA: 0xDA0 | Ordinal: 3489
        void idPressed(int);

    // RVA: 0xDA1 | Ordinal: 3490
        void idReleased(int);

    // RVA: 0xDA2 | Ordinal: 3491
        void idToggled(int, bool);

    // RVA: 0x1117 | Ordinal: 4376
        void metaObject(void) const;

    // RVA: 0x1430 | Ordinal: 5169
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C3 | Ordinal: 5316
        void qt_metacast(char const *);

    // RVA: 0x1559 | Ordinal: 5466
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x162B | Ordinal: 5676
        void removeButton(class QAbstractButton *);

    // RVA: 0x1954 | Ordinal: 6485
        void setExclusive(bool);

    // RVA: 0x1A17 | Ordinal: 6680
        void setId(class QAbstractButton *, int);

    // RVA: 0x207F | Ordinal: 8320
        void tr(char const *, char const *, int);

    // RVA: 0x2112 | Ordinal: 8467
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1C0 | Ordinal: 449
        void _QButtonGroup(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QBUTTONGROUP_HPP
