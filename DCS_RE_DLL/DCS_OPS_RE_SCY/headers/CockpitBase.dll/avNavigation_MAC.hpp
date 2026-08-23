#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avNavigation_MAC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avNavigation_MAC
{
public:

    // RVA: 0x764 | Ordinal: 1893
        void AirdromePointerValid(class MovingObject *) const;

    // RVA: 0x76D | Ordinal: 1902
        void CalculateArrivalPoints(void);

    // RVA: 0x76E | Ordinal: 1903
        void ChangeAirdrome(int);

    // RVA: 0x770 | Ordinal: 1905
        void ChangeNavMode(enum cockpit::NavMods_MAC);

    // RVA: 0x771 | Ordinal: 1906
        void ChangeNavMode(void);

    // RVA: 0x772 | Ordinal: 1907
        void ChangeTarget(int);

    // RVA: 0x773 | Ordinal: 1908
        void ChangeWaypoint(int);

    // RVA: 0x775 | Ordinal: 1910
        void CheckNavMode(void);

    // RVA: 0x781 | Ordinal: 1922
        void ControlNav(void);

    // RVA: 0x782 | Ordinal: 1923
        void Control_Arrival(class MovingObject *);

    // RVA: 0x783 | Ordinal: 1924
        void Control_Landing(class MovingObject *);

    // RVA: 0x784 | Ordinal: 1925
        void Control_Landing_Ship(class MovingObject *);

    // RVA: 0x785 | Ordinal: 1926
        void Control_Route(struct Waypoint *);

    // RVA: 0x799 | Ordinal: 1946
        void FindNearestAdr_ID(float *, int, bool) const;

    // RVA: 0x7BA | Ordinal: 1979
        void GetLandRoute(unsigned __int64);

    // RVA: 0x7C9 | Ordinal: 1994
        void GotoWaypointValid(void) const;

    // RVA: 0x7CD | Ordinal: 1998
        void H_Glissade_(double, double) const;

    // RVA: 0x7CC | Ordinal: 1997
        void H_Glissade_2(double, double) const;

    // RVA: 0x88F | Ordinal: 2192
        void SetCommand(int, float);

    // RVA: 0x8C0 | Ordinal: 2241
        void ShipLanding(class MovingObject *) const;

    // RVA: 0x8C1 | Ordinal: 2242
        void ShipLanding(void) const;

    // RVA: 0x16B | Ordinal: 364
        void avNavigation_MAC(class cockpit::avNavigation_MAC const &);

    // RVA: 0x16C | Ordinal: 365
        void avNavigation_MAC(void);

    // RVA: 0x969 | Ordinal: 2410
        void azimuthValid(void) const;

    // RVA: 0x9B6 | Ordinal: 2487
        void calcGammaReq(float) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void calculate_runway_data(class MovingObject *, struct RunwayDirection const *);

    // RVA: 0x9F1 | Ordinal: 2546
        void canShipLanding(void) const;

    // RVA: 0xA77 | Ordinal: 2680
        void check_glide_path_message(double, class MovingObject *);

    // RVA: 0xC2A | Ordinal: 3115
        void gear_delta_H(void) const;

    // RVA: 0xC6F | Ordinal: 3184
        void getCurrentLandingSpeed(void) const;

    // RVA: 0xCCB | Ordinal: 3276
        void getGotoAzimuth(void) const;

    // RVA: 0xCCC | Ordinal: 3277
        void getGotoRange(void) const;

    // RVA: 0xD29 | Ordinal: 3370
        void getLandingRW(class MovingObject *) const;

    // RVA: 0xD6D | Ordinal: 3438
        void getNavMode(void) const;

    // RVA: 0xDC3 | Ordinal: 3524
        void getRoute(void);

    // RVA: 0xDC4 | Ordinal: 3525
        void getRoute(void) const;

    // RVA: 0x110D | Ordinal: 4366
        void gotoIsLandingRoute(void);

    // RVA: 0x11D7 | Ordinal: 4568
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1266 | Ordinal: 4711
        void isLandingRoute(struct Waypoint const *);

    // RVA: 0x126B | Ordinal: 4716
        void isMissionRoute(void) const;

    // RVA: 0x13A1 | Ordinal: 5026
        void loadAirdromes(void);

    // RVA: 0x13A6 | Ordinal: 5031
        void loadWaypoints(void);

    // RVA: 0x1423 | Ordinal: 5156
        void nextWaypoint(void);

    // RVA: 0x14F3 | Ordinal: 5364
        void post_initialize(void);

    // RVA: 0x151D | Ordinal: 5406
        void previousWaypoint(void);

    // RVA: 0x1562 | Ordinal: 5475
        void rangeValid(void) const;

    // RVA: 0x15BD | Ordinal: 5566
        void release(void);

    // RVA: 0x1695 | Ordinal: 5782
        void setAirdromeLand(class MovingObject *);

    // RVA: 0x1767 | Ordinal: 5992
        void setNavMode(enum cockpit::NavMods_MAC);

    // RVA: 0x1928 | Ordinal: 6441
        void set_route_from_mission(void);

    // RVA: 0x1AC6 | Ordinal: 6855
        void update(void);

    // RVA: 0x1BA2 | Ordinal: 7075
        void xGliss(struct RunwayDirection const *, double) const;

    // RVA: 0x32E | Ordinal: 815
        void _avNavigation_MAC(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVNAVIGATION_MAC_HPP
