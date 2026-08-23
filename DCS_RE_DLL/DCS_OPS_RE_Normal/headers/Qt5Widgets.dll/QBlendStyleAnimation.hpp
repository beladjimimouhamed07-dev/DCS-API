#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QBlendStyleAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBlendStyleAnimation
{
public:

    // RVA: 0x18 | Ordinal: 25
        void QBlendStyleAnimation(enum QBlendStyleAnimation::Type, class QObject *);

    // RVA: 0x84D | Ordinal: 2126
        void currentImage(void) const;

    // RVA: 0xB11 | Ordinal: 2834
        void endImage(void) const;

    // RVA: 0x1115 | Ordinal: 4374
        void metaObject(void) const;

    // RVA: 0x142E | Ordinal: 5167
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C1 | Ordinal: 5314
        void qt_metacast(char const *);

    // RVA: 0x1557 | Ordinal: 5464
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x194E | Ordinal: 6479
        void setEndImage(class QImage const &);

    // RVA: 0x1C46 | Ordinal: 7239
        void setStartImage(class QImage const &);

    // RVA: 0x1E84 | Ordinal: 7813
        void startImage(void) const;

    // RVA: 0x207D | Ordinal: 8318
        void tr(char const *, char const *, int);

    // RVA: 0x2110 | Ordinal: 8465
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2219 | Ordinal: 8730
        void updateCurrentTime(int);

    // RVA: 0x1BE | Ordinal: 447
        void _QBlendStyleAnimation(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QBLENDSTYLEANIMATION_HPP
