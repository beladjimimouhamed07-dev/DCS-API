#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QIODevicePrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIODevicePrivate
{
public:

    // RVA: 0x127 | Ordinal: 296
        void QIODevicePrivate(void);

    // RVA: 0x831 | Ordinal: 2098
        void allWriteBuffersEmpty(void) const;

    // RVA: 0x1086 | Ordinal: 4231
        void isBufferEmpty(void) const;

    // RVA: 0x11A5 | Ordinal: 4518
        void isSequential(void) const;

    // RVA: 0x14D4 | Ordinal: 5333
        void peek(__int64);

    // RVA: 0x14D5 | Ordinal: 5334
        void peek(char *, __int64);

    // RVA: 0x157D | Ordinal: 5502
        void putCharHelper(char);

    // RVA: 0x15FA | Ordinal: 5627
        void q_func(void);

    // RVA: 0x15FB | Ordinal: 5628
        void q_func(void) const;

    // RVA: 0x171A | Ordinal: 5915
        void read(char *, __int64, bool);

    // RVA: 0x18FF | Ordinal: 6400
        void seekBuffer(__int64);

    // RVA: 0x195E | Ordinal: 6495
        void setCurrentReadChannel(int);

    // RVA: 0x1962 | Ordinal: 6499
        void setCurrentWriteChannel(int);

    // RVA: 0x1A6C | Ordinal: 6765
        void setReadChannelCount(int);

    // RVA: 0x1AE2 | Ordinal: 6883
        void setWriteChannelCount(int);

    // RVA: 0x1B4A | Ordinal: 6987
        void skip(__int64);

    // RVA: 0x1B4B | Ordinal: 6988
        void skipByReading(__int64);

    // RVA: 0x322 | Ordinal: 803
        void _QIODevicePrivate(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QIODEVICEPRIVATE_HPP
