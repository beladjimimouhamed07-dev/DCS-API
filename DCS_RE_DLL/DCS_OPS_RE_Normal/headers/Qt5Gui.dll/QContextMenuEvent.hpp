#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QContextMenuEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QContextMenuEvent
{
public:

    // RVA: 0xCE | Ordinal: 207
        void QContextMenuEvent(class QContextMenuEvent const &);

    // RVA: 0xCF | Ordinal: 208
        void QContextMenuEvent(enum QContextMenuEvent::Reason, class QPoint const &, class QPoint const &);

    // RVA: 0xD0 | Ordinal: 209
        void QContextMenuEvent(enum QContextMenuEvent::Reason, class QPoint const &, class QPoint const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0xD1 | Ordinal: 210
        void QContextMenuEvent(enum QContextMenuEvent::Reason, class QPoint const &);

    // RVA: 0x4DD8 | Ordinal: 19929
        void globalPos(void) const;

    // RVA: 0x4DE5 | Ordinal: 19942
        void globalX(void) const;

    // RVA: 0x4DEB | Ordinal: 19948
        void globalY(void) const;

    // RVA: 0x5488 | Ordinal: 21641
        void pos(void) const;

    // RVA: 0x567B | Ordinal: 22140
        void reason(void) const;

    // RVA: 0x61B6 | Ordinal: 25015
        void x(void) const;

    // RVA: 0x61CC | Ordinal: 25037
        void y(void) const;

    // RVA: 0x424 | Ordinal: 1061
        void _QContextMenuEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QCONTEXTMENUEVENT_HPP
