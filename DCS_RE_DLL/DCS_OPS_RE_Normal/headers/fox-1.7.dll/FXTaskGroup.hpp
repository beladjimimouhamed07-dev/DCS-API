#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTaskGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTaskGroup
{
public:

    // RVA: 0x30D | Ordinal: 782
        void FXTaskGroup(class FX::FXThreadPool *);

    // RVA: 0x30E | Ordinal: 783
        void FXTaskGroup(void);

    // RVA: 0xE56 | Ordinal: 3671
        void execute(class FX::FXRunnable *);

    // RVA: 0xE59 | Ordinal: 3674
        void executeAndWait(class FX::FXRunnable *);

    // RVA: 0x154E | Ordinal: 5455
        void getRunningTasks(void) const;

    // RVA: 0x161E | Ordinal: 5663
        void getThreadPool(void) const;

    // RVA: 0x2F71 | Ordinal: 12146
        void wait(void);

    // RVA: 0x4CA | Ordinal: 1227
        void _FXTaskGroup(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTASKGROUP_HPP
