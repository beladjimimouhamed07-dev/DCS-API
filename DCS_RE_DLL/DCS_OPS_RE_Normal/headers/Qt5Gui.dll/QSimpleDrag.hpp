#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QSimpleDrag
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSimpleDrag
{
public:

    // RVA: 0x303 | Ordinal: 772
        void QSimpleDrag(void);

    // RVA: 0xB45 | Ordinal: 2886
        void cancel(void);

    // RVA: 0xF65 | Ordinal: 3942
        void drop(class QPoint const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x5304 | Ordinal: 21253
        void move(class QPoint const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x5D85 | Ordinal: 23942
        void startDrag(void);

    // RVA: 0x51A | Ordinal: 1307
        void _QSimpleDrag(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSIMPLEDRAG_HPP
