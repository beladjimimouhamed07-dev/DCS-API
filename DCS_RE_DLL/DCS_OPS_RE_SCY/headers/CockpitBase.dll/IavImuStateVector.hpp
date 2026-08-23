#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: IavImuStateVector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace navigation {

class IavImuStateVector
{
public:

    // RVA: 0x62 | Ordinal: 99
        void IavImuStateVector(struct cockpit::navigation::IavImuStateVector &&);

    // RVA: 0x63 | Ordinal: 100
        void IavImuStateVector(struct cockpit::navigation::IavImuStateVector const &);

    // RVA: 0x64 | Ordinal: 101
        void IavImuStateVector(void);

    // RVA: 0xC43 | Ordinal: 3140
        void getAngularPlatformBias(void);

    // RVA: 0xDE3 | Ordinal: 3556
        void getSigmaOfGyrocompassing(void);

    // RVA: 0x169B | Ordinal: 5788
        void setAngularPlatformBias(class osg::Vec3d);

    // RVA: 0x17AE | Ordinal: 6063
        void setSigmaOfGyrocompassing(double);
};

} // namespace navigation
} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_IAVIMUSTATEVECTOR_HPP
