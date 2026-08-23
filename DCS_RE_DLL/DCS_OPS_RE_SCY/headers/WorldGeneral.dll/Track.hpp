#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Track
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mission {

class Track
{
public:

    // RVA: 0x1BD | Ordinal: 446
        void Track(class Mission::Track const &);

    // RVA: 0x1BE | Ordinal: 447
        void Track(class Mission::MissionReader *);

    // RVA: 0x1BF | Ordinal: 448
        void Track(class Mission::ITrackEventFilter const *);

    // RVA: 0x60F | Ordinal: 1552
        void addEvent(struct Mission::TrackEvent const &);

    // RVA: 0x784 | Ordinal: 1925
        void empty(void) const;

    // RVA: 0x84F | Ordinal: 2128
        void getLastEventTime(void) const;

    // RVA: 0x971 | Ordinal: 2418
        void hasEvents(double);

    // RVA: 0x9C8 | Ordinal: 2505
        void isTrackChunk(class ed::basic_string<char> const &);

    // RVA: 0xB1B | Ordinal: 2844
        void popEvent(void);

    // RVA: 0xB4D | Ordinal: 2894
        void readProphecy(double, class std::function<void __cdecl(struct Mission::TrackEvent)>);

    // RVA: 0xB4F | Ordinal: 2896
        void reading(void) const;

    // RVA: 0xB87 | Ordinal: 2952
        void save(class Mission::MissionWriter *);

    // RVA: 0x2C3 | Ordinal: 708
        void _Track(void);
};

} // namespace Mission

// DCS_OPS_RE_WORLDGENERAL.DLL_TRACK_HPP
