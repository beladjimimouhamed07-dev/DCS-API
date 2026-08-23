#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QAccessibleWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessibleWidget
{
public:

    // RVA: 0xF | Ordinal: 16
        void QAccessibleWidget(class QWidget *, enum QAccessible::Role, class QString const &);

    // RVA: 0x503 | Ordinal: 1284
        void actionNames(void) const;

    // RVA: 0x54E | Ordinal: 1359
        void addControllingSignal(class QString const &);

    // RVA: 0x614 | Ordinal: 1557
        void backgroundColor(void) const;

    // RVA: 0x6E0 | Ordinal: 1761
        void child(int) const;

    // RVA: 0x6E7 | Ordinal: 1768
        void childCount(void) const;

    // RVA: 0xA2D | Ordinal: 2606
        void doAction(class QString const &);

    // RVA: 0xBFF | Ordinal: 3072
        void focusChild(void) const;

    // RVA: 0xC64 | Ordinal: 3173
        void foregroundColor(void) const;

    // RVA: 0xDC7 | Ordinal: 3528
        void indexOfChild(class QAccessibleInterface const *) const;

    // RVA: 0xE7A | Ordinal: 3707
        void interface_cast(enum QAccessible::InterfaceType);

    // RVA: 0xF66 | Ordinal: 3943
        void isValid(void) const;

    // RVA: 0xFF2 | Ordinal: 4083
        void keyBindingsForAction(class QString const &) const;

    // RVA: 0x135C | Ordinal: 4957
        void parent(void) const;

    // RVA: 0x1363 | Ordinal: 4964
        void parentObject(void) const;

    // RVA: 0x15F2 | Ordinal: 5619
        void rect(void) const;

    // RVA: 0x161A | Ordinal: 5659
        void relations(class QFlags<enum QAccessible::RelationFlag>) const;

    // RVA: 0x16DF | Ordinal: 5856
        void role(void) const;

    // RVA: 0x1E88 | Ordinal: 7817
        void state(void) const;

    // RVA: 0x1FD2 | Ordinal: 8147
        void text(enum QAccessible::Text) const;

    // RVA: 0x22F1 | Ordinal: 8946
        void widget(void) const;

    // RVA: 0x2316 | Ordinal: 8983
        void window(void) const;

    // RVA: 0x1B8 | Ordinal: 441
        void _QAccessibleWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QACCESSIBLEWIDGET_HPP
