#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avImuStateVectorV2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avImuStateVectorV2
{
public:

    // RVA: 0x135 | Ordinal: 310
        void avImuStateVectorV2(struct cockpit::avImuStateVectorV2 &&);

    // RVA: 0x136 | Ordinal: 311
        void avImuStateVectorV2(struct cockpit::avImuStateVectorV2 const &);

    // RVA: 0x137 | Ordinal: 312
        void avImuStateVectorV2(void);

    // RVA: 0x9D5 | Ordinal: 2518
        void calculateSigmaOfGyrocompassing(void);

    // RVA: 0xC45 | Ordinal: 3142
        void getAngularPlatformBias(void) const;

    // RVA: 0xCF5 | Ordinal: 3318
        void getHeadingBeforeMalfunction(void);

    // RVA: 0xCF9 | Ordinal: 3322
        void getHeadingReady(void);

    // RVA: 0xD82 | Ordinal: 3459
        void getOutputVelocityReady(void);

    // RVA: 0x169A | Ordinal: 5787
        void setAngularBiases(class osg::Vec3d);

    // RVA: 0x16DC | Ordinal: 5853
        void setDriftSpeed(class osg::Vec3d);

    // RVA: 0x1722 | Ordinal: 5923
        void setHeadingBias(double);

    // RVA: 0x1725 | Ordinal: 5926
        void setHeadingErrorCoefficient(float);

    // RVA: 0x1727 | Ordinal: 5928
        void setHeadingReady(bool);

    // RVA: 0x1B09 | Ordinal: 6922
        void updateAngularPlatformBias(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIMUSTATEVECTORV2_HPP
