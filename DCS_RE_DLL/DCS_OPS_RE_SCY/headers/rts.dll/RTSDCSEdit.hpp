#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rts.dll
// Class: RTSDCSEdit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace rtsdcs {

class RTSDCSEdit
{
public:

    // RVA: 0x1 | Ordinal: 2
        void RTSDCSEdit(void);

    // RVA: 0x4 | Ordinal: 5
        void addArmamentToConfig(char const *, unsigned int);

    // RVA: 0x5 | Ordinal: 6
        void addCity(char const *, char const *, char const *);

    // RVA: 0x6 | Ordinal: 7
        void addConfig(char const *, char const *, float, float, double, float);

    // RVA: 0x7 | Ordinal: 8
        void addFormation(char const *, char const *, char const *, char const *, char const *, char const *, char const *, char const *, unsigned int, float);

    // RVA: 0x8 | Ordinal: 9
        void addFormation(char const *, char const *, char const *, char const *, double, double, char const *, char const *, char const *, char const *, unsigned int, float);

    // RVA: 0x9 | Ordinal: 10
        void addGroupUnit(char const *, char const *, char const *, char const *, char const *, char const *, float, unsigned int);

    // RVA: 0xA | Ordinal: 11
        void addGroupUnit(char const *, char const *, char const *, char const *, char const *, double, double, class ed::vector<double, class ed::allocator<double>> const &, float, unsigned int);

    // RVA: 0xB | Ordinal: 12
        void addHeightMap(unsigned int, unsigned int);

    // RVA: 0xC | Ordinal: 13
        void addNode(char const *, char const *, double, double, float);

    // RVA: 0xD | Ordinal: 14
        void addPOI(char const *, char const *, char const *, char const *, char const *, double, double, double, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0xE | Ordinal: 15
        void addParamToConfig(char const *, float);

    // RVA: 0xF | Ordinal: 16
        void addParamToWeaponConfig(char const *, float);

    // RVA: 0x11 | Ordinal: 18
        void addPointOnSurface(double, double, float, float, bool);

    // RVA: 0x13 | Ordinal: 20
        void addPylonLoadToConfig(char const *, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x14 | Ordinal: 21
        void addRoleItem(char const *, char const *, float);

    // RVA: 0x15 | Ordinal: 22
        void addRoute(char const *, char const *, char const *, char const *, char const *, double *, struct rtsdcs::VecRoute *, unsigned int);

    // RVA: 0x17 | Ordinal: 24
        void addTaskToConfig(char const *, char const *);

    // RVA: 0x18 | Ordinal: 25
        void addTerrainName(class ed::basic_string<char> const &);

    // RVA: 0x19 | Ordinal: 26
        void addVSTItem(char const *, char const *, float);

    // RVA: 0x1A | Ordinal: 27
        void addWeapon(char const *, char const *, char const *, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, double, double, float, float, float, float, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const *, unsigned __int64, double);

    // RVA: 0x1B | Ordinal: 28
        void addZone(char const *, char const *, char const *, char const *, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, float);

    // RVA: 0x1C | Ordinal: 29
        void beginGenerate(char const *, bool, unsigned int);

    // RVA: 0x1D | Ordinal: 30
        void buildNavMesh(class ed::basic_string<char> const &);

    // RVA: 0x20 | Ordinal: 33
        void close(void);

    // RVA: 0x22 | Ordinal: 35
        void delNode(char const *);

    // RVA: 0x24 | Ordinal: 37
        void delRoute(char const *, char const *);

    // RVA: 0x25 | Ordinal: 38
        void delRoute(char const *);

    // RVA: 0x26 | Ordinal: 39
        void delZone(char const *);

    // RVA: 0x28 | Ordinal: 41
        void drawNavMesh(class std::function<void __cdecl(class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>> const &, class osg::Vec4f const &)>);

    // RVA: 0x29 | Ordinal: 42
        void endFormation(void);

    // RVA: 0x2A | Ordinal: 43
        void endGenerate(void);

    // RVA: 0x2C | Ordinal: 45
        void findNode(double &, double &, double);

    // RVA: 0x2D | Ordinal: 46
        void findPath(class ed::vector<struct rtsdcs::VecRoute, class ed::allocator<struct rtsdcs::VecRoute>> &, float, float, float, float);

    // RVA: 0x2F | Ordinal: 48
        void genInfo(void);

    // RVA: 0x35 | Ordinal: 54
        void getDistForWeapon(class ed::basic_string<char> const &) const;

    // RVA: 0x36 | Ordinal: 55
        void getMap(class ed::vector<struct rtsdcs::VecRoute, class ed::allocator<struct rtsdcs::VecRoute>> &, class ed::list<class std::shared_ptr<struct rtsdcs::IndRoute>, class ed::allocator<class std::shared_ptr<struct rtsdcs::IndRoute>>> &, class ed::list<struct rtsdcs::ZoneRoute, class ed::allocator<struct rtsdcs::ZoneRoute>> &) const;

    // RVA: 0x37 | Ordinal: 56
        void getNavMeshBounds(class osg::BoundingBoxImpl<class osg::Vec3f> &);

    // RVA: 0x38 | Ordinal: 57
        void getNumBombs(class ed::basic_string<char> const &) const;

    // RVA: 0x3A | Ordinal: 59
        void getPointsOfNavMesh(class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>> &, class ed::vector<class osg::Vec4f, class ed::allocator<class osg::Vec4f>> &);

    // RVA: 0x3D | Ordinal: 62
        void getRTSInfo(void);

    // RVA: 0x3F | Ordinal: 64
        void getRegFromName(class ed::basic_string<char> const &) const;

    // RVA: 0x44 | Ordinal: 69
        void getSusps(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class std::map<class ed::basic_string<char>, class std::map<unsigned int, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>>>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class std::map<unsigned int, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>>>>>> &) const;

    // RVA: 0x48 | Ordinal: 73
        void getTrackMinMax(char const *);

    // RVA: 0x4A | Ordinal: 75
        void getTypeByModel(char const *) const;

    // RVA: 0x4B | Ordinal: 76
        void getTypeByWeapon(char const *) const;

    // RVA: 0x4E | Ordinal: 79
        void getWeaponOnApt(class ed::basic_string<char> const &, class std::map<class ed::basic_string<char>, unsigned __int64, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, unsigned __int64>>> &) const;

    // RVA: 0x4F | Ordinal: 80
        void getWeaponUnitTable(class std::map<class ed::basic_string<char>, class std::map<class ed::basic_string<char>, float, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, float>>>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class std::map<class ed::basic_string<char>, float, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, float>>>>>> &) const;

    // RVA: 0x51 | Ordinal: 82
        void getWinMode(void) const;

    // RVA: 0x55 | Ordinal: 86
        void loadNavMesh(class ed::basic_string<char> const &);

    // RVA: 0x56 | Ordinal: 87
        void mapPrepare(void);

    // RVA: 0x57 | Ordinal: 88
        void moveNode(char const *, double, double);

    // RVA: 0x5B | Ordinal: 92
        void open(char const *, unsigned int);

    // RVA: 0x5F | Ordinal: 96
        void save(char const *);

    // RVA: 0x61 | Ordinal: 98
        void setAptCountry(class ed::basic_string<char> const &, class ed::basic_string<char> const &) const;

    // RVA: 0x66 | Ordinal: 103
        void setNavPathParams(class ed::basic_string<char> const &);

    // RVA: 0x6B | Ordinal: 108
        void setRouteColor(char const *, char const *);

    // RVA: 0x70 | Ordinal: 113
        void setTrackTime(char const *, double, class ed::basic_string<char> const &);

    // RVA: 0x71 | Ordinal: 114
        void setWeaponOnApt(class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned __int64) const;

    // RVA: 0x72 | Ordinal: 115
        void storeNavMesh(class ed::basic_string<char> const &);

    // RVA: 0x3 | Ordinal: 4
        void _RTSDCSEdit(void);
};

} // namespace rtsdcs

// DCS_OPS_RE_RTS.DLL_RTSDCSEDIT_HPP
