#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformBackingStore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformBackingStore
{
public:

    // RVA: 0x232 | Ordinal: 563
        void QPlatformBackingStore(class QPlatformBackingStore const &);

    // RVA: 0x233 | Ordinal: 564
        void QPlatformBackingStore(class QWindow *);

    // RVA: 0xA5C | Ordinal: 2653
        void backingStore(void) const;

    // RVA: 0xA81 | Ordinal: 2690
        void beginPaint(class QRegion const &);

    // RVA: 0xC25 | Ordinal: 3110
        void composeAndFlush(class QWindow *, class QRegion const &, class QPoint const &, class QPlatformTextureList *, bool);

    // RVA: 0xFC1 | Ordinal: 4034
        void endPaint(void);

    // RVA: 0x4E11 | Ordinal: 19986
        void graphicsBuffer(void) const;

    // RVA: 0x57E3 | Ordinal: 22500
        void scroll(class QRegion const &, int, int);

    // RVA: 0x585E | Ordinal: 22623
        void setBackingStore(class QBackingStore *);

    // RVA: 0x5F4D | Ordinal: 24398
        void toImage(void) const;

    // RVA: 0x5F72 | Ordinal: 24435
        void toTexture(class QRegion const &, class QSize *, class QFlags<enum QPlatformBackingStore::TextureFlag> *) const;

    // RVA: 0x6169 | Ordinal: 24938
        void window(void) const;

    // RVA: 0x4C4 | Ordinal: 1221
        void _QPlatformBackingStore(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMBACKINGSTORE_HPP
