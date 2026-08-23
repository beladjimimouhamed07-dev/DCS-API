#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avImuStateVector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avImuStateVector
{
public:

    // RVA: 0x132 | Ordinal: 307
        void avImuStateVector(struct cockpit::avImuStateVector &&);

    // RVA: 0x133 | Ordinal: 308
        void avImuStateVector(struct cockpit::avImuStateVector const &);

    // RVA: 0x134 | Ordinal: 309
        void avImuStateVector(void);

    // RVA: 0x9D4 | Ordinal: 2517
        void calculateSigmaOfGyrocompassing(void);

    // RVA: 0xC44 | Ordinal: 3141
        void getAngularPlatformBias(void) const;

    // RVA: 0xCF4 | Ordinal: 3317
        void getHeadingBeforeMalfunction(void);

    // RVA: 0xCF8 | Ordinal: 3321
        void getHeadingReady(void);

    // RVA: 0xD81 | Ordinal: 3458
        void getOutputVelocityReady(void);

    // RVA: 0xDE4 | Ordinal: 3557
        void getSigmaOfGyrocompassing(void);

    // RVA: 0x1699 | Ordinal: 5786
        void setAngularBiases(class osg::Vec3d);

    // RVA: 0x16DB | Ordinal: 5852
        void setDriftSpeed(class osg::Vec3d);

    // RVA: 0x1721 | Ordinal: 5922
        void setHeadingBias(double);

    // RVA: 0x1724 | Ordinal: 5925
        void setHeadingErrorCoefficient(float);

    // RVA: 0x1726 | Ordinal: 5927
        void setHeadingReady(bool);

    // RVA: 0x1B08 | Ordinal: 6921
        void updateAngularPlatformBias(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIMUSTATEVECTOR_HPP
