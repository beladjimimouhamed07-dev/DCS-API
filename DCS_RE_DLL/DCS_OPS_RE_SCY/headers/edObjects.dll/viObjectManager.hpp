#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viObjectManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viObjectManager
{
public:

    // RVA: 0xAF | Ordinal: 176
        void Create(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0xC3 | Ordinal: 196
        void GetBoxList(class osg::Vec3f const &, class osg::Vec3f const &, bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, unsigned int);

    // RVA: 0xC4 | Ordinal: 197
        void GetBoxList(class osg::Vec3f const &, class osg::Vec3f const &, class viObject **, int, unsigned int);

    // RVA: 0xC5 | Ordinal: 198
        void GetCameraList(class wPosition3<float> &, float, float, bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, unsigned int, float);

    // RVA: 0xC6 | Ordinal: 199
        void GetCameraList(class wPosition3<float> &, float, float, class viObject **, int, unsigned int);

    // RVA: 0xD5 | Ordinal: 214
        void GetObjects(class ClipVolume const *, bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, unsigned int);

    // RVA: 0xD6 | Ordinal: 215
        void GetObjects(class ClipVolume const *, class viObject **, int, unsigned int);

    // RVA: 0xE1 | Ordinal: 226
        void GetSegmentList(class osg::Vec3f const &, class osg::Vec3f const &, bool (__cdecl *)(class viObject *, class viSearch *, void *), void *, unsigned int);

    // RVA: 0xE2 | Ordinal: 227
        void GetSegmentList(class osg::Vec3f const &, class osg::Vec3f const &, class viObject **, int, unsigned int);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VIOBJECTMANAGER_HPP
