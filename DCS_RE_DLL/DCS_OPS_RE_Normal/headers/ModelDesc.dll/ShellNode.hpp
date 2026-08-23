#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ModelDesc.dll
// Class: ShellNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ShellNode
{
public:

    // RVA: 0x40 | Ordinal: 65
        void intersect(struct osg::OrientedBoundingBoxImpl<class osg::Vec3d> const &, struct model::InstanceData const &) const;

    // RVA: 0x41 | Ordinal: 66
        void intersect(class osg::Vec3f const &, class osg::Vec3f const &, struct model::InstanceData const &, float &, class osg::Vec3f &) const;

    // RVA: 0x42 | Ordinal: 67
        void intersectAnim(class osg::Vec3f const &, class osg::Vec3f const &, struct model::InstanceData const &, float &, class osg::Vec3f &) const;

    // RVA: 0x43 | Ordinal: 68
        void intersectCone(class osg::Matrixd const &, class osg::Matrixd const &, float, float, float, float, struct model::InstanceData const &, class osg::Vec3d &, float &, float &, float &) const;

    // RVA: 0x44 | Ordinal: 69
        void intersectStat(class osg::Vec3f const &, class osg::Vec3f const &, struct model::InstanceData const &, float &, class osg::Vec3f &) const;
};

} // namespace model

// DCS_OPS_RE_MODELDESC.DLL_SHELLNODE_HPP
