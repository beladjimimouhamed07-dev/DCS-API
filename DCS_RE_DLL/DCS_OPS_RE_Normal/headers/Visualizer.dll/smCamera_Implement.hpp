#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: smCamera_Implement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class smCamera_Implement
{
public:

    // RVA: 0x41 | Ordinal: 66
        void CreateVolume(unsigned int);

    // RVA: 0x42 | Ordinal: 67
        void DefaultDistFactors(unsigned int);

    // RVA: 0x45 | Ordinal: 70
        void DistFactor(unsigned int);

    // RVA: 0x56 | Ordinal: 87
        void GetAspect(void) const;

    // RVA: 0x57 | Ordinal: 88
        void GetCamera(void);

    // RVA: 0x58 | Ordinal: 89
        void GetDistance(unsigned int) const;

    // RVA: 0x59 | Ordinal: 90
        void GetDistance(class viObject *) const;

    // RVA: 0x5A | Ordinal: 91
        void GetFarClip(void) const;

    // RVA: 0x5B | Ordinal: 92
        void GetNearClip(void) const;

    // RVA: 0x5D | Ordinal: 94
        void GetOrigin(void) const;

    // RVA: 0x62 | Ordinal: 99
        void LoadConfig(class Lua::Config &);

    // RVA: 0x72 | Ordinal: 115
        void SetAspect(float);

    // RVA: 0x73 | Ordinal: 116
        void SetCamType(enum Graphics::Camera::Type);

    // RVA: 0x74 | Ordinal: 117
        void SetClipDistances(float, float);

    // RVA: 0x78 | Ordinal: 121
        void SetDistFactors(unsigned int, float, float, float);

    // RVA: 0x79 | Ordinal: 122
        void SetDistMultiplier(float);

    // RVA: 0x7A | Ordinal: 123
        void SetHorAngle(float);

    // RVA: 0x7C | Ordinal: 125
        void SetMaxDistance(float);

    // RVA: 0x7D | Ordinal: 126
        void SetObjectMask(unsigned int);

    // RVA: 0x7E | Ordinal: 127
        void SetOrigin(class osg::Vec3d const &);

    // RVA: 0x7F | Ordinal: 128
        void SetParallelBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x80 | Ordinal: 129
        void SetParams(class smCamera const &);

    // RVA: 0x81 | Ordinal: 130
        void SetPosition(class wPosition3<double> const &);

    // RVA: 0x82 | Ordinal: 131
        void SetProjBounds(float const *);

    // RVA: 0xAC | Ordinal: 173
        void copy(class smCamera_Implement const &, bool, bool, class osg::Vec2f const &);

    // RVA: 0xD1 | Ordinal: 210
        void getClipRegion(int) const;

    // RVA: 0x20 | Ordinal: 33
        void smCamera_Implement(enum vCameraType_e, enum vCameraSubType_e);

    // RVA: 0x2E | Ordinal: 47
        void _smCamera_Implement(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_SMCAMERA_IMPLEMENT_HPP
