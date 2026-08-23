#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextEngine
{
public:

    // RVA: 0x34D | Ordinal: 846
        void QTextEngine(class QTextEngine const &);

    // RVA: 0x34E | Ordinal: 847
        void QTextEngine(class QString const &, class QFont const &);

    // RVA: 0x34F | Ordinal: 848
        void QTextEngine(void);

    // RVA: 0x980 | Ordinal: 2433
        void addItemDecoration(class QPainter *, class QLineF const &, class QVector<struct QTextEngine::ItemDecoration> *);

    // RVA: 0x985 | Ordinal: 2438
        void addOverline(class QPainter *, class QLineF const &);

    // RVA: 0x992 | Ordinal: 2451
        void addRequiredBoundaries(void) const;

    // RVA: 0x9A1 | Ordinal: 2466
        void addStrikeOut(class QPainter *, class QLineF const &);

    // RVA: 0x9A7 | Ordinal: 2472
        void addUnderline(class QPainter *, class QLineF const &);

    // RVA: 0x9B3 | Ordinal: 2484
        void adjustUnderlines(struct QTextEngine::ItemDecoration *, struct QTextEngine::ItemDecoration *, double, double);

    // RVA: 0x9B4 | Ordinal: 2485
        void adjustUnderlines(void);

    // RVA: 0x9BC | Ordinal: 2493
        void alignLine(struct QScriptLine const &);

    // RVA: 0xA30 | Ordinal: 2609
        void atWordSeparator(int) const;

    // RVA: 0xA38 | Ordinal: 2617
        void attributes(void) const;

    // RVA: 0xA41 | Ordinal: 2626
        void availableGlyphs(struct QScriptItem const *) const;

    // RVA: 0xA83 | Ordinal: 2692
        void beginningOfLine(int);

    // RVA: 0xA86 | Ordinal: 2695
        void bidiReorder(int, unsigned char const *, int *);

    // RVA: 0xAE8 | Ordinal: 2793
        void boundingBox(int, int) const;

    // RVA: 0xB36 | Ordinal: 2871
        void calculateTabWidth(int, struct QFixed) const;

    // RVA: 0xBB0 | Ordinal: 2993
        void clearDecorations(void);

    // RVA: 0xBBA | Ordinal: 3003
        void clearLineData(void);

    // RVA: 0xE7B | Ordinal: 3708
        void docLayout(void) const;

    // RVA: 0xEB3 | Ordinal: 3764
        void drawDecorations(class QPainter *);

    // RVA: 0xED5 | Ordinal: 3798
        void drawItemDecorationList(class QPainter *, class QVector<struct QTextEngine::ItemDecoration> const &);

    // RVA: 0xF7F | Ordinal: 3968
        void elidedText(enum Qt::TextElideMode, struct QFixed const &, int, int, int) const;

    // RVA: 0xF9B | Ordinal: 3996
        void enableDelayDecorations(bool);

    // RVA: 0xFBC | Ordinal: 4029
        void endOfLine(int);

    // RVA: 0xFDA | Ordinal: 4059
        void ensureSpace(int) const;

    // RVA: 0x107A | Ordinal: 4219
        void findItem(int, int) const;

    // RVA: 0x10BB | Ordinal: 4284
        void font(struct QScriptItem const &) const;

    // RVA: 0x10BC | Ordinal: 4285
        void font(void) const;

    // RVA: 0x10C9 | Ordinal: 4298
        void fontEngine(struct QScriptItem const &, struct QFixed *, struct QFixed *, struct QFixed *) const;

    // RVA: 0x10FB | Ordinal: 4348
        void format(struct QScriptItem const *) const;

    // RVA: 0x1106 | Ordinal: 4359
        void formatCollection(void) const;

    // RVA: 0x1108 | Ordinal: 4361
        void formatIndex(struct QScriptItem const *) const;

    // RVA: 0x110D | Ordinal: 4366
        void formats(void) const;

    // RVA: 0x1125 | Ordinal: 4390
        void freeMemory(void);

    // RVA: 0x119A | Ordinal: 4507
        void getClusterLength(unsigned short *, struct QCharAttributes const *, int, int, int, int *);

    // RVA: 0x4E6A | Ordinal: 20075
        void hasFormats(void) const;

    // RVA: 0x4EFB | Ordinal: 20220
        void indexFormats(void);

    // RVA: 0x4F08 | Ordinal: 20233
        void init(class QTextEngine *);

    // RVA: 0x4F7E | Ordinal: 20351
        void insertionPointsForLine(int);

    // RVA: 0x4FA8 | Ordinal: 20393
        void invalidate(void);

    // RVA: 0x5074 | Ordinal: 20597
        void isRightToLeft(void) const;

    // RVA: 0x50D1 | Ordinal: 20690
        void itemize(void) const;

    // RVA: 0x50E7 | Ordinal: 20712
        void justify(struct QScriptLine const &);

    // RVA: 0x5132 | Ordinal: 20787
        void leadingSpaceWidth(struct QScriptLine const &);

    // RVA: 0x5143 | Ordinal: 20804
        void length(int) const;

    // RVA: 0x5144 | Ordinal: 20805
        void length(struct QScriptItem const *) const;

    // RVA: 0x516A | Ordinal: 20843
        void lineNumberForTextPosition(int);

    // RVA: 0x51A6 | Ordinal: 20903
        void logClusters(struct QScriptItem const *) const;

    // RVA: 0x534C | Ordinal: 21325
        void nextLogicalPosition(int) const;

    // RVA: 0x538F | Ordinal: 21392
        void offsetInLigature(struct QScriptItem const *, int, int, int);

    // RVA: 0x54A3 | Ordinal: 21668
        void positionAfterVisualMovement(int, enum QTextCursor::MoveOperation);

    // RVA: 0x54A5 | Ordinal: 21670
        void positionInLigature(struct QScriptItem const *, int, struct QFixed, struct QFixed, int, bool);

    // RVA: 0x54AE | Ordinal: 21679
        void preeditAreaPosition(void) const;

    // RVA: 0x54B0 | Ordinal: 21681
        void preeditAreaText(void) const;

    // RVA: 0x54BE | Ordinal: 21695
        void previousLogicalPosition(int) const;

    // RVA: 0x571B | Ordinal: 22300
        void resetFontEngineCache(void);

    // RVA: 0x573A | Ordinal: 22331
        void resolveFormats(void) const;

    // RVA: 0x5883 | Ordinal: 22660
        void setBoundary(int) const;

    // RVA: 0x59C3 | Ordinal: 22980
        void setFormats(class QVector<struct QTextLayout::FormatRange> const &);

    // RVA: 0x5B12 | Ordinal: 23315
        void setPreeditArea(int, class QString const &);

    // RVA: 0x5CF8 | Ordinal: 23801
        void shape(int) const;

    // RVA: 0x5CFA | Ordinal: 23803
        void shapeLine(struct QScriptLine const &);

    // RVA: 0x5CFB | Ordinal: 23804
        void shapeText(int) const;

    // RVA: 0x5CFC | Ordinal: 23805
        void shapeTextWithHarfbuzz(struct QScriptItem const &, unsigned short const *, int, class QFontEngine *, class QVector<unsigned int> const &, bool) const;

    // RVA: 0x5CFD | Ordinal: 23806
        void shapeTextWithHarfbuzzNG(struct QScriptItem const &, unsigned short const *, int, class QFontEngine *, class QVector<unsigned int> const &, bool, bool) const;

    // RVA: 0x5CFE | Ordinal: 23807
        void shapedGlyphs(struct QScriptItem const *) const;

    // RVA: 0x5F2D | Ordinal: 24366
        void tightBoundingBox(int, int) const;

    // RVA: 0x60EE | Ordinal: 24815
        void validate(void) const;

    // RVA: 0x6138 | Ordinal: 24889
        void visualCursorMovement(void) const;

    // RVA: 0x6158 | Ordinal: 24921
        void width(int, int) const;

    // RVA: 0x535 | Ordinal: 1334
        void _QTextEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTENGINE_HPP
