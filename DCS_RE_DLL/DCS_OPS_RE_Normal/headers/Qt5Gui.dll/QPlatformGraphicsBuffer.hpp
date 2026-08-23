#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformGraphicsBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformGraphicsBuffer
{
public:

    // RVA: 0x242 | Ordinal: 579
        void QPlatformGraphicsBuffer(class QSize const &, class QPixelFormat const &);

    // RVA: 0xA95 | Ordinal: 2710
        void bindToTexture(class QRect const &) const;

    // RVA: 0xB26 | Ordinal: 2855
        void byteCount(void) const;

    // RVA: 0xB28 | Ordinal: 2857
        void bytesPerLine(void) const;

    // RVA: 0xDA4 | Ordinal: 3493
        void data(void);

    // RVA: 0xDA5 | Ordinal: 3494
        void data(void) const;

    // RVA: 0x10F3 | Ordinal: 4340
        void format(void) const;

    // RVA: 0x5046 | Ordinal: 20551
        void isLocked(void) const;

    // RVA: 0x51A1 | Ordinal: 20898
        void lock(class QFlags<enum QPlatformGraphicsBuffer::AccessType>, class QRect const &);

    // RVA: 0x5282 | Ordinal: 21123
        void metaObject(void) const;

    // RVA: 0x53B8 | Ordinal: 21433
        void origin(void) const;

    // RVA: 0x5599 | Ordinal: 21914
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55DD | Ordinal: 21982
        void qt_metacast(char const *);

    // RVA: 0x5633 | Ordinal: 22068
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5D3A | Ordinal: 23867
        void size(void) const;

    // RVA: 0x5FC0 | Ordinal: 24513
        void tr(char const *, char const *, int);

    // RVA: 0x6007 | Ordinal: 24584
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60A3 | Ordinal: 24740
        void unlock(void);

    // RVA: 0x60A4 | Ordinal: 24741
        void unlocked(class QFlags<enum QPlatformGraphicsBuffer::AccessType>);

    // RVA: 0x4CE | Ordinal: 1231
        void _QPlatformGraphicsBuffer(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMGRAPHICSBUFFER_HPP
