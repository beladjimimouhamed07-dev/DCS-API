#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: ExceptionStore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QtPrivate {

class ExceptionStore
{
public:

    // RVA: 0x23 | Ordinal: 36
        void ExceptionStore(class QtPrivate::ExceptionStore &&);

    // RVA: 0x24 | Ordinal: 37
        void ExceptionStore(class QtPrivate::ExceptionStore const &);

    // RVA: 0x25 | Ordinal: 38
        void ExceptionStore(void);

    // RVA: 0xDC2 | Ordinal: 3523
        void exception(void);

    // RVA: 0xF55 | Ordinal: 3926
        void hasException(void) const;

    // RVA: 0xF78 | Ordinal: 3961
        void hasThrown(void) const;

    // RVA: 0x19A8 | Ordinal: 6569
        void setException(class QException const &);

    // RVA: 0x1CD0 | Ordinal: 7377
        void throwPossibleException(void);

    // RVA: 0x2D1 | Ordinal: 722
        void _ExceptionStore(void);
};

} // namespace QtPrivate

// DCS_OPS_RE_QT5CORE.DLL_EXCEPTIONSTORE_HPP
