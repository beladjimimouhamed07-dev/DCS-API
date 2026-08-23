#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRadarAltimeterBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRadarAltimeterBase
{
public:

    // RVA: 0x893 | Ordinal: 2196
        void SetCommand(int, float);

    // RVA: 0x184 | Ordinal: 389
        void avRadarAltimeterBase(class cockpit::avRadarAltimeterBase const &);

    // RVA: 0x185 | Ordinal: 390
        void avRadarAltimeterBase(void);

    // RVA: 0xA63 | Ordinal: 2660
        void check_antenna_limits(class wPosition3<float> const &);

    // RVA: 0xA8B | Ordinal: 2700
        void check_surface_intersection(class wPosition3<float> &, float &);

    // RVA: 0xBBB | Ordinal: 3004
        void dropTrack(void);

    // RVA: 0xC41 | Ordinal: 3138
        void getAltitude(void) const;

    // RVA: 0xC46 | Ordinal: 3143
        void getApertureSize(void) const;

    // RVA: 0xC8D | Ordinal: 3214
        void getDistanceLimit(void) const;

    // RVA: 0xC8E | Ordinal: 3215
        void getDistanceLimitPreciseCalc(void) const;

    // RVA: 0xC8F | Ordinal: 3216
        void getDistanceRayToSurface(class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0xC9F | Ordinal: 3232
        void getElecPower(void) const;

    // RVA: 0xD13 | Ordinal: 3348
        void getIsContact(void) const;

    // RVA: 0xD57 | Ordinal: 3416
        void getMode(void) const;

    // RVA: 0xDCF | Ordinal: 3536
        void getSearchTime(void) const;

    // RVA: 0xE04 | Ordinal: 3589
        void getStartUpTime(void) const;

    // RVA: 0x11DF | Ordinal: 4576
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1306 | Ordinal: 4871
        void l_get_altitude(struct lua_State *);

    // RVA: 0x1307 | Ordinal: 4872
        void l_get_aperture_size(struct lua_State *);

    // RVA: 0x130F | Ordinal: 4880
        void l_get_distance_limit(struct lua_State *);

    // RVA: 0x1316 | Ordinal: 4887
        void l_get_mode(struct lua_State *);

    // RVA: 0x1342 | Ordinal: 4931
        void l_metatable_name(void) const;

    // RVA: 0x1365 | Ordinal: 4966
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14F4 | Ordinal: 5365
        void post_initialize(void);

    // RVA: 0x15FA | Ordinal: 5627
        void repair(void);

    // RVA: 0x1627 | Ordinal: 5672
        void resetOutput(class wLineInterpolation<float> &, float, double, double);

    // RVA: 0x169C | Ordinal: 5789
        void setAntennaLimits(float, float);

    // RVA: 0x16A0 | Ordinal: 5793
        void setApertureSize(float);

    // RVA: 0x16D8 | Ordinal: 5849
        void setDistanceLimit(float);

    // RVA: 0x16D9 | Ordinal: 5850
        void setDistanceLimitPreciseCalc(float);

    // RVA: 0x1736 | Ordinal: 5943
        void setIsContact(bool);

    // RVA: 0x1758 | Ordinal: 5977
        void setMode(enum cockpit::avRadarAltimeterBase::RALTIMETER_MODES);

    // RVA: 0x17A9 | Ordinal: 6058
        void setSearchTime(float);

    // RVA: 0x17B7 | Ordinal: 6072
        void setStartUpTime(double);

    // RVA: 0x185D | Ordinal: 6238
        void set_damage(unsigned int, bool);

    // RVA: 0x1ACC | Ordinal: 6861
        void update(void);

    // RVA: 0x1B22 | Ordinal: 6947
        void updateOutput(class wLineInterpolation<float> &, float, double, double);

    // RVA: 0x33A | Ordinal: 827
        void _avRadarAltimeterBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRADARALTIMETERBASE_HPP
