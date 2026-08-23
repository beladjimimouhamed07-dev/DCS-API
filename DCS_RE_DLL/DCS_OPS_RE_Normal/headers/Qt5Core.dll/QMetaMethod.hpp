#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMetaMethod
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMetaMethod
{
public:

    // RVA: 0x181 | Ordinal: 386
        void QMetaMethod(void);

    // RVA: 0x7C3 | Ordinal: 1988
        void access(void) const;

    // RVA: 0x8C2 | Ordinal: 2243
        void attributes(void) const;

    // RVA: 0xD03 | Ordinal: 3332
        void enclosingMetaObject(void) const;

    // RVA: 0xECC | Ordinal: 3789
        void fromSignalImpl(struct QMetaObject const *, void **);

    // RVA: 0xF2C | Ordinal: 3885
        void getParameterTypes(int *) const;

    // RVA: 0x1061 | Ordinal: 4194
        void invoke(class QObject *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x1062 | Ordinal: 4195
        void invoke(class QObject *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x1063 | Ordinal: 4196
        void invoke(class QObject *, enum Qt::ConnectionType, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x1064 | Ordinal: 4197
        void invoke(class QObject *, enum Qt::ConnectionType, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x106A | Ordinal: 4203
        void invokeOnGadget(void *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x106B | Ordinal: 4204
        void invokeOnGadget(void *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument) const;

    // RVA: 0x1201 | Ordinal: 4610
        void isValid(void) const;

    // RVA: 0x1387 | Ordinal: 5000
        void methodIndex(void) const;

    // RVA: 0x1389 | Ordinal: 5002
        void methodSignature(void) const;

    // RVA: 0x138A | Ordinal: 5003
        void methodType(void) const;

    // RVA: 0x1406 | Ordinal: 5127
        void name(void) const;

    // RVA: 0x14A3 | Ordinal: 5284
        void parameterCount(void) const;

    // RVA: 0x14A4 | Ordinal: 5285
        void parameterNames(void) const;

    // RVA: 0x14A6 | Ordinal: 5287
        void parameterType(int) const;

    // RVA: 0x14A7 | Ordinal: 5288
        void parameterTypes(void) const;

    // RVA: 0x188A | Ordinal: 6283
        void returnType(void) const;

    // RVA: 0x188E | Ordinal: 6287
        void revision(void) const;

    // RVA: 0x1CA0 | Ordinal: 7329
        void tag(void) const;

    // RVA: 0x1F44 | Ordinal: 8005
        void typeName(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QMETAMETHOD_HPP
