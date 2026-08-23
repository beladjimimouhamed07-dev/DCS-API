#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformCursor
{
public:

    // RVA: 0x236 | Ordinal: 567
        void QPlatformCursor(void);

    // RVA: 0xB53 | Ordinal: 2900
        void capabilities(void);

    // RVA: 0xBBB | Ordinal: 3004
        void clearOverrideCursor(void);

    // RVA: 0x547B | Ordinal: 21628
        void pointerEvent(class QMouseEvent const &);

    // RVA: 0x5492 | Ordinal: 21651
        void pos(void) const;

    // RVA: 0x5896 | Ordinal: 22679
        void setCapabilities(class QFlags<enum QPlatformCursor::Capability>);

    // RVA: 0x5898 | Ordinal: 22681
        void setCapability(enum QPlatformCursor::Capability);

    // RVA: 0x5AC7 | Ordinal: 23240
        void setOverrideCursor(class QCursor const &);

    // RVA: 0x5B07 | Ordinal: 23304
        void setPos(class QPoint const &);

    // RVA: 0x5D39 | Ordinal: 23866
        void size(void) const;

    // RVA: 0x4C7 | Ordinal: 1224
        void _QPlatformCursor(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMCURSOR_HPP
