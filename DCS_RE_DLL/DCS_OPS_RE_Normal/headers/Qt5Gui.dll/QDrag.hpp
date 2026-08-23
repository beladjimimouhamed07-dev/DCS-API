#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QDrag
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDrag
{
public:

    // RVA: 0xE6 | Ordinal: 231
        void QDrag(class QObject *);

    // RVA: 0x952 | Ordinal: 2387
        void actionChanged(enum Qt::DropAction);

    // RVA: 0xB42 | Ordinal: 2883
        void cancel(void);

    // RVA: 0xD1D | Ordinal: 3358
        void d_func(void);

    // RVA: 0xD1E | Ordinal: 3359
        void d_func(void) const;

    // RVA: 0xDC2 | Ordinal: 3523
        void defaultAction(void) const;

    // RVA: 0xE9B | Ordinal: 3740
        void dragCursor(enum Qt::DropAction) const;

    // RVA: 0xFF5 | Ordinal: 4086
        void exec(class QFlags<enum Qt::DropAction>);

    // RVA: 0xFF6 | Ordinal: 4087
        void exec(class QFlags<enum Qt::DropAction>, enum Qt::DropAction);

    // RVA: 0x4EBA | Ordinal: 20155
        void hotSpot(void) const;

    // RVA: 0x5263 | Ordinal: 21092
        void metaObject(void) const;

    // RVA: 0x52B3 | Ordinal: 21172
        void mimeData(void) const;

    // RVA: 0x545D | Ordinal: 21598
        void pixmap(void) const;

    // RVA: 0x557A | Ordinal: 21883
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55BE | Ordinal: 21951
        void qt_metacast(char const *);

    // RVA: 0x5614 | Ordinal: 22037
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5957 | Ordinal: 22872
        void setDragCursor(class QPixmap const &, enum Qt::DropAction);

    // RVA: 0x59EF | Ordinal: 23024
        void setHotSpot(class QPoint const &);

    // RVA: 0x5A6A | Ordinal: 23147
        void setMimeData(class QMimeData *);

    // RVA: 0x5AFA | Ordinal: 23291
        void setPixmap(class QPixmap const &);

    // RVA: 0x5D5D | Ordinal: 23902
        void source(void) const;

    // RVA: 0x5D81 | Ordinal: 23938
        void start(class QFlags<enum Qt::DropAction>);

    // RVA: 0x5E50 | Ordinal: 24145
        void supportedActions(void) const;

    // RVA: 0x5EC7 | Ordinal: 24264
        void target(void) const;

    // RVA: 0x5ECA | Ordinal: 24267
        void targetChanged(class QObject *);

    // RVA: 0x5F9F | Ordinal: 24480
        void tr(char const *, char const *, int);

    // RVA: 0x5FE6 | Ordinal: 24551
        void trUtf8(char const *, char const *, int);

    // RVA: 0x42B | Ordinal: 1068
        void _QDrag(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QDRAG_HPP
