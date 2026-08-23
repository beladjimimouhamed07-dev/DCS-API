#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QItemEditorFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QItemEditorFactory
{
public:

    // RVA: 0xB4 | Ordinal: 181
        void QItemEditorFactory(class QItemEditorFactory const &);

    // RVA: 0xB5 | Ordinal: 182
        void QItemEditorFactory(void);

    // RVA: 0x807 | Ordinal: 2056
        void createEditor(int, class QWidget *) const;

    // RVA: 0x9F9 | Ordinal: 2554
        void defaultFactory(void);

    // RVA: 0x1614 | Ordinal: 5653
        void registerEditor(int, class QItemEditorCreatorBase *);

    // RVA: 0x18FF | Ordinal: 6400
        void setDefaultFactory(class QItemEditorFactory *);

    // RVA: 0x2279 | Ordinal: 8826
        void valuePropertyName(int) const;

    // RVA: 0x21C | Ordinal: 541
        void _QItemEditorFactory(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QITEMEDITORFACTORY_HPP
