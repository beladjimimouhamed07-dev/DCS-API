#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFontComboBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontComboBox
{
public:

    // RVA: 0x54 | Ordinal: 85
        void QFontComboBox(class QWidget *);

    // RVA: 0x846 | Ordinal: 2119
        void currentFont(void) const;

    // RVA: 0x849 | Ordinal: 2122
        void currentFontChanged(class QFont const &);

    // RVA: 0x8EB | Ordinal: 2284
        void d_func(void);

    // RVA: 0x8EC | Ordinal: 2285
        void d_func(void) const;

    // RVA: 0xB3F | Ordinal: 2880
        void event(class QEvent *);

    // RVA: 0xC55 | Ordinal: 3158
        void fontFilters(void) const;

    // RVA: 0x1131 | Ordinal: 4402
        void metaObject(void) const;

    // RVA: 0x144A | Ordinal: 5195
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14DD | Ordinal: 5342
        void qt_metacast(char const *);

    // RVA: 0x1573 | Ordinal: 5492
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x18B8 | Ordinal: 6329
        void setCurrentFont(class QFont const &);

    // RVA: 0x19A6 | Ordinal: 6567
        void setFontFilters(class QFlags<enum QFontComboBox::FontFilter>);

    // RVA: 0x1D66 | Ordinal: 7527
        void setWritingSystem(enum QFontDatabase::WritingSystem);

    // RVA: 0x1DEF | Ordinal: 7664
        void sizeHint(void) const;

    // RVA: 0x2099 | Ordinal: 8346
        void tr(char const *, char const *, int);

    // RVA: 0x212C | Ordinal: 8493
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2342 | Ordinal: 9027
        void writingSystem(void) const;

    // RVA: 0x1E0 | Ordinal: 481
        void _QFontComboBox(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFONTCOMBOBOX_HPP
