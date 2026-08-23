#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: wTime
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTime
{
public:

    // RVA: 0x14 | Ordinal: 21
        void Cancel(void);

    // RVA: 0x19 | Ordinal: 26
        void GetAbsoluteModelTime(void);

    // RVA: 0x1E | Ordinal: 31
        void GetModelTime(void);

    // RVA: 0x1D | Ordinal: 30
        void GetModelTime0(void);

    // RVA: 0x1F | Ordinal: 32
        void GetModelTimeRaw(void);

    // RVA: 0x27 | Ordinal: 40
        void InsertToCalendar(void);

    // RVA: 0x28 | Ordinal: 41
        void IsCurrent(void) const;

    // RVA: 0x2B | Ordinal: 44
        void KillMe(void);

    // RVA: 0x2C | Ordinal: 45
        void MissedEvent(void);

    // RVA: 0x31 | Ordinal: 50
        void SetDebugModelTime0(double);

    // RVA: 0x33 | Ordinal: 52
        void SetModelTime(double);

    // RVA: 0x32 | Ordinal: 51
        void SetModelTime0(double);

    // RVA: 0x55 | Ordinal: 86
        void onCalendarClear(void);

    // RVA: 0x6 | Ordinal: 7
        void wTime(double);

    // RVA: 0x7 | Ordinal: 8
        void wTime(void);

    // RVA: 0xC | Ordinal: 13
        void _wTime(void);
};

// DCS_OPS_RE_WORLD.DLL_WTIME_HPP
