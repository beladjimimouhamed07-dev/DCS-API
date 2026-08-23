#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: CameraFlyRotationComponent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CameraFlyRotationComponent
{
public:

    // RVA: 0xD | Ordinal: 14
        void CameraFlyRotationComponent(class CameraFlyRotationComponent &&);

    // RVA: 0xE | Ordinal: 15
        void CameraFlyRotationComponent(class CameraFlyRotationComponent const &);

    // RVA: 0xF | Ordinal: 16
        void CameraFlyRotationComponent(void);

    // RVA: 0x9C | Ordinal: 157
        void addTargetPoint(class osg::Vec3f const &);

    // RVA: 0x9E | Ordinal: 159
        void addWayPoint(class osg::Vec3f const &);

    // RVA: 0xDF | Ordinal: 224
        void getIsInFlight(void) const;

    // RVA: 0xF1 | Ordinal: 242
        void getQuatByDir(class osg::Vec3f);

    // RVA: 0x102 | Ordinal: 259
        void init(void);

    // RVA: 0x131 | Ordinal: 306
        void resetParams(void);

    // RVA: 0x188 | Ordinal: 393
        void startFly(void);

    // RVA: 0x18B | Ordinal: 396
        void update(double);

    // RVA: 0x23 | Ordinal: 36
        void _CameraFlyRotationComponent(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_CAMERAFLYROTATIONCOMPONENT_HPP
