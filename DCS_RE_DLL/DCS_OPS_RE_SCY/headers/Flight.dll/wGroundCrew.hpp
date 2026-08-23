#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wGroundCrew
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGroundCrew
{
public:

    // RVA: 0xE9 | Ordinal: 234
        void acquired_point(void) const;

    // RVA: 0xEA | Ordinal: 235
        void acquired_point_check(void) const;

    // RVA: 0xEB | Ordinal: 236
        void acquired_point_check(class osg::Vec3d const &, class MovingObject const *);

    // RVA: 0xEC | Ordinal: 237
        void acquired_point_check(class MovingObject const *, class MovingObject const *);

    // RVA: 0x11D | Ordinal: 286
        void checkRefuelCommandAvailability(struct wGroundCrewCommand const &, float *, float *);

    // RVA: 0x123 | Ordinal: 292
        void check_resources_by_command(enum GroundCrewCommandType, float *) const;

    // RVA: 0x14F | Ordinal: 336
        void default_position(bool);

    // RVA: 0x167 | Ordinal: 360
        void free_activity(void);

    // RVA: 0x16A | Ordinal: 363
        void generic_message(enum wMsg);

    // RVA: 0x199 | Ordinal: 410
        void getFuelResourceType(void) const;

    // RVA: 0x19E | Ordinal: 415
        void getGroundCrewCommand(class wMessage *);

    // RVA: 0x1A5 | Ordinal: 422
        void getLA(void) const;

    // RVA: 0x1B6 | Ordinal: 439
        void getMessageFromReply(enum GroundCrewConditionalReply);

    // RVA: 0x1BE | Ordinal: 447
        void getOwner(void) const;

    // RVA: 0x1D1 | Ordinal: 466
        void getRequestedFuel(struct wGroundCrewCommand const &) const;

    // RVA: 0x20D | Ordinal: 526
        void get_current_task(void) const;

    // RVA: 0x217 | Ordinal: 536
        void get_point_of_serviceable_object(void) const;

    // RVA: 0x218 | Ordinal: 537
        void get_point_of_serviceable_object(class MovingObject const *, class MovingObject const *);

    // RVA: 0x219 | Ordinal: 538
        void get_queue_size(void) const;

    // RVA: 0x21B | Ordinal: 540
        void get_resource_name(enum GroundCrewCommandType) const;

    // RVA: 0x243 | Ordinal: 580
        void isMessageLegible(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x25B | Ordinal: 604
        void is_busy(void) const;

    // RVA: 0x25C | Ordinal: 605
        void is_connected(void) const;

    // RVA: 0x271 | Ordinal: 626
        void next_command(void);

    // RVA: 0x273 | Ordinal: 628
        void notify_connect(void);

    // RVA: 0x274 | Ordinal: 629
        void notify_deck_crew(bool);

    // RVA: 0x275 | Ordinal: 630
        void notify_disconnect(void);

    // RVA: 0x276 | Ordinal: 631
        void notify_move(void);

    // RVA: 0x27B | Ordinal: 636
        void onActivityEvent(void);

    // RVA: 0x298 | Ordinal: 665
        void populate_crew(void);

    // RVA: 0x2CD | Ordinal: 718
        void processMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x2D3 | Ordinal: 724
        void reloadActivityEvent(struct wGroundCrewCommand const &, int);

    // RVA: 0x2D4 | Ordinal: 725
        void reloadActivityFinish(struct wGroundCrewCommand const &);

    // RVA: 0x2D9 | Ordinal: 730
        void request_task(struct wGroundCrewCommand);

    // RVA: 0x308 | Ordinal: 777
        void setLA(class IwoLA *);

    // RVA: 0x30B | Ordinal: 780
        void setOwner(class wGroundCrewOwner *);

    // RVA: 0x319 | Ordinal: 794
        void setTransmitCommNetFlags(unsigned int);

    // RVA: 0x322 | Ordinal: 803
        void sound_get_params(struct SND_HostParams *);

    // RVA: 0x323 | Ordinal: 804
        void sound_init(void);

    // RVA: 0x324 | Ordinal: 805
        void sound_update(void);

    // RVA: 0x329 | Ordinal: 810
        void startMessageTransmission(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> const &, bool);

    // RVA: 0x32A | Ordinal: 811
        void start_command(struct wGroundCrewCommand const &);

    // RVA: 0x32D | Ordinal: 814
        void stop(void);

    // RVA: 0x18 | Ordinal: 25
        void wGroundCrew(class wGroundCrewOwner *, class IwoLA *);

    // RVA: 0x19 | Ordinal: 26
        void wGroundCrew(void);

    // RVA: 0x35 | Ordinal: 54
        void _wGroundCrew(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WGROUNDCREW_HPP
