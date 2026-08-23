#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMetaCallEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMetaCallEvent
{
public:

    // RVA: 0x178 | Ordinal: 377
        void QMetaCallEvent(class QMetaCallEvent const &);

    // RVA: 0x179 | Ordinal: 378
        void QMetaCallEvent(unsigned short, unsigned short, void (__cdecl *)(class QObject *, enum QMetaObject::Call, int, void **), class QObject const *, int, void **, class QSemaphore *);

    // RVA: 0x17A | Ordinal: 379
        void QMetaCallEvent(unsigned short, unsigned short, void (__cdecl *)(class QObject *, enum QMetaObject::Call, int, void **), class QObject const *, int, int);

    // RVA: 0x17B | Ordinal: 380
        void QMetaCallEvent(class QtPrivate::QSlotObjectBase *, class QObject const *, int, int);

    // RVA: 0x17C | Ordinal: 381
        void QMetaCallEvent(class QtPrivate::QSlotObjectBase *, class QObject const *, int, void **, class QSemaphore *);

    // RVA: 0x832 | Ordinal: 2099
        void allocArgs(void);

    // RVA: 0x8A1 | Ordinal: 2210
        void args(void);

    // RVA: 0x8A2 | Ordinal: 2211
        void args(void) const;

    // RVA: 0xF9E | Ordinal: 3999
        void id(void) const;

    // RVA: 0x14E3 | Ordinal: 5348
        void placeMetaCall(class QObject *);

    // RVA: 0x1F4A | Ordinal: 8011
        void types(void);

    // RVA: 0x1F4B | Ordinal: 8012
        void types(void) const;

    // RVA: 0x333 | Ordinal: 820
        void _QMetaCallEvent(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMETACALLEVENT_HPP
