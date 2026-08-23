#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QEventDispatcherWin32Private
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QEventDispatcherWin32Private
{
public:

    // RVA: 0xEF | Ordinal: 240
        void QEventDispatcherWin32Private(void);

    // RVA: 0x7CB | Ordinal: 1996
        void activateEventNotifier(class QWinEventNotifier *);

    // RVA: 0xCC5 | Ordinal: 3270
        void doWsaAsyncSelect(int, long);

    // RVA: 0xF15 | Ordinal: 3862
        void get(class QEventDispatcherWin32 *);

    // RVA: 0x1505 | Ordinal: 5382
        void postActivateSocketNotifiers(void);

    // RVA: 0x15F2 | Ordinal: 5619
        void q_func(void);

    // RVA: 0x15F3 | Ordinal: 5620
        void q_func(void) const;

    // RVA: 0x1784 | Ordinal: 6021
        void registerTimer(struct WinTimerInfo *);

    // RVA: 0x1918 | Ordinal: 6425
        void sendTimerEvent(int);

    // RVA: 0x1F7A | Ordinal: 8059
        void unregisterTimer(struct WinTimerInfo *);

    // RVA: 0x30B | Ordinal: 780
        void _QEventDispatcherWin32Private(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QEVENTDISPATCHERWIN32PRIVATE_HPP
