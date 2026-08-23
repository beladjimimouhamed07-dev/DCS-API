#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRhiBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRhiBuffer
{
public:

    // RVA: 0x297 | Ordinal: 664
        void QRhiBuffer(class QRhiImplementation *, enum QRhiBuffer::Type, class QFlags<enum QRhiBuffer::UsageFlag>, int);

    // RVA: 0x531A | Ordinal: 21275
        void nativeBuffer(void);

    // RVA: 0x5740 | Ordinal: 22337
        void resourceType(void) const;

    // RVA: 0x5B8D | Ordinal: 23438
        void setSize(int);

    // RVA: 0x5C21 | Ordinal: 23586
        void setType(enum QRhiBuffer::Type);

    // RVA: 0x5C83 | Ordinal: 23684
        void setUsage(class QFlags<enum QRhiBuffer::UsageFlag>);

    // RVA: 0x5D3C | Ordinal: 23869
        void size(void) const;

    // RVA: 0x606C | Ordinal: 24685
        void type(void) const;

    // RVA: 0x60D5 | Ordinal: 24790
        void usage(void) const;

    // RVA: 0x4F5 | Ordinal: 1270
        void _QRhiBuffer(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRHIBUFFER_HPP
