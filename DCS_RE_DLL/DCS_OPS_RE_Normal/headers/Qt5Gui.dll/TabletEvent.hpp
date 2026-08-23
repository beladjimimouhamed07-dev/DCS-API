#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: TabletEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QWindowSystemInterfacePrivate {

class TabletEvent
{
public:

    // RVA: 0x3DD | Ordinal: 990
        void TabletEvent(class QWindowSystemInterfacePrivate::TabletEvent &&);

    // RVA: 0x3DE | Ordinal: 991
        void TabletEvent(class QWindowSystemInterfacePrivate::TabletEvent const &);

    // RVA: 0x3DF | Ordinal: 992
        void TabletEvent(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, int, int, class QFlags<enum Qt::MouseButton>, double, int, int, double, double, int, __int64, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x5AFC | Ordinal: 23293
        void setPlatformSynthesizesMouse(bool);

    // RVA: 0x55C | Ordinal: 1373
        void _TabletEvent(void);
};

} // namespace QWindowSystemInterfacePrivate

// DCS_OPS_RE_QT5GUI.DLL_TABLETEVENT_HPP
