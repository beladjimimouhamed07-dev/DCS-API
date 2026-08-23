#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPlatformTextureList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlatformTextureList
{
public:

    // RVA: 0x259 | Ordinal: 602
        void QPlatformTextureList(class QObject *);

    // RVA: 0xA03 | Ordinal: 2564
        void appendTexture(void *, unsigned int, class QRect const &, class QRect const &, class QFlags<enum QPlatformTextureList::Flag>);

    // RVA: 0xBA5 | Ordinal: 2982
        void clear(void);

    // RVA: 0xBD8 | Ordinal: 3033
        void clipRect(int) const;

    // RVA: 0xC7B | Ordinal: 3196
        void count(void) const;

    // RVA: 0xD6C | Ordinal: 3437
        void d_func(void);

    // RVA: 0xD6D | Ordinal: 3438
        void d_func(void) const;

    // RVA: 0x1094 | Ordinal: 4245
        void flags(int) const;

    // RVA: 0x1181 | Ordinal: 4482
        void geometry(int) const;

    // RVA: 0x5013 | Ordinal: 20500
        void isEmpty(void) const;

    // RVA: 0x5047 | Ordinal: 20552
        void isLocked(void) const;

    // RVA: 0x51A2 | Ordinal: 20899
        void lock(bool);

    // RVA: 0x51A3 | Ordinal: 20900
        void locked(bool);

    // RVA: 0x528D | Ordinal: 21134
        void metaObject(void) const;

    // RVA: 0x55A4 | Ordinal: 21925
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55E8 | Ordinal: 21993
        void qt_metacast(char const *);

    // RVA: 0x563E | Ordinal: 22079
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5D63 | Ordinal: 23908
        void source(int);

    // RVA: 0x5F1D | Ordinal: 24350
        void textureId(int) const;

    // RVA: 0x5FCB | Ordinal: 24524
        void tr(char const *, char const *, int);

    // RVA: 0x6012 | Ordinal: 24595
        void trUtf8(char const *, char const *, int);

    // RVA: 0x4E3 | Ordinal: 1252
        void _QPlatformTextureList(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPLATFORMTEXTURELIST_HPP
