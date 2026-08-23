#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QCursor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCursor
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void QCursor(class QCursor &&);

    // RVA: 0xD3 | Ordinal: 212
        void QCursor(class QCursor const &);

    // RVA: 0xD4 | Ordinal: 213
        void QCursor(class QBitmap const &, class QBitmap const &, int, int);

    // RVA: 0xD5 | Ordinal: 214
        void QCursor(class QPixmap const &, int, int);

    // RVA: 0xD6 | Ordinal: 215
        void QCursor(enum Qt::CursorShape);

    // RVA: 0xD7 | Ordinal: 216
        void QCursor(void);

    // RVA: 0xA99 | Ordinal: 2714
        void bitmap(enum Qt::ReturnByValueConstant) const;

    // RVA: 0xA9A | Ordinal: 2715
        void bitmap(void) const;

    // RVA: 0x4EB9 | Ordinal: 20154
        void hotSpot(void) const;

    // RVA: 0x5226 | Ordinal: 21031
        void mask(enum Qt::ReturnByValueConstant) const;

    // RVA: 0x5227 | Ordinal: 21032
        void mask(void) const;

    // RVA: 0x545C | Ordinal: 21597
        void pixmap(void) const;

    // RVA: 0x5489 | Ordinal: 21642
        void pos(class QScreen const *);

    // RVA: 0x548A | Ordinal: 21643
        void pos(void);

    // RVA: 0x5B03 | Ordinal: 23300
        void setPos(class QPoint const &);

    // RVA: 0x5B04 | Ordinal: 23301
        void setPos(int, int);

    // RVA: 0x5B05 | Ordinal: 23302
        void setPos(class QScreen *, class QPoint const &);

    // RVA: 0x5B06 | Ordinal: 23303
        void setPos(class QScreen *, int, int);

    // RVA: 0x5B85 | Ordinal: 23430
        void setShape(enum Qt::CursorShape);

    // RVA: 0x5CF7 | Ordinal: 23800
        void shape(void) const;

    // RVA: 0x5E7C | Ordinal: 24189
        void swap(class QCursor &);

    // RVA: 0x425 | Ordinal: 1062
        void _QCursor(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QCURSOR_HPP
