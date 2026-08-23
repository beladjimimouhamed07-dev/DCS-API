#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActionDispatcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ActionDispatcher
{
public:

    // RVA: 0xE | Ordinal: 15
        void ActionDispatcher(void);

    // RVA: 0x611 | Ordinal: 1554
        void addFilter(class IActionFilter *);

    // RVA: 0x774 | Ordinal: 1909
        void dispatch(struct ActionEntry const &, enum ActionOrigin, unsigned int);

    // RVA: 0x775 | Ordinal: 1910
        void dispatchAnalogAction(unsigned int, double);

    // RVA: 0x776 | Ordinal: 1911
        void dispatchDigitalAction(unsigned int);

    // RVA: 0x9B0 | Ordinal: 2481
        void isFilterActive(class IActionFilter *) const;

    // RVA: 0xA9F | Ordinal: 2720
        void onMissionEnd(void);

    // RVA: 0xAA2 | Ordinal: 2723
        void onMissionStart(class TrackController *);

    // RVA: 0xB22 | Ordinal: 2851
        void prependFilter(class IActionFilter *);

    // RVA: 0xB2B | Ordinal: 2860
        void process_(struct ActionEntry, enum ActionOrigin, unsigned int);

    // RVA: 0xB63 | Ordinal: 2916
        void removeFilter(class IActionFilter *);

    // RVA: 0xC71 | Ordinal: 3186
        void writeToTrack_(struct ActionEntry const &);

    // RVA: 0x22C | Ordinal: 557
        void _ActionDispatcher(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIONDISPATCHER_HPP
