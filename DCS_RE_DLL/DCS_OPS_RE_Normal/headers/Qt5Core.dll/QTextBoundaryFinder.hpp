#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTextBoundaryFinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextBoundaryFinder
{
public:

    // RVA: 0x225 | Ordinal: 550
        void QTextBoundaryFinder(class QTextBoundaryFinder const &);

    // RVA: 0x226 | Ordinal: 551
        void QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, class QString const &);

    // RVA: 0x227 | Ordinal: 552
        void QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, class QChar const *, int, unsigned char *, int);

    // RVA: 0x228 | Ordinal: 553
        void QTextBoundaryFinder(void);

    // RVA: 0x927 | Ordinal: 2344
        void boundaryReasons(void) const;

    // RVA: 0x107C | Ordinal: 4221
        void isAtBoundary(void) const;

    // RVA: 0x1212 | Ordinal: 4627
        void isValid(void) const;

    // RVA: 0x1501 | Ordinal: 5378
        void position(void) const;

    // RVA: 0x1A54 | Ordinal: 6741
        void setPosition(int);

    // RVA: 0x1C49 | Ordinal: 7242
        void string(void) const;

    // RVA: 0x1D37 | Ordinal: 7480
        void toEnd(void);

    // RVA: 0x1D9E | Ordinal: 7583
        void toNextBoundary(void);

    // RVA: 0x1DA9 | Ordinal: 7594
        void toPreviousBoundary(void);

    // RVA: 0x1DC4 | Ordinal: 7621
        void toStart(void);

    // RVA: 0x1F40 | Ordinal: 8001
        void type(void) const;

    // RVA: 0x36A | Ordinal: 875
        void _QTextBoundaryFinder(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEXTBOUNDARYFINDER_HPP
