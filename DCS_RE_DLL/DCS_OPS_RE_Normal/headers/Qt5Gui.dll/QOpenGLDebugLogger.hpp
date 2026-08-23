#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLDebugLogger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLDebugLogger
{
public:

    // RVA: 0x198 | Ordinal: 409
        void QOpenGLDebugLogger(class QObject *);

    // RVA: 0xD37 | Ordinal: 3384
        void d_func(void);

    // RVA: 0xD38 | Ordinal: 3385
        void d_func(void) const;

    // RVA: 0xE60 | Ordinal: 3681
        void disableMessages(class QVector<unsigned int> const &, class QFlags<enum QOpenGLDebugMessage::Source>, class QFlags<enum QOpenGLDebugMessage::Type>);

    // RVA: 0xE61 | Ordinal: 3682
        void disableMessages(class QFlags<enum QOpenGLDebugMessage::Source>, class QFlags<enum QOpenGLDebugMessage::Type>, class QFlags<enum QOpenGLDebugMessage::Severity>);

    // RVA: 0xF9D | Ordinal: 3998
        void enableMessages(class QVector<unsigned int> const &, class QFlags<enum QOpenGLDebugMessage::Source>, class QFlags<enum QOpenGLDebugMessage::Type>);

    // RVA: 0xF9E | Ordinal: 3999
        void enableMessages(class QFlags<enum QOpenGLDebugMessage::Source>, class QFlags<enum QOpenGLDebugMessage::Type>, class QFlags<enum QOpenGLDebugMessage::Severity>);

    // RVA: 0x4F11 | Ordinal: 20242
        void initialize(void);

    // RVA: 0x5048 | Ordinal: 20553
        void isLogging(void) const;

    // RVA: 0x51A7 | Ordinal: 20904
        void logMessage(class QOpenGLDebugMessage const &);

    // RVA: 0x51A9 | Ordinal: 20906
        void loggedMessages(void) const;

    // RVA: 0x51AA | Ordinal: 20907
        void loggingMode(void) const;

    // RVA: 0x5248 | Ordinal: 21065
        void maximumMessageLength(void) const;

    // RVA: 0x525B | Ordinal: 21084
        void messageLogged(class QOpenGLDebugMessage const &);

    // RVA: 0x5273 | Ordinal: 21108
        void metaObject(void) const;

    // RVA: 0x5480 | Ordinal: 21633
        void popGroup(void);

    // RVA: 0x54FF | Ordinal: 21760
        void pushGroup(class QString const &, unsigned int, enum QOpenGLDebugMessage::Source);

    // RVA: 0x558A | Ordinal: 21899
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55CE | Ordinal: 21967
        void qt_metacast(char const *);

    // RVA: 0x5624 | Ordinal: 22053
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5D8B | Ordinal: 23948
        void startLogging(enum QOpenGLDebugLogger::LoggingMode);

    // RVA: 0x5E0F | Ordinal: 24080
        void stopLogging(void);

    // RVA: 0x5FB1 | Ordinal: 24498
        void tr(char const *, char const *, int);

    // RVA: 0x5FF8 | Ordinal: 24569
        void trUtf8(char const *, char const *, int);

    // RVA: 0x473 | Ordinal: 1140
        void _QOpenGLDebugLogger(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLDEBUGLOGGER_HPP
