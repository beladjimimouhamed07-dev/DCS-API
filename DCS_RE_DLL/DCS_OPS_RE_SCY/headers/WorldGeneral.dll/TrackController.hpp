#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TrackController
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TrackController
{
public:

    // RVA: 0x1C0 | Ordinal: 449
        void TrackController(class TrackController const &);

    // RVA: 0x1C1 | Ordinal: 450
        void TrackController(bool, bool, class Mission::MissionPackage *);

    // RVA: 0x60E | Ordinal: 1551
        void addConsumer(class ITrackEventsConsumer *);

    // RVA: 0x79B | Ordinal: 1948
        void feedEvents(double);

    // RVA: 0x850 | Ordinal: 2129
        void getLastEventTime(void) const;

    // RVA: 0x972 | Ordinal: 2419
        void hasEvents(double);

    // RVA: 0x99C | Ordinal: 2461
        void isActive(void);

    // RVA: 0x9BF | Ordinal: 2496
        void isReading(void);

    // RVA: 0x9D4 | Ordinal: 2517
        void isWriting(void);

    // RVA: 0xAA7 | Ordinal: 2728
        void onStep(double);

    // RVA: 0xB0D | Ordinal: 2830
        void peekEvent(void);

    // RVA: 0xB1C | Ordinal: 2845
        void popEvent(void);

    // RVA: 0xB2F | Ordinal: 2864
        void pushEvent(struct Mission::TrackEvent &);

    // RVA: 0xB62 | Ordinal: 2915
        void removeConsumer(class ITrackEventsConsumer *);

    // RVA: 0xC22 | Ordinal: 3107
        void stopReading(void);

    // RVA: 0x2C4 | Ordinal: 709
        void _TrackController(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_TRACKCONTROLLER_HPP
