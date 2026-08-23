#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMessageLogger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMessageLogger
{
public:

    // RVA: 0x175 | Ordinal: 374
        void QMessageLogger(char const *, int, char const *, char const *);

    // RVA: 0x176 | Ordinal: 375
        void QMessageLogger(char const *, int, char const *);

    // RVA: 0x177 | Ordinal: 376
        void QMessageLogger(void);

    // RVA: 0xB4C | Ordinal: 2893
        void critical(class QLoggingCategory const &) const;

    // RVA: 0xB4D | Ordinal: 2894
        void critical(class QLoggingCategory const & (__cdecl *)(void)) const;

    // RVA: 0xB4E | Ordinal: 2895
        void critical(void) const;

    // RVA: 0xB4F | Ordinal: 2896
        void critical(class QLoggingCategory const &, char const *, ...) const;

    // RVA: 0xB50 | Ordinal: 2897
        void critical(class QLoggingCategory const & (__cdecl *)(void), char const *, ...) const;

    // RVA: 0xB51 | Ordinal: 2898
        void critical(char const *, ...) const;

    // RVA: 0xC3E | Ordinal: 3135
        void debug(class QLoggingCategory const &) const;

    // RVA: 0xC3F | Ordinal: 3136
        void debug(class QLoggingCategory const & (__cdecl *)(void)) const;

    // RVA: 0xC40 | Ordinal: 3137
        void debug(void) const;

    // RVA: 0xC41 | Ordinal: 3138
        void debug(class QLoggingCategory const &, char const *, ...) const;

    // RVA: 0xC42 | Ordinal: 3139
        void debug(class QLoggingCategory const & (__cdecl *)(void), char const *, ...) const;

    // RVA: 0xC43 | Ordinal: 3140
        void debug(char const *, ...) const;

    // RVA: 0xDF2 | Ordinal: 3571
        void fatal(char const *, ...) const;

    // RVA: 0xFE0 | Ordinal: 4065
        void info(class QLoggingCategory const &) const;

    // RVA: 0xFE1 | Ordinal: 4066
        void info(class QLoggingCategory const & (__cdecl *)(void)) const;

    // RVA: 0xFE2 | Ordinal: 4067
        void info(void) const;

    // RVA: 0xFE3 | Ordinal: 4068
        void info(class QLoggingCategory const &, char const *, ...) const;

    // RVA: 0xFE4 | Ordinal: 4069
        void info(class QLoggingCategory const & (__cdecl *)(void), char const *, ...) const;

    // RVA: 0xFE5 | Ordinal: 4070
        void info(char const *, ...) const;

    // RVA: 0x142D | Ordinal: 5166
        void noDebug(void) const;

    // RVA: 0x142E | Ordinal: 5167
        void noDebug(char const *, ...) const;

    // RVA: 0x1FF9 | Ordinal: 8186
        void warning(class QLoggingCategory const &) const;

    // RVA: 0x1FFA | Ordinal: 8187
        void warning(class QLoggingCategory const & (__cdecl *)(void)) const;

    // RVA: 0x1FFB | Ordinal: 8188
        void warning(void) const;

    // RVA: 0x1FFC | Ordinal: 8189
        void warning(class QLoggingCategory const &, char const *, ...) const;

    // RVA: 0x1FFD | Ordinal: 8190
        void warning(class QLoggingCategory const & (__cdecl *)(void), char const *, ...) const;

    // RVA: 0x1FFE | Ordinal: 8191
        void warning(char const *, ...) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QMESSAGELOGGER_HPP
