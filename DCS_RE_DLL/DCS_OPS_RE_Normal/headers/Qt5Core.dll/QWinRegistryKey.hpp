#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QWinRegistryKey
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWinRegistryKey
{
public:

    // RVA: 0x292 | Ordinal: 659
        void QWinRegistryKey(class QWinRegistryKey &&);

    // RVA: 0x293 | Ordinal: 660
        void QWinRegistryKey(struct HKEY__*, class QStringView, unsigned long, unsigned long);

    // RVA: 0x294 | Ordinal: 661
        void QWinRegistryKey(void);

    // RVA: 0xA06 | Ordinal: 2567
        void close(void);

    // RVA: 0xCE2 | Ordinal: 3299
        void dwordValue(class QStringView) const;

    // RVA: 0x1218 | Ordinal: 4633
        void isValid(void) const;

    // RVA: 0x1C4E | Ordinal: 7247
        void stringValue(class QStringView) const;

    // RVA: 0x1C88 | Ordinal: 7305
        void swap(class QWinRegistryKey &);

    // RVA: 0x381 | Ordinal: 898
        void _QWinRegistryKey(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QWINREGISTRYKEY_HPP
