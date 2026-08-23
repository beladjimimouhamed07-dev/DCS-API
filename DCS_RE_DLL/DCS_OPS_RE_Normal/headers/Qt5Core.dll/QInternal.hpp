#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QInternal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInternal
{
public:

    // RVA: 0x7CA | Ordinal: 1995
        void activateCallbacks(enum QInternal::Callback, void **);

    // RVA: 0x1768 | Ordinal: 5993
        void registerCallback(enum QInternal::Callback, bool (__cdecl *)(void **));

    // RVA: 0x1F70 | Ordinal: 8049
        void unregisterCallback(enum QInternal::Callback, bool (__cdecl *)(void **));
};

// DCS_OPS_RE_QT5CORE.DLL_QINTERNAL_HPP
