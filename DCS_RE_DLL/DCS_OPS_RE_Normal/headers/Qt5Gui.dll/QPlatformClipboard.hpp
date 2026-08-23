#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformClipboard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformClipboard
{
public:

    // RVA: 0x234 | Ordinal: 565
        void QPlatformClipboard(void);

    // RVA: 0xF85 | Ordinal: 3974
        void emitChanged(enum QClipboard::Mode);

    // RVA: 0x52B5 | Ordinal: 21174
        void mimeData(enum QClipboard::Mode);

    // RVA: 0x53CF | Ordinal: 21456
        void ownsMode(enum QClipboard::Mode) const;

    // RVA: 0x5A6B | Ordinal: 23148
        void setMimeData(class QMimeData *, enum QClipboard::Mode);

    // RVA: 0x5E65 | Ordinal: 24166
        void supportsMode(enum QClipboard::Mode) const;

    // RVA: 0x4C5 | Ordinal: 1222
        void _QPlatformClipboard(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMCLIPBOARD_HPP
