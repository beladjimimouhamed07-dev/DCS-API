#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBasicDrag
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBasicDrag
{
public:

    // RVA: 0x8D | Ordinal: 142
        void QBasicDrag(void);

    // RVA: 0xB39 | Ordinal: 2874
        void canDrop(void) const;

    // RVA: 0xB41 | Ordinal: 2882
        void cancel(void);

    // RVA: 0xB46 | Ordinal: 2887
        void cancelDrag(void);

    // RVA: 0xE5F | Ordinal: 3680
        void disableEventFilter(void);

    // RVA: 0xE97 | Ordinal: 3736
        void drag(void) const;

    // RVA: 0xE98 | Ordinal: 3737
        void drag(class QDrag *);

    // RVA: 0xF64 | Ordinal: 3941
        void drop(class QPoint const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0xF9C | Ordinal: 3997
        void enableEventFilter(void);

    // RVA: 0xFB2 | Ordinal: 4019
        void endDrag(void);

    // RVA: 0xFEE | Ordinal: 4079
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xFFD | Ordinal: 4094
        void executedDropAction(void) const;

    // RVA: 0x1000 | Ordinal: 4097
        void exitDndEventLoop(void);

    // RVA: 0x5309 | Ordinal: 21258
        void moveShapedPixmapWindow(class QPoint const &);

    // RVA: 0x5684 | Ordinal: 22149
        void recreateShapedPixmapWindow(class QScreen *, class QPoint const &);

    // RVA: 0x5753 | Ordinal: 22356
        void restoreCursor(void);

    // RVA: 0x5892 | Ordinal: 22675
        void setCanDrop(bool);

    // RVA: 0x5961 | Ordinal: 22882
        void setExecutedDropAction(enum Qt::DropAction);

    // RVA: 0x5B70 | Ordinal: 23409
        void setScreen(class QScreen *);

    // RVA: 0x5C85 | Ordinal: 23686
        void setUseCompositing(bool);

    // RVA: 0x5CFF | Ordinal: 23808
        void shapedPixmapWindow(void) const;

    // RVA: 0x5D84 | Ordinal: 23941
        void startDrag(void);

    // RVA: 0x60BC | Ordinal: 24765
        void updateCursor(enum Qt::DropAction);

    // RVA: 0x60D8 | Ordinal: 24793
        void useCompositing(void) const;

    // RVA: 0x415 | Ordinal: 1046
        void _QBasicDrag(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QBASICDRAG_HPP
