#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontCache
{
public:

    // RVA: 0x100 | Ordinal: 257
        void QFontCache(void);

    // RVA: 0xB99 | Ordinal: 2970
        void cleanup(void);

    // RVA: 0xBA0 | Ordinal: 2977
        void clear(void);

    // RVA: 0xDC0 | Ordinal: 3521
        void decreaseCache(void);

    // RVA: 0xDC1 | Ordinal: 3522
        void decreaseCost(unsigned int);

    // RVA: 0x1075 | Ordinal: 4214
        void findEngine(struct QFontCache::Key const &);

    // RVA: 0x1076 | Ordinal: 4215
        void findEngineData(struct QFontDef const &) const;

    // RVA: 0x4ECE | Ordinal: 20175
        void id(void) const;

    // RVA: 0x4EF4 | Ordinal: 20213
        void increaseCost(unsigned int);

    // RVA: 0x4F5B | Ordinal: 20316
        void insertEngine(struct QFontCache::Key const &, class QFontEngine *, bool);

    // RVA: 0x4F5C | Ordinal: 20317
        void insertEngineData(struct QFontDef const &, class QFontEngineData *);

    // RVA: 0x4F85 | Ordinal: 20358
        void instance(void);

    // RVA: 0x5F30 | Ordinal: 24369
        void timerEvent(class QTimerEvent *);

    // RVA: 0x60C2 | Ordinal: 24771
        void updateHitCountAndTimeStamp(struct QFontCache::Engine &);

    // RVA: 0x437 | Ordinal: 1080
        void _QFontCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTCACHE_HPP
