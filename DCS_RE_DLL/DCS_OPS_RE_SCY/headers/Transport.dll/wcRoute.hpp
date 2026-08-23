#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: wcRoute
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcRoute
{
public:

    // RVA: 0x97 | Ordinal: 152
        void CanChangeFormation(double);

    // RVA: 0x98 | Ordinal: 153
        void ChangeOnPathFormation(class ed::Ptr<class Formation, struct ed::DefaultDeleter>);

    // RVA: 0xA3 | Ordinal: 164
        void ClearPath(void);

    // RVA: 0xA4 | Ordinal: 165
        void ClearRoute(void);

    // RVA: 0xE2 | Ordinal: 227
        void InitPar(int);

    // RVA: 0xEA | Ordinal: 235
        void Length(void) const;

    // RVA: 0xF2 | Ordinal: 243
        void Next(float);

    // RVA: 0x108 | Ordinal: 265
        void Prev(float);

    // RVA: 0x111 | Ordinal: 274
        void RevertOnPathFormation(void);

    // RVA: 0x1C2 | Ordinal: 451
        void createRouteWORoad(class osg::Vec3d &, class osg::Vec3d &, float, bool, double);

    // RVA: 0x2B9 | Ordinal: 698
        void getPath(int);

    // RVA: 0x2BA | Ordinal: 699
        void getPathParam(class osg::Vec2d const &, int) const;

    // RVA: 0x2BD | Ordinal: 702
        void getPointByPathParam(float, class osg::Vec2d &, class osg::Vec2d *);

    // RVA: 0x2D7 | Ordinal: 728
        void getRoutePoint(int);

    // RVA: 0x306 | Ordinal: 775
        void getWaypointByNum(int) const;

    // RVA: 0x359 | Ordinal: 858
        void isPathFormationChanged(void) const;

    // RVA: 0x462 | Ordinal: 1123
        void reset_indexed_route(unsigned int, class edterrain::IRoute *);

    // RVA: 0x463 | Ordinal: 1124
        void reset_temp_route(class edterrain::IRoute *);

    // RVA: 0x498 | Ordinal: 1177
        void setConstructedGroupPath(class std::map<float, struct RoutePoint, struct std::less<float>, class ed::allocator<struct std::pair<float const, struct RoutePoint>>> const &, class Registered const *);

    // RVA: 0x4E4 | Ordinal: 1253
        void setSpeed(double, int);

    // RVA: 0x4F6 | Ordinal: 1271
        void setTempRoute(class wcColumn *, class edterrain::IRoute *);

    // RVA: 0x56C | Ordinal: 1389
        void updateRoute(class wcColumn const *, class edterrain::IRoute *, int);

    // RVA: 0x1F | Ordinal: 32
        void wcRoute(struct RoutePoint **, int);

    // RVA: 0x20 | Ordinal: 33
        void wcRoute(struct RoutePoint *, int);

    // RVA: 0x21 | Ordinal: 34
        void wcRoute(void);

    // RVA: 0x37 | Ordinal: 56
        void _wcRoute(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WCROUTE_HPP
