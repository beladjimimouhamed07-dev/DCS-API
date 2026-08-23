#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAccessibleCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessibleCache
{
public:

    // RVA: 0x64 | Ordinal: 101
        void QAccessibleCache(void);

    // RVA: 0x950 | Ordinal: 2385
        void acquireId(void) const;

    // RVA: 0xDE2 | Ordinal: 3555
        void deleteInterface(unsigned int, class QObject *);

    // RVA: 0x4ED6 | Ordinal: 20183
        void idForInterface(class QAccessibleInterface *) const;

    // RVA: 0x4F48 | Ordinal: 20297
        void insert(class QObject *, class QAccessibleInterface *) const;

    // RVA: 0x4F84 | Ordinal: 20357
        void instance(void);

    // RVA: 0x4F8D | Ordinal: 20366
        void interfaceForId(unsigned int) const;

    // RVA: 0x525F | Ordinal: 21088
        void metaObject(void) const;

    // RVA: 0x537F | Ordinal: 21376
        void objectDestroyed(class QObject *);

    // RVA: 0x5576 | Ordinal: 21879
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55BA | Ordinal: 21947
        void qt_metacast(char const *);

    // RVA: 0x5610 | Ordinal: 22033
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5F9B | Ordinal: 24476
        void tr(char const *, char const *, int);

    // RVA: 0x5FE2 | Ordinal: 24547
        void trUtf8(char const *, char const *, int);

    // RVA: 0x3FF | Ordinal: 1024
        void _QAccessibleCache(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QACCESSIBLECACHE_HPP
