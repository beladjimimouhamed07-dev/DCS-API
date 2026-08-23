#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QNonContiguousByteDeviceFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QNonContiguousByteDeviceFactory
{
public:

    // RVA: 0xB24 | Ordinal: 2853
        void create(class QByteArray *);

    // RVA: 0xB25 | Ordinal: 2854
        void create(class QIODevice *);

    // RVA: 0xB26 | Ordinal: 2855
        void create(class QSharedPointer<class QRingBuffer>);

    // RVA: 0xB3B | Ordinal: 2876
        void createShared(class QByteArray *);

    // RVA: 0xB3C | Ordinal: 2877
        void createShared(class QIODevice *);

    // RVA: 0xB3D | Ordinal: 2878
        void createShared(class QSharedPointer<class QRingBuffer>);

    // RVA: 0x2016 | Ordinal: 8215
        void wrap(class QNonContiguousByteDevice *);
};

// DCS_OPS_RE_QT5CORE.DLL_QNONCONTIGUOUSBYTEDEVICEFACTORY_HPP
