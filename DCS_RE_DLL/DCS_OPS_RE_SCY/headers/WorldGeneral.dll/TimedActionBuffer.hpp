#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TimedActionBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TimedActionBuffer
{
public:

    // RVA: 0x1B8 | Ordinal: 441
        void TimedActionBuffer(class TimedActionBuffer const &);

    // RVA: 0x1B9 | Ordinal: 442
        void TimedActionBuffer(class ActionDispatcher *);

    // RVA: 0x6E0 | Ordinal: 1761
        void consumeEvent(double, class Mail::Message const &);

    // RVA: 0x79C | Ordinal: 1949
        void feedEventsUpTo(double);

    // RVA: 0x7A5 | Ordinal: 1958
        void filterEvent(int);

    // RVA: 0xAA1 | Ordinal: 2722
        void onMissionEnd(void);

    // RVA: 0xAA6 | Ordinal: 2727
        void onStep(double);

    // RVA: 0xB89 | Ordinal: 2954
        void scheduleAction(struct ActionEntry const &, enum ActionOrigin);

    // RVA: 0xB8A | Ordinal: 2955
        void scheduleAnalogAction(unsigned int, double);

    // RVA: 0xB8B | Ordinal: 2956
        void scheduleDigitalAction(unsigned int);

    // RVA: 0xB8C | Ordinal: 2957
        void scheduleInputAction(struct TimedActionEntry const &);

    // RVA: 0x2C1 | Ordinal: 706
        void _TimedActionBuffer(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_TIMEDACTIONBUFFER_HPP
