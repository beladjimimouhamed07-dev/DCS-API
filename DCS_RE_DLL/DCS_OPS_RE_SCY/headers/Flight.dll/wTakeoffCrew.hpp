#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wTakeoffCrew
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTakeoffCrew
{
public:

    // RVA: 0x277 | Ordinal: 632
        void notify_rearm_refuel(enum REARM_REFUEL_STATUS, bool);

    // RVA: 0x278 | Ordinal: 633
        void notify_rearm_refuel_btn_cancel(void);

    // RVA: 0x321 | Ordinal: 802
        void show_parking_menu(void);

    // RVA: 0x331 | Ordinal: 818
        void teleport_player(void);

    // RVA: 0x334 | Ordinal: 821
        void toggle_helpers(void);

    // RVA: 0x335 | Ordinal: 822
        void toggle_messages(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WTAKEOFFCREW_HPP
