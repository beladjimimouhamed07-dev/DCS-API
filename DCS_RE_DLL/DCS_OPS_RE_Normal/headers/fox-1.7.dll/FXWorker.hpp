#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXWorker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXWorker
{
public:

    // RVA: 0x386 | Ordinal: 903
        void FXWorker(class FX::FXRunnable *);

    // RVA: 0xE58 | Ordinal: 3673
        void execute(class FX::FXRunnable *, unsigned __int64);

    // RVA: 0x154D | Ordinal: 5454
        void getRunnable(void) const;

    // RVA: 0x27CF | Ordinal: 10192
        void run(void);

    // RVA: 0x2CA5 | Ordinal: 11430
        void setRunnable(class FX::FXRunnable *);

    // RVA: 0x4F6 | Ordinal: 1271
        void _FXWorker(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXWORKER_HPP
