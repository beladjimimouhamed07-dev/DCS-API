#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avINSv2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avINSv2
{
public:

    // RVA: 0x12D | Ordinal: 302
        void avINSv2(void);

    // RVA: 0xAE2 | Ordinal: 2787
        void common_update(void);

    // RVA: 0xC7E | Ordinal: 3199
        void getDTime(void);

    // RVA: 0xCC1 | Ordinal: 3266
        void getGeoCoordinates(void);

    // RVA: 0xCCD | Ordinal: 3278
        void getGroundGeoSpeed(void) const;

    // RVA: 0xCCE | Ordinal: 3279
        void getGroundNueSpeed(void);

    // RVA: 0xD2A | Ordinal: 3371
        void getLastExternalCoordinatesCorrectionTime(void);

    // RVA: 0xD2B | Ordinal: 3372
        void getLastExternalSpeedCorrectionTime(void);

    // RVA: 0xD68 | Ordinal: 3433
        void getNUEcoordinates(void);

    // RVA: 0xDA5 | Ordinal: 3494
        void getPositionValid(void) const;

    // RVA: 0xE51 | Ordinal: 3666
        void getWorkingTime(void);

    // RVA: 0x11C3 | Ordinal: 4548
        void initialize(void);

    // RVA: 0x1228 | Ordinal: 4649
        void initializeNavParams(class osg::Vec3d const &);

    // RVA: 0x141A | Ordinal: 5147
        void navAlgorithm_integralCorrection(struct cockpit::IavINS::Coords &, double);

    // RVA: 0x14E9 | Ordinal: 5354
        void post_initialize(void);

    // RVA: 0x15B4 | Ordinal: 5557
        void release(void);

    // RVA: 0x16C7 | Ordinal: 5832
        void setCoordinates(class osg::Vec3d const &);

    // RVA: 0x1706 | Ordinal: 5895
        void setExternalSpeedCorrectionMode(bool);

    // RVA: 0x1712 | Ordinal: 5907
        void setGeoSpeed(class osg::Vec3d const &);

    // RVA: 0x1728 | Ordinal: 5929
        void setHeight(double);

    // RVA: 0x1AB7 | Ordinal: 6840
        void update(void);

    // RVA: 0x1B13 | Ordinal: 6932
        void updateGeoCoordinates(class osg::Vec3d const &, class osg::Vec3d &);

    // RVA: 0x1B19 | Ordinal: 6938
        void updateInputStateVector(struct cockpit::avImuStateVectorV2 &);

    // RVA: 0x1B21 | Ordinal: 6946
        void updateNUECoordinates(void);

    // RVA: 0x311 | Ordinal: 786
        void _avINSv2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINSV2_HPP
