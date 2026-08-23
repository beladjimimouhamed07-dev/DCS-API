#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextTable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextTable
{
public:

    // RVA: 0x382 | Ordinal: 899
        void QTextTable(class QTextDocument *);

    // RVA: 0x9FC | Ordinal: 2557
        void appendColumns(int);

    // RVA: 0xA02 | Ordinal: 2563
        void appendRows(int);

    // RVA: 0xB65 | Ordinal: 2918
        void cellAt(class QTextCursor const &) const;

    // RVA: 0xB66 | Ordinal: 2919
        void cellAt(int) const;

    // RVA: 0xB67 | Ordinal: 2920
        void cellAt(int, int) const;

    // RVA: 0xC12 | Ordinal: 3091
        void columns(void) const;

    // RVA: 0xD92 | Ordinal: 3475
        void d_func(void);

    // RVA: 0xD93 | Ordinal: 3476
        void d_func(void) const;

    // RVA: 0x1100 | Ordinal: 4353
        void format(void) const;

    // RVA: 0x4F5A | Ordinal: 20315
        void insertColumns(int, int);

    // RVA: 0x4F74 | Ordinal: 20341
        void insertRows(int, int);

    // RVA: 0x5256 | Ordinal: 21079
        void mergeCells(class QTextCursor const &);

    // RVA: 0x5257 | Ordinal: 21080
        void mergeCells(int, int, int, int);

    // RVA: 0x529E | Ordinal: 21151
        void metaObject(void) const;

    // RVA: 0x55B5 | Ordinal: 21942
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55F9 | Ordinal: 22010
        void qt_metacast(char const *);

    // RVA: 0x5650 | Ordinal: 22097
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56D0 | Ordinal: 22225
        void removeColumns(int, int);

    // RVA: 0x56E7 | Ordinal: 22248
        void removeRows(int, int);

    // RVA: 0x5722 | Ordinal: 22307
        void resize(int, int);

    // RVA: 0x5784 | Ordinal: 22405
        void rowEnd(class QTextCursor const &) const;

    // RVA: 0x578B | Ordinal: 22412
        void rowStart(class QTextCursor const &) const;

    // RVA: 0x578D | Ordinal: 22414
        void rows(void) const;

    // RVA: 0x59C0 | Ordinal: 22977
        void setFormat(class QTextTableFormat const &);

    // RVA: 0x5D75 | Ordinal: 23926
        void splitCell(int, int, int, int);

    // RVA: 0x5FDC | Ordinal: 24541
        void tr(char const *, char const *, int);

    // RVA: 0x6023 | Ordinal: 24612
        void trUtf8(char const *, char const *, int);

    // RVA: 0x545 | Ordinal: 1350
        void _QTextTable(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTTABLE_HPP
