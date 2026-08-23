#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformSessionManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformSessionManager
{
public:

    // RVA: 0x253 | Ordinal: 596
        void QPlatformSessionManager(class QString const &, class QString const &);

    // RVA: 0x9CB | Ordinal: 2508
        void allowsErrorInteraction(void);

    // RVA: 0x9CD | Ordinal: 2510
        void allowsInteraction(void);

    // RVA: 0x9F5 | Ordinal: 2550
        void appCommitData(void);

    // RVA: 0x9F6 | Ordinal: 2551
        void appSaveState(void);

    // RVA: 0xB43 | Ordinal: 2884
        void cancel(void);

    // RVA: 0xE62 | Ordinal: 3683
        void discardCommand(void) const;

    // RVA: 0x5060 | Ordinal: 20577
        void isPhase2(void) const;

    // RVA: 0x56BC | Ordinal: 22205
        void release(void);

    // RVA: 0x570A | Ordinal: 22283
        void requestPhase2(void);

    // RVA: 0x574E | Ordinal: 22351
        void restartCommand(void) const;

    // RVA: 0x5750 | Ordinal: 22353
        void restartHint(void) const;

    // RVA: 0x580A | Ordinal: 22539
        void sessionId(void) const;

    // RVA: 0x580D | Ordinal: 22542
        void sessionKey(void) const;

    // RVA: 0x594B | Ordinal: 22860
        void setDiscardCommand(class QStringList const &);

    // RVA: 0x5A4B | Ordinal: 23116
        void setManagerProperty(class QString const &, class QString const &);

    // RVA: 0x5A4C | Ordinal: 23117
        void setManagerProperty(class QString const &, class QStringList const &);

    // RVA: 0x5B42 | Ordinal: 23363
        void setRestartCommand(class QStringList const &);

    // RVA: 0x5B44 | Ordinal: 23365
        void setRestartHint(enum QSessionManager::RestartHint);

    // RVA: 0x4DE | Ordinal: 1247
        void _QPlatformSessionManager(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMSESSIONMANAGER_HPP
