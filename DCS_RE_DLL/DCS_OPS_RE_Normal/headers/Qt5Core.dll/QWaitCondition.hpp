#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QWaitCondition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWaitCondition
{
public:

    // RVA: 0x28F | Ordinal: 656
        void QWaitCondition(void);

    // RVA: 0x1450 | Ordinal: 5201
        void notify_all(void);

    // RVA: 0x1452 | Ordinal: 5203
        void notify_one(void);

    // RVA: 0x1FDD | Ordinal: 8158
        void wait(class QMutex *, unsigned long);

    // RVA: 0x1FDE | Ordinal: 8159
        void wait(class QMutex *, class QDeadlineTimer);

    // RVA: 0x1FDF | Ordinal: 8160
        void wait(class QReadWriteLock *, unsigned long);

    // RVA: 0x1FE0 | Ordinal: 8161
        void wait(class QReadWriteLock *, class QDeadlineTimer);

    // RVA: 0x1FF4 | Ordinal: 8181
        void wakeAll(void);

    // RVA: 0x1FF5 | Ordinal: 8182
        void wakeOne(void);

    // RVA: 0x37F | Ordinal: 896
        void _QWaitCondition(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QWAITCONDITION_HPP
