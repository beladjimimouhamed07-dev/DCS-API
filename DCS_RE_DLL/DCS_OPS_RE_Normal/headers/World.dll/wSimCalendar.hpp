#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: wSimCalendar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimCalendar
{
public:

    // RVA: 0x13 | Ordinal: 20
        void Break(void);

    // RVA: 0x15 | Ordinal: 22
        void Clear(void);

    // RVA: 0x18 | Ordinal: 25
        void DoActionsUntil(double);

    // RVA: 0x2F | Ordinal: 48
        void RecordModelTimeAccelerationIsOn(void);

    // RVA: 0x34 | Ordinal: 53
        void Start(class ed::basic_string<char> const &);

    // RVA: 0x35 | Ordinal: 54
        void Stop(void);

    // RVA: 0x3A | Ordinal: 59
        void addPoststepCallback(class IStepCallback *);

    // RVA: 0x3B | Ordinal: 60
        void addPrestepCallback(class IStepCallback *);

    // RVA: 0x62 | Ordinal: 99
        void registerToKill(class Suicide *);

    // RVA: 0x63 | Ordinal: 100
        void removePoststepCallback(class IStepCallback *);

    // RVA: 0x64 | Ordinal: 101
        void removePrestepCallback(class IStepCallback *);
};

// DCS_OPS_RE_WORLD.DLL_WSIMCALENDAR_HPP
