#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QImagePixmapCleanupHooks
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QImagePixmapCleanupHooks
{
public:

    // RVA: 0x145 | Ordinal: 326
        void QImagePixmapCleanupHooks(class QImagePixmapCleanupHooks &&);

    // RVA: 0x146 | Ordinal: 327
        void QImagePixmapCleanupHooks(class QImagePixmapCleanupHooks const &);

    // RVA: 0x147 | Ordinal: 328
        void QImagePixmapCleanupHooks(void);

    // RVA: 0x97E | Ordinal: 2431
        void addImageHook(void (__cdecl *)(__int64));

    // RVA: 0x98A | Ordinal: 2443
        void addPlatformPixmapDestructionHook(void (__cdecl *)(class QPlatformPixmap *));

    // RVA: 0x98B | Ordinal: 2444
        void addPlatformPixmapModificationHook(void (__cdecl *)(class QPlatformPixmap *));

    // RVA: 0xF98 | Ordinal: 3993
        void enableCleanupHooks(class QImage const &);

    // RVA: 0xF99 | Ordinal: 3994
        void enableCleanupHooks(class QPixmap const &);

    // RVA: 0xF9A | Ordinal: 3995
        void enableCleanupHooks(class QPlatformPixmap *);

    // RVA: 0xFFA | Ordinal: 4091
        void executeImageHooks(__int64);

    // RVA: 0xFFB | Ordinal: 4092
        void executePlatformPixmapDestructionHooks(class QPlatformPixmap *);

    // RVA: 0xFFC | Ordinal: 4093
        void executePlatformPixmapModificationHooks(class QPlatformPixmap *);

    // RVA: 0x4F88 | Ordinal: 20361
        void instance(void);

    // RVA: 0x5030 | Ordinal: 20529
        void isImageCached(class QImage const &);

    // RVA: 0x5062 | Ordinal: 20579
        void isPixmapCached(class QPixmap const &);

    // RVA: 0x56DA | Ordinal: 22235
        void removeImageHook(void (__cdecl *)(__int64));

    // RVA: 0x56DF | Ordinal: 22240
        void removePlatformPixmapDestructionHook(void (__cdecl *)(class QPlatformPixmap *));

    // RVA: 0x56E0 | Ordinal: 22241
        void removePlatformPixmapModificationHook(void (__cdecl *)(class QPlatformPixmap *));

    // RVA: 0x454 | Ordinal: 1109
        void _QImagePixmapCleanupHooks(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QIMAGEPIXMAPCLEANUPHOOKS_HPP
