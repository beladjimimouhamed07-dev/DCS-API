#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avWeap_ReleaseTimer_Activity
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avWeap_ReleaseTimer_Activity
{
public:

    // RVA: 0x78A | Ordinal: 1931
        void Die(void);

    // RVA: 0x829 | Ordinal: 2090
        void NextEvent(void);

    // RVA: 0x8BC | Ordinal: 2237
        void SetParent(class cockpit::avRippReleaseCapable *);

    // RVA: 0x1DD | Ordinal: 478
        void avWeap_ReleaseTimer_Activity(class cockpit::avRippReleaseCapable *);

    // RVA: 0x187E | Ordinal: 6271
        void set_dtime(double);

    // RVA: 0x19EE | Ordinal: 6639
        void start_unloading(double);

    // RVA: 0x19EF | Ordinal: 6640
        void start_unloading_single(double);

    // RVA: 0x19F0 | Ordinal: 6641
        void start_unloading_with_first_shot_delay(double, double);

    // RVA: 0x1A0C | Ordinal: 6669
        void stop_unloading(void);

    // RVA: 0x36D | Ordinal: 878
        void _avWeap_ReleaseTimer_Activity(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVWEAP_RELEASETIMER_ACTIVITY_HPP
