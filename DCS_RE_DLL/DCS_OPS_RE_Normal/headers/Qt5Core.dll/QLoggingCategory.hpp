#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLoggingCategory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLoggingCategory
{
public:

    // RVA: 0x171 | Ordinal: 370
        void QLoggingCategory(char const *);

    // RVA: 0x172 | Ordinal: 371
        void QLoggingCategory(char const *, enum QtMsgType);

    // RVA: 0x98F | Ordinal: 2448
        void categoryName(void) const;

    // RVA: 0xC55 | Ordinal: 3158
        void defaultCategory(void);

    // RVA: 0xFEB | Ordinal: 4076
        void init(char const *, enum QtMsgType);

    // RVA: 0x103B | Ordinal: 4156
        void installFilter(void (__cdecl *)(class QLoggingCategory *)))(class QLoggingCategory *);

    // RVA: 0x109C | Ordinal: 4253
        void isCriticalEnabled(void) const;

    // RVA: 0x10A5 | Ordinal: 4262
        void isDebugEnabled(void) const;

    // RVA: 0x10DC | Ordinal: 4317
        void isEnabled(enum QtMsgType) const;

    // RVA: 0x1101 | Ordinal: 4354
        void isInfoEnabled(void) const;

    // RVA: 0x1221 | Ordinal: 4642
        void isWarningEnabled(void) const;

    // RVA: 0x67E | Ordinal: 1663
        void operator()(void);

    // RVA: 0x67F | Ordinal: 1664
        void operator()(void) const;

    // RVA: 0x198C | Ordinal: 6541
        void setEnabled(enum QtMsgType, bool);

    // RVA: 0x19CA | Ordinal: 6603
        void setFilterRules(class QString const &);

    // RVA: 0x331 | Ordinal: 818
        void _QLoggingCategory(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QLOGGINGCATEGORY_HPP
