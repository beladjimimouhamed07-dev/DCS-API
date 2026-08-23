#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformCursorImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformCursorImage
{
public:

    // RVA: 0x237 | Ordinal: 568
        void QPlatformCursorImage(class QPlatformCursorImage &&);

    // RVA: 0x238 | Ordinal: 569
        void QPlatformCursorImage(class QPlatformCursorImage const &);

    // RVA: 0x239 | Ordinal: 570
        void QPlatformCursorImage(unsigned char const *, unsigned char const *, int, int, int, int);

    // RVA: 0xCCB | Ordinal: 3276
        void createSystemCursor(int);

    // RVA: 0x4EBB | Ordinal: 20156
        void hotspot(void) const;

    // RVA: 0x4EDD | Ordinal: 20190
        void image(void);

    // RVA: 0x580F | Ordinal: 22544
        void set(class QImage const &, int, int);

    // RVA: 0x5810 | Ordinal: 22545
        void set(unsigned char const *, unsigned char const *, int, int, int, int);

    // RVA: 0x5811 | Ordinal: 22546
        void set(enum Qt::CursorShape);

    // RVA: 0x4C8 | Ordinal: 1225
        void _QPlatformCursorImage(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMCURSORIMAGE_HPP
