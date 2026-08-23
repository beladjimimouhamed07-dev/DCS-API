#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMetaType
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMetaType
{
public:

    // RVA: 0x18C | Ordinal: 397
        void QMetaType(class QMetaType const &);

    // RVA: 0x18D | Ordinal: 398
        void QMetaType(enum QMetaType::ExtensionFlag, class QMetaTypeInterface const *, void * (__cdecl *)(int, void *, void const *), void (__cdecl *)(int, void *), void (__cdecl *)(class QDataStream &, void const *), void (__cdecl *)(class QDataStream &, void *), void * (__cdecl *)(void *, void const *), void (__cdecl *)(void *), unsigned int, unsigned int, int, struct QMetaObject const *);

    // RVA: 0x18E | Ordinal: 399
        void QMetaType(int);

    // RVA: 0xA48 | Ordinal: 2633
        void compare(void const *, void const *, int, int *);

    // RVA: 0xAAD | Ordinal: 2734
        void construct(void *, void const *) const;

    // RVA: 0xAAE | Ordinal: 2735
        void construct(int, void *, void const *);

    // RVA: 0xAAF | Ordinal: 2736
        void construct(int, void const *);

    // RVA: 0xAB0 | Ordinal: 2737
        void constructExtended(void *, void const *) const;

    // RVA: 0xAE4 | Ordinal: 2789
        void convert(void const *, int, void *, int);

    // RVA: 0xB22 | Ordinal: 2851
        void create(void const *) const;

    // RVA: 0xB23 | Ordinal: 2852
        void create(int, void const *);

    // RVA: 0xB2C | Ordinal: 2861
        void createExtended(void const *) const;

    // RVA: 0xB52 | Ordinal: 2899
        void ctor(class QMetaTypeInterface const *);

    // RVA: 0xC44 | Ordinal: 3141
        void debugStream(class QDebug &, void const *, int);

    // RVA: 0xC6C | Ordinal: 3181
        void destroy(void *) const;

    // RVA: 0xC6D | Ordinal: 3182
        void destroy(int, void *);

    // RVA: 0xC6E | Ordinal: 3183
        void destroyExtended(void *) const;

    // RVA: 0xC75 | Ordinal: 3190
        void destruct(void *) const;

    // RVA: 0xC76 | Ordinal: 3191
        void destruct(int, void *);

    // RVA: 0xC77 | Ordinal: 3192
        void destructExtended(void *) const;

    // RVA: 0xCD7 | Ordinal: 3288
        void dtor(void);

    // RVA: 0xD6F | Ordinal: 3440
        void equals(void const *, void const *, int, int *);

    // RVA: 0xE6A | Ordinal: 3691
        void flags(void) const;

    // RVA: 0xE6F | Ordinal: 3696
        void flagsExtended(void) const;

    // RVA: 0xF6F | Ordinal: 3952
        void hasRegisteredComparators(int);

    // RVA: 0xF70 | Ordinal: 3953
        void hasRegisteredConverterFunction(int, int);

    // RVA: 0xF71 | Ordinal: 3954
        void hasRegisteredDebugStreamOperator(int);

    // RVA: 0xF9F | Ordinal: 4000
        void id(void) const;

    // RVA: 0x10E6 | Ordinal: 4327
        void isExtended(enum QMetaType::ExtensionFlag) const;

    // RVA: 0x117F | Ordinal: 4480
        void isRegistered(void) const;

    // RVA: 0x1180 | Ordinal: 4481
        void isRegistered(int);

    // RVA: 0x1203 | Ordinal: 4612
        void isValid(void) const;

    // RVA: 0x12AE | Ordinal: 4783
        void load(class QDataStream &, int, void *);

    // RVA: 0x135E | Ordinal: 4959
        void metaObject(void) const;

    // RVA: 0x137F | Ordinal: 4992
        void metaObjectExtended(void) const;

    // RVA: 0x1380 | Ordinal: 4993
        void metaObjectForType(int);

    // RVA: 0x1409 | Ordinal: 5130
        void name(void) const;

    // RVA: 0x1769 | Ordinal: 5994
        void registerComparatorFunction(struct QtPrivate::AbstractComparatorFunction const *, int);

    // RVA: 0x176A | Ordinal: 5995
        void registerConverterFunction(struct QtPrivate::AbstractConverterFunction const *, int, int);

    // RVA: 0x176B | Ordinal: 5996
        void registerDebugStreamOperatorFunction(struct QtPrivate::AbstractDebugStreamFunction const *, int);

    // RVA: 0x1773 | Ordinal: 6004
        void registerNormalizedType(class QByteArray const &, void (__cdecl *)(int, void *), void * (__cdecl *)(int, void *, void const *), int, class QFlags<enum QMetaType::TypeFlag>, struct QMetaObject const *);

    // RVA: 0x1774 | Ordinal: 6005
        void registerNormalizedType(class QByteArray const &, void (__cdecl *)(void *), void * (__cdecl *)(void *, void const *), int, class QFlags<enum QMetaType::TypeFlag>, struct QMetaObject const *);

    // RVA: 0x1775 | Ordinal: 6006
        void registerNormalizedType(class QByteArray const &, void (__cdecl *)(void *), void * (__cdecl *)(void const *), void (__cdecl *)(void *), void * (__cdecl *)(void *, void const *), int, class QFlags<enum QMetaType::TypeFlag>, struct QMetaObject const *);

    // RVA: 0x1776 | Ordinal: 6007
        void registerNormalizedTypedef(class QByteArray const &, int);

    // RVA: 0x177E | Ordinal: 6015
        void registerStreamOperators(int, void (__cdecl *)(class QDataStream &, void const *), void (__cdecl *)(class QDataStream &, void *));

    // RVA: 0x177F | Ordinal: 6016
        void registerStreamOperators(char const *, void (__cdecl *)(class QDataStream &, void const *), void (__cdecl *)(class QDataStream &, void *));

    // RVA: 0x1787 | Ordinal: 6024
        void registerType(char const *, void (__cdecl *)(int, void *), void * (__cdecl *)(int, void *, void const *), int, class QFlags<enum QMetaType::TypeFlag>, struct QMetaObject const *);

    // RVA: 0x1788 | Ordinal: 6025
        void registerType(char const *, void (__cdecl *)(void *), void * (__cdecl *)(void const *), void (__cdecl *)(void *), void * (__cdecl *)(void *, void const *), int, class QFlags<enum QMetaType::TypeFlag>, struct QMetaObject const *);

    // RVA: 0x1789 | Ordinal: 6026
        void registerType(char const *, void (__cdecl *)(void *), void * (__cdecl *)(void const *));

    // RVA: 0x178A | Ordinal: 6027
        void registerTypedef(char const *, int);

    // RVA: 0x18CC | Ordinal: 6349
        void save(class QDataStream &, int, void const *);

    // RVA: 0x1B46 | Ordinal: 6983
        void sizeExtended(void) const;

    // RVA: 0x1B47 | Ordinal: 6984
        void sizeOf(void) const;

    // RVA: 0x1B48 | Ordinal: 6985
        void sizeOf(int);

    // RVA: 0x1F3C | Ordinal: 7997
        void type(class QByteArray const &);

    // RVA: 0x1F3D | Ordinal: 7998
        void type(char const *);

    // RVA: 0x1F42 | Ordinal: 8003
        void typeFlags(int);

    // RVA: 0x1F43 | Ordinal: 8004
        void typeInfo(int);

    // RVA: 0x1F46 | Ordinal: 8007
        void typeName(int);

    // RVA: 0x1F71 | Ordinal: 8050
        void unregisterConverterFunction(int, int);

    // RVA: 0x1F7D | Ordinal: 8062
        void unregisterType(int);

    // RVA: 0x336 | Ordinal: 823
        void _QMetaType(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMETATYPE_HPP
