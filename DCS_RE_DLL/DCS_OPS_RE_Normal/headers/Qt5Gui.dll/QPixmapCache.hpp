#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPixmapCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPixmapCache
{
public:

    // RVA: 0xB30 | Ordinal: 2865
        void cacheLimit(void);

    // RVA: 0xBA4 | Ordinal: 2981
        void clear(void);

    // RVA: 0x1065 | Ordinal: 4198
        void find(class QString const &);

    // RVA: 0x1066 | Ordinal: 4199
        void find(class QPixmapCache::Key const &, class QPixmap *);

    // RVA: 0x1067 | Ordinal: 4200
        void find(class QString const &, class QPixmap &);

    // RVA: 0x1068 | Ordinal: 4201
        void find(class QString const &, class QPixmap *);

    // RVA: 0x10A3 | Ordinal: 4260
        void flushDetachedPixmaps(void);

    // RVA: 0x4F4A | Ordinal: 20299
        void insert(class QPixmap const &);

    // RVA: 0x4F4B | Ordinal: 20300
        void insert(class QString const &, class QPixmap const &);

    // RVA: 0x56C3 | Ordinal: 22212
        void remove(class QPixmapCache::Key const &);

    // RVA: 0x56C4 | Ordinal: 22213
        void remove(class QString const &);

    // RVA: 0x5701 | Ordinal: 22274
        void replace(class QPixmapCache::Key const &, class QPixmap const &);

    // RVA: 0x5890 | Ordinal: 22673
        void setCacheLimit(int);

    // RVA: 0x5F93 | Ordinal: 24468
        void totalUsed(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPIXMAPCACHE_HPP
