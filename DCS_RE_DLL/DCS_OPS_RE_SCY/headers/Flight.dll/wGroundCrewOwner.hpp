#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wGroundCrewOwner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGroundCrewOwner
{
public:

    // RVA: 0xF7 | Ordinal: 248
        void add_ground_crew(class IwoLA *);

    // RVA: 0x103 | Ordinal: 260
        void call_ground_crew(class IwoLA *, bool);

    // RVA: 0x121 | Ordinal: 290
        void check_la_parked(unsigned int);

    // RVA: 0x122 | Ordinal: 291
        void check_resource(unsigned char, unsigned int *, float *) const;

    // RVA: 0x126 | Ordinal: 295
        void clear(void);

    // RVA: 0x14C | Ordinal: 333
        void crews_gui(void);

    // RVA: 0x168 | Ordinal: 361
        void free_ground_crew(class IwoLA *);

    // RVA: 0x1BC | Ordinal: 445
        void getObject(void);

    // RVA: 0x1FB | Ordinal: 508
        void getWarehouse(void);

    // RVA: 0x1FC | Ordinal: 509
        void getWarehouse(void) const;

    // RVA: 0x208 | Ordinal: 521
        void get_carrier_crew(int);

    // RVA: 0x209 | Ordinal: 522
        void get_carrier_crew_config_hash(void);

    // RVA: 0x20A | Ordinal: 523
        void get_character_env(void);

    // RVA: 0x20C | Ordinal: 525
        void get_crews_count(void) const;

    // RVA: 0x20E | Ordinal: 527
        void get_ground_crew(class IwoLA *) const;

    // RVA: 0x20F | Ordinal: 528
        void get_gui_mutex(void);

    // RVA: 0x220 | Ordinal: 545
        void get_takeoff_carrier_crew(void);

    // RVA: 0x260 | Ordinal: 609
        void is_operational(void) const;

    // RVA: 0x289 | Ordinal: 650
        void on_activity_event(class wGroundCrewOwnerActivity *);

    // RVA: 0x28C | Ordinal: 653
        void on_resource_expenditure(unsigned char, float);

    // RVA: 0x297 | Ordinal: 664
        void populate_carrier_crew(void);

    // RVA: 0x2D6 | Ordinal: 727
        void remove_ground_crew(class wGroundCrew *);

    // RVA: 0x31B | Ordinal: 796
        void setWarehouse(class IwWarehouse *, bool);

    // RVA: 0x33F | Ordinal: 832
        void update_carrier_crews(float);

    // RVA: 0x1A | Ordinal: 27
        void wGroundCrewOwner(void);

    // RVA: 0x36 | Ordinal: 55
        void _wGroundCrewOwner(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WGROUNDCREWOWNER_HPP
