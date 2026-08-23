#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woSpot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woSpot
{
public:

    // RVA: 0x542 | Ordinal: 1347
        void Class(void) const;

    // RVA: 0x574 | Ordinal: 1397
        void GetModel(void);

    // RVA: 0x586 | Ordinal: 1415
        void GetPoint(double);

    // RVA: 0x587 | Ordinal: 1416
        void GetPoint(void);

    // RVA: 0x58A | Ordinal: 1419
        void GetPosition(void);

    // RVA: 0x58B | Ordinal: 1420
        void GetSize(void);

    // RVA: 0x5B7 | Ordinal: 1464
        void LocalBox(double);

    // RVA: 0x5C4 | Ordinal: 1477
        void OnParentChangePos(void);

    // RVA: 0x5C6 | Ordinal: 1479
        void OnParentDeath(void);

    // RVA: 0x5C8 | Ordinal: 1481
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x5D2 | Ordinal: 1491
        void Position(double);

    // RVA: 0x5FE | Ordinal: 1535
        void activate(unsigned int);

    // RVA: 0x634 | Ordinal: 1589
        void blinkControl(void) const;

    // RVA: 0x6E5 | Ordinal: 1766
        void control_light(bool);

    // RVA: 0x758 | Ordinal: 1881
        void create_infrared_spot(unsigned int, class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x759 | Ordinal: 1882
        void create_laser_spot(unsigned int, class osg::Vec3d const &, class osg::Vec3d const &, unsigned int);

    // RVA: 0x75A | Ordinal: 1883
        void create_light_beacon(unsigned int, class osg::Vec3d const &, unsigned int);

    // RVA: 0x75B | Ordinal: 1884
        void create_radar_spot(unsigned int, class osg::Vec3d const &, unsigned int);

    // RVA: 0x75C | Ordinal: 1885
        void create_smoke_spot(unsigned int, class osg::Vec3d const &, unsigned int, double);

    // RVA: 0x76F | Ordinal: 1904
        void detectLaserSpot(class wPosition3<float> &, float, class osg::Vec3f &, unsigned int);

    // RVA: 0x772 | Ordinal: 1907
        void detectSpot(class wPosition3<float> &, float, class osg::Vec3f &, unsigned int, unsigned int);

    // RVA: 0x773 | Ordinal: 1908
        void detectSpots(class wPosition3<float> &, float, class ed::vector<class woSpot *, class ed::allocator<class woSpot *>> &, unsigned int, unsigned int);

    // RVA: 0x7C8 | Ordinal: 1993
        void getAimPoint(void);

    // RVA: 0x8DD | Ordinal: 2270
        void getPositionInParentSpace(double);

    // RVA: 0x8DE | Ordinal: 2271
        void getPositionUsingMode(void) const;

    // RVA: 0x8DF | Ordinal: 2272
        void getPowerInPoint(class osg::Vec3f const &) const;

    // RVA: 0x8F3 | Ordinal: 2292
        void getShooterId(void) const;

    // RVA: 0x91B | Ordinal: 2332
        void get_blink_mode(void) const;

    // RVA: 0x928 | Ordinal: 2345
        void get_code(void) const;

    // RVA: 0x959 | Ordinal: 2394
        void get_spectrum_mask(void) const;

    // RVA: 0x95B | Ordinal: 2396
        void get_type(void) const;

    // RVA: 0x9E1 | Ordinal: 2530
        void laser_reflection_available(void) const;

    // RVA: 0xA71 | Ordinal: 2674
        void netCreate(struct spot_mail::create_msg const &);

    // RVA: 0xA76 | Ordinal: 2679
        void netDestroy(void);

    // RVA: 0xA7C | Ordinal: 2685
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0xA81 | Ordinal: 2690
        void netSendUpdate(int, int, int &);

    // RVA: 0xA84 | Ordinal: 2693
        void netUpdate(struct spot_mail::status_msg const &);

    // RVA: 0xB50 | Ordinal: 2897
        void recalc_position(class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0xB51 | Ordinal: 2898
        void recalc_position(double);

    // RVA: 0xBA5 | Ordinal: 2982
        void setDirToSpotter(class osg::Vec3f &);

    // RVA: 0xBC4 | Ordinal: 3013
        void setPower(float);

    // RVA: 0xBCD | Ordinal: 3022
        void setShooterID(unsigned int);

    // RVA: 0xBE2 | Ordinal: 3043
        void set_blink_mode(int);

    // RVA: 0xBE5 | Ordinal: 3046
        void set_code(unsigned int);

    // RVA: 0xBF1 | Ordinal: 3058
        void set_point(class osg::Vec3d const &);

    // RVA: 0xBF4 | Ordinal: 3061
        void set_ray_length(double);

    // RVA: 0xBF8 | Ordinal: 3065
        void set_spectrum_mask(unsigned int);

    // RVA: 0xBF9 | Ordinal: 3066
        void set_start_point_local(class osg::Vec3d const &);

    // RVA: 0xBFB | Ordinal: 3068
        void set_type(unsigned int);

    // RVA: 0xC18 | Ordinal: 3097
        void start_point(double) const;

    // RVA: 0xC2A | Ordinal: 3115
        void testForRender(bool, bool);

    // RVA: 0xC4C | Ordinal: 3149
        void updateReflection(void);

    // RVA: 0x21B | Ordinal: 540
        void woSpot(void);

    // RVA: 0x2EC | Ordinal: 749
        void _woSpot(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOSPOT_HPP
