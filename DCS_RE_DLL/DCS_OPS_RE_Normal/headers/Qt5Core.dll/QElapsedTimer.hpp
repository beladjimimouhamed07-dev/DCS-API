#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QElapsedTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QElapsedTimer
{
public:

    // RVA: 0xEA | Ordinal: 235
        void QElapsedTimer(void);

    // RVA: 0x9F9 | Ordinal: 2554
        void clockType(void);

    // RVA: 0xCEE | Ordinal: 3311
        void elapsed(void) const;

    // RVA: 0xF57 | Ordinal: 3928
        void hasExpired(__int64) const;

    // RVA: 0x105C | Ordinal: 4189
        void invalidate(void);

    // RVA: 0x1138 | Ordinal: 4409
        void isMonotonic(void);

    // RVA: 0x11FE | Ordinal: 4607
        void isValid(void) const;

    // RVA: 0x13F2 | Ordinal: 5107
        void msecsSinceReference(void) const;

    // RVA: 0x13F5 | Ordinal: 5110
        void msecsTo(class QElapsedTimer const &) const;

    // RVA: 0x1453 | Ordinal: 5204
        void nsecsElapsed(void) const;

    // RVA: 0x1877 | Ordinal: 6264
        void restart(void);

    // RVA: 0x18E9 | Ordinal: 6378
        void secsTo(class QElapsedTimer const &) const;

    // RVA: 0x1B9A | Ordinal: 7067
        void start(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QELAPSEDTIMER_HPP
