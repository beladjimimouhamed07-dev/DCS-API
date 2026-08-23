#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QObjectCleanupHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QObjectCleanupHandler
{
public:

    // RVA: 0x1A1 | Ordinal: 418
        void QObjectCleanupHandler(void);

    // RVA: 0x7D4 | Ordinal: 2005
        void add(class QObject *);

    // RVA: 0x9E4 | Ordinal: 2533
        void clear(void);

    // RVA: 0x10D0 | Ordinal: 4305
        void isEmpty(void) const;

    // RVA: 0x1362 | Ordinal: 4963
        void metaObject(void) const;

    // RVA: 0x146A | Ordinal: 5227
        void objectDestroyed(class QObject *);

    // RVA: 0x164A | Ordinal: 5707
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1687 | Ordinal: 5768
        void qt_metacast(char const *);

    // RVA: 0x16CE | Ordinal: 5839
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17B6 | Ordinal: 6071
        void remove(class QObject *);

    // RVA: 0x1E93 | Ordinal: 7828
        void tr(char const *, char const *, int);

    // RVA: 0x1ED2 | Ordinal: 7891
        void trUtf8(char const *, char const *, int);

    // RVA: 0x33F | Ordinal: 832
        void _QObjectCleanupHandler(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QOBJECTCLEANUPHANDLER_HPP
