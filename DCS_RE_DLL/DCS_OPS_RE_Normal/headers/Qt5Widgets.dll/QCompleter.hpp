#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QCompleter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCompleter
{
public:

    // RVA: 0x2D | Ordinal: 46
        void QCompleter(class QStringList const &, class QObject *);

    // RVA: 0x2E | Ordinal: 47
        void QCompleter(class QAbstractItemModel *, class QObject *);

    // RVA: 0x2F | Ordinal: 48
        void QCompleter(class QObject *);

    // RVA: 0x518 | Ordinal: 1305
        void activated(class QModelIndex const &);

    // RVA: 0x519 | Ordinal: 1306
        void activated(class QString const &);

    // RVA: 0x69C | Ordinal: 1693
        void caseSensitivity(void) const;

    // RVA: 0x7A3 | Ordinal: 1956
        void complete(class QRect const &);

    // RVA: 0x7A9 | Ordinal: 1962
        void completionColumn(void) const;

    // RVA: 0x7AA | Ordinal: 1963
        void completionCount(void) const;

    // RVA: 0x7AB | Ordinal: 1964
        void completionMode(void) const;

    // RVA: 0x7AC | Ordinal: 1965
        void completionModel(void) const;

    // RVA: 0x7AD | Ordinal: 1966
        void completionPrefix(void) const;

    // RVA: 0x7AE | Ordinal: 1967
        void completionRole(void) const;

    // RVA: 0x844 | Ordinal: 2117
        void currentCompletion(void) const;

    // RVA: 0x850 | Ordinal: 2129
        void currentIndex(void) const;

    // RVA: 0x863 | Ordinal: 2148
        void currentRow(void) const;

    // RVA: 0x8CB | Ordinal: 2252
        void d_func(void);

    // RVA: 0x8CC | Ordinal: 2253
        void d_func(void) const;

    // RVA: 0xB38 | Ordinal: 2873
        void event(class QEvent *);

    // RVA: 0xB79 | Ordinal: 2938
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xBCD | Ordinal: 3022
        void filterMode(void) const;

    // RVA: 0xD40 | Ordinal: 3393
        void highlighted(class QModelIndex const &);

    // RVA: 0xD41 | Ordinal: 3394
        void highlighted(class QString const &);

    // RVA: 0x10DC | Ordinal: 4317
        void maxVisibleItems(void) const;

    // RVA: 0x1120 | Ordinal: 4385
        void metaObject(void) const;

    // RVA: 0x11F0 | Ordinal: 4593
        void model(void) const;

    // RVA: 0x11F5 | Ordinal: 4598
        void modelSorting(void) const;

    // RVA: 0x1378 | Ordinal: 4985
        void pathFromIndex(class QModelIndex const &) const;

    // RVA: 0x13AE | Ordinal: 5039
        void popup(void) const;

    // RVA: 0x1439 | Ordinal: 5178
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14CC | Ordinal: 5325
        void qt_metacast(char const *);

    // RVA: 0x1562 | Ordinal: 5475
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1864 | Ordinal: 6245
        void setCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x189A | Ordinal: 6299
        void setCompletionColumn(int);

    // RVA: 0x189B | Ordinal: 6300
        void setCompletionMode(enum QCompleter::CompletionMode);

    // RVA: 0x189C | Ordinal: 6301
        void setCompletionPrefix(class QString const &);

    // RVA: 0x189D | Ordinal: 6302
        void setCompletionRole(int);

    // RVA: 0x18CD | Ordinal: 6350
        void setCurrentRow(int);

    // RVA: 0x1971 | Ordinal: 6514
        void setFilterMode(class QFlags<enum Qt::MatchFlag>);

    // RVA: 0x1A8B | Ordinal: 6796
        void setMaxVisibleItems(int);

    // RVA: 0x1AC6 | Ordinal: 6855
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1AD3 | Ordinal: 6868
        void setModelSorting(enum QCompleter::ModelSorting);

    // RVA: 0x1B5A | Ordinal: 7003
        void setPopup(class QAbstractItemView *);

    // RVA: 0x1D2E | Ordinal: 7471
        void setWidget(class QWidget *);

    // RVA: 0x1D62 | Ordinal: 7523
        void setWrapAround(bool);

    // RVA: 0x1E5D | Ordinal: 7774
        void splitPath(class QString const &) const;

    // RVA: 0x2088 | Ordinal: 8329
        void tr(char const *, char const *, int);

    // RVA: 0x211B | Ordinal: 8476
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22F2 | Ordinal: 8947
        void widget(void) const;

    // RVA: 0x233C | Ordinal: 9021
        void wrapAround(void) const;

    // RVA: 0x1CB | Ordinal: 460
        void _QCompleter(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCOMPLETER_HPP
