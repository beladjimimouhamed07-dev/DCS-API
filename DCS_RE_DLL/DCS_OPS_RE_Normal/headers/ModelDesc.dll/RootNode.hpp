#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ModelDesc.dll
// Class: RootNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class RootNode
{
public:

    // RVA: 0x8 | Ordinal: 9
        void calcDefShellSkinNormals(struct model::InstanceData const &) const;

    // RVA: 0xA | Ordinal: 11
        void calculateTransforms(struct model::InstanceData &, class ed::span<float const, -1>) const;

    // RVA: 0xE | Ordinal: 15
        void destroy(void);

    // RVA: 0xF | Ordinal: 16
        void enumerateSegments(class osg::Matrixd const &, struct model::InstanceData const &, class std::function<void __cdecl(char const *, class osg::Vec3f const &, class osg::Vec3f const &)> const &) const;

    // RVA: 0x11 | Ordinal: 18
        void findCloseParts(class osg::Matrixd const &, struct model::InstanceData const &, class osg::Vec3f const &, class ClipVolume const *, class std::function<void __cdecl(char const *, float)> const &) const;

    // RVA: 0x10 | Ordinal: 17
        void findCloseParts2(class osg::Matrixd const &, struct model::InstanceData const &, class osg::Vec3f const &, class ClipVolume const *, class std::function<void __cdecl(char const *, float, class osg::Vec3d const &)> const &) const;

    // RVA: 0x14 | Ordinal: 21
        void getCollisionSegmentId(char const *) const;

    // RVA: 0x15 | Ordinal: 22
        void getCollisionSegmentName(unsigned __int64) const;

    // RVA: 0x16 | Ordinal: 23
        void getCollisionShellBoundingBox(unsigned __int64, struct model::InstanceData const &) const;

    // RVA: 0x17 | Ordinal: 24
        void getCollisionShellId(char const *) const;

    // RVA: 0x18 | Ordinal: 25
        void getCollisionShellName(unsigned __int64) const;

    // RVA: 0x19 | Ordinal: 26
        void getConnectorByName(char const *);

    // RVA: 0x36 | Ordinal: 55
        void getTexturesNames(class ed::unordered_set<class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<class ed::basic_string<char>>> &) const;

    // RVA: 0x37 | Ordinal: 56
        void getTexturesTexCoords(int, class std::unordered_map<class ed::basic_string<char>, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>>>>> &) const;

    // RVA: 0x39 | Ordinal: 58
        void getUsedArgs(unsigned int *) const;

    // RVA: 0x3C | Ordinal: 61
        void getVisArgs(void) const;

    // RVA: 0x4A | Ordinal: 75
        void open(class io::IBinaryFileR &, class model::IAllocator *, struct model::ModelOptions const *);

    // RVA: 0x4D | Ordinal: 78
        void shoot(class osg::Vec3f const &, class osg::Vec3f const &, struct model::InstanceData const &, struct model::Nearest &) const;

    // RVA: 0x4E | Ordinal: 79
        void testSegmentWithBox(class osg::Vec3f const &, class osg::Vec3f const &) const;

    // RVA: 0x4F | Ordinal: 80
        void testWithBBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class std::function<void __cdecl(unsigned int, double)> const &) const;

    // RVA: 0x50 | Ordinal: 81
        void testWithCone(class osg::Matrixd const &, class osg::Matrixd const &, float, float, float, float, struct model::InstanceData const &, class boost::container::small_vector_base<struct model::CollisionConeData, class ed::allocator<struct model::CollisionConeData>, void> &);

    // RVA: 0x51 | Ordinal: 82
        void testWithModel(class osg::Matrixd const &, struct model::InstanceData const &, class model::RootNode &, class osg::Matrixd const &, struct model::InstanceData const &, class std::function<bool __cdecl(char const *, char const *, class osg::Vec3d const &, class osg::Vec3d const &, float, class osg::Vec3f const &)> const &) const;

    // RVA: 0x52 | Ordinal: 83
        void testWithModel(class osg::Matrixd const &, struct model::InstanceData const &, class model::IModel &, class osg::Matrixd const &, class model::IModelParams const *, class std::function<bool __cdecl(char const *, char const *, class osg::Vec3d const &, class osg::Vec3d const &, float, class osg::Vec3f const &)> const &) const;

    // RVA: 0x53 | Ordinal: 84
        void testWithSegment(class osg::Vec3f const &, class osg::Vec3f const &, struct model::InstanceData const &, class boost::container::small_vector_base<struct model::CollisionData, class ed::allocator<struct model::CollisionData>, void> &) const;
};

} // namespace model

// DCS_OPS_RE_MODELDESC.DLL_ROOTNODE_HPP
