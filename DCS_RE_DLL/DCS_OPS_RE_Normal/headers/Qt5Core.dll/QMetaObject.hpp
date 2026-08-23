#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMetaObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMetaObject
{
public:

    // RVA: 0x7C7 | Ordinal: 1992
        void activate(class QObject *, int, int, void **);

    // RVA: 0x7C8 | Ordinal: 1993
        void activate(class QObject *, int, void **);

    // RVA: 0x7C9 | Ordinal: 1994
        void activate(class QObject *, struct QMetaObject const *, int, void **);

    // RVA: 0x98A | Ordinal: 2443
        void cast(class QObject *) const;

    // RVA: 0x98B | Ordinal: 2444
        void cast(class QObject const *) const;

    // RVA: 0x9B4 | Ordinal: 2485
        void checkConnectArgs(class QMetaMethod const &, class QMetaMethod const &);

    // RVA: 0x9B5 | Ordinal: 2486
        void checkConnectArgs(char const *, char const *);

    // RVA: 0x9CE | Ordinal: 2511
        void classInfo(int) const;

    // RVA: 0x9CF | Ordinal: 2512
        void classInfoCount(void) const;

    // RVA: 0x9D2 | Ordinal: 2515
        void classInfoOffset(void) const;

    // RVA: 0x9D4 | Ordinal: 2517
        void className(void) const;

    // RVA: 0xA73 | Ordinal: 2676
        void connect(class QObject const *, int, class QObject const *, int, int, int *);

    // RVA: 0xA7F | Ordinal: 2688
        void connectSlotsByName(class QObject *);

    // RVA: 0xAB1 | Ordinal: 2738
        void constructor(int) const;

    // RVA: 0xAB3 | Ordinal: 2740
        void constructorCount(void) const;

    // RVA: 0xCAB | Ordinal: 3244
        void disconnect(class QObject const *, int, class QObject const *, int);

    // RVA: 0xCB7 | Ordinal: 3256
        void disconnectOne(class QObject const *, int, class QObject const *, int);

    // RVA: 0xD68 | Ordinal: 3433
        void enumerator(int) const;

    // RVA: 0xD6B | Ordinal: 3436
        void enumeratorCount(void) const;

    // RVA: 0xD6D | Ordinal: 3438
        void enumeratorOffset(void) const;

    // RVA: 0xFCE | Ordinal: 4047
        void indexOfClassInfo(char const *) const;

    // RVA: 0xFD0 | Ordinal: 4049
        void indexOfConstructor(char const *) const;

    // RVA: 0xFD2 | Ordinal: 4051
        void indexOfEnumerator(char const *) const;

    // RVA: 0xFD5 | Ordinal: 4054
        void indexOfMethod(char const *) const;

    // RVA: 0xFD7 | Ordinal: 4056
        void indexOfProperty(char const *) const;

    // RVA: 0xFD9 | Ordinal: 4058
        void indexOfSignal(char const *) const;

    // RVA: 0xFDB | Ordinal: 4060
        void indexOfSlot(char const *) const;

    // RVA: 0xFE6 | Ordinal: 4071
        void inherits(struct QMetaObject const *) const;

    // RVA: 0x1065 | Ordinal: 4198
        void invokeMethod(class QObject *, char const *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument);

    // RVA: 0x1066 | Ordinal: 4199
        void invokeMethod(class QObject *, char const *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument);

    // RVA: 0x1067 | Ordinal: 4200
        void invokeMethod(class QObject *, char const *, enum Qt::ConnectionType, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument);

    // RVA: 0x1068 | Ordinal: 4201
        void invokeMethod(class QObject *, char const *, enum Qt::ConnectionType, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument);

    // RVA: 0x1069 | Ordinal: 4202
        void invokeMethodImpl(class QObject *, class QtPrivate::QSlotObjectBase *, enum Qt::ConnectionType, void *);

    // RVA: 0x1381 | Ordinal: 4994
        void metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1383 | Ordinal: 4996
        void method(int) const;

    // RVA: 0x1385 | Ordinal: 4998
        void methodCount(void) const;

    // RVA: 0x1388 | Ordinal: 5001
        void methodOffset(void) const;

    // RVA: 0x1425 | Ordinal: 5158
        void newInstance(class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x1440 | Ordinal: 5185
        void normalizedSignature(char const *);

    // RVA: 0x1441 | Ordinal: 5186
        void normalizedType(char const *);

    // RVA: 0x1554 | Ordinal: 5461
        void property(int) const;

    // RVA: 0x1557 | Ordinal: 5464
        void propertyCount(void) const;

    // RVA: 0x155C | Ordinal: 5469
        void propertyOffset(void) const;

    // RVA: 0x1C34 | Ordinal: 7221
        void static_metacall(enum QMetaObject::Call, int, void **) const;

    // RVA: 0x1C55 | Ordinal: 7254
        void superClass(void) const;

    // RVA: 0x1E8F | Ordinal: 7824
        void tr(char const *, char const *, int) const;

    // RVA: 0x1F9E | Ordinal: 8095
        void userProperty(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QMETAOBJECT_HPP
