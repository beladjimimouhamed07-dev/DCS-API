#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QShortcut
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShortcut
{
public:

    // RVA: 0xFF | Ordinal: 256
        void QShortcut(class QKeySequence const &, class QWidget *, char const *, char const *, enum Qt::ShortcutContext);

    // RVA: 0x100 | Ordinal: 257
        void QShortcut(class QWidget *);

    // RVA: 0x51A | Ordinal: 1307
        void activated(void);

    // RVA: 0x51C | Ordinal: 1309
        void activatedAmbiguously(void);

    // RVA: 0x601 | Ordinal: 1538
        void autoRepeat(void) const;

    // RVA: 0x7C5 | Ordinal: 1990
        void context(void) const;

    // RVA: 0x991 | Ordinal: 2450
        void d_func(void);

    // RVA: 0x992 | Ordinal: 2451
        void d_func(void) const;

    // RVA: 0xB5D | Ordinal: 2910
        void event(class QEvent *);

    // RVA: 0xD9D | Ordinal: 3486
        void id(void) const;

    // RVA: 0xEDB | Ordinal: 3804
        void isEnabled(void) const;

    // RVA: 0xFF1 | Ordinal: 4082
        void key(void) const;

    // RVA: 0x1174 | Ordinal: 4469
        void metaObject(void) const;

    // RVA: 0x136C | Ordinal: 4973
        void parentWidget(void) const;

    // RVA: 0x148D | Ordinal: 5262
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1520 | Ordinal: 5409
        void qt_metacast(char const *);

    // RVA: 0x15B6 | Ordinal: 5559
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1826 | Ordinal: 6183
        void setAutoRepeat(bool);

    // RVA: 0x18A7 | Ordinal: 6312
        void setContext(enum Qt::ShortcutContext);

    // RVA: 0x194A | Ordinal: 6475
        void setEnabled(bool);

    // RVA: 0x1A51 | Ordinal: 6738
        void setKey(class QKeySequence const &);

    // RVA: 0x1D29 | Ordinal: 7466
        void setWhatsThis(class QString const &);

    // RVA: 0x20DC | Ordinal: 8413
        void tr(char const *, char const *, int);

    // RVA: 0x216F | Ordinal: 8560
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22DB | Ordinal: 8924
        void whatsThis(void) const;

    // RVA: 0x247 | Ordinal: 584
        void _QShortcut(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSHORTCUT_HPP
