#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QSessionManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSessionManager
{
public:

    // RVA: 0x2E5 | Ordinal: 742
        void QSessionManager(class QGuiApplication *, class QString &, class QString &);

    // RVA: 0x9CC | Ordinal: 2509
        void allowsErrorInteraction(void);

    // RVA: 0x9CE | Ordinal: 2511
        void allowsInteraction(void);

    // RVA: 0xB44 | Ordinal: 2885
        void cancel(void);

    // RVA: 0xD7A | Ordinal: 3451
        void d_func(void);

    // RVA: 0xD7B | Ordinal: 3452
        void d_func(void) const;

    // RVA: 0xE63 | Ordinal: 3684
        void discardCommand(void) const;

    // RVA: 0x5061 | Ordinal: 20578
        void isPhase2(void) const;

    // RVA: 0x5293 | Ordinal: 21140
        void metaObject(void) const;

    // RVA: 0x55AA | Ordinal: 21931
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55EE | Ordinal: 21999
        void qt_metacast(char const *);

    // RVA: 0x5645 | Ordinal: 22086
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56BE | Ordinal: 22207
        void release(void);

    // RVA: 0x570B | Ordinal: 22284
        void requestPhase2(void);

    // RVA: 0x574F | Ordinal: 22352
        void restartCommand(void) const;

    // RVA: 0x5751 | Ordinal: 22354
        void restartHint(void) const;

    // RVA: 0x580B | Ordinal: 22540
        void sessionId(void) const;

    // RVA: 0x580E | Ordinal: 22543
        void sessionKey(void) const;

    // RVA: 0x594C | Ordinal: 22861
        void setDiscardCommand(class QStringList const &);

    // RVA: 0x5A4D | Ordinal: 23118
        void setManagerProperty(class QString const &, class QString const &);

    // RVA: 0x5A4E | Ordinal: 23119
        void setManagerProperty(class QString const &, class QStringList const &);

    // RVA: 0x5B43 | Ordinal: 23364
        void setRestartCommand(class QStringList const &);

    // RVA: 0x5B45 | Ordinal: 23366
        void setRestartHint(enum QSessionManager::RestartHint);

    // RVA: 0x5FD1 | Ordinal: 24530
        void tr(char const *, char const *, int);

    // RVA: 0x6018 | Ordinal: 24601
        void trUtf8(char const *, char const *, int);

    // RVA: 0x511 | Ordinal: 1298
        void _QSessionManager(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSESSIONMANAGER_HPP
