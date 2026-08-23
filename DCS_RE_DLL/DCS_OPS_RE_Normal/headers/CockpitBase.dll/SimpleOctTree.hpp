#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SimpleOctTree
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SimpleOctTree
{
public:

    // RVA: 0x760 | Ordinal: 1889
        void AddObject(class ed::basic_string<char> const &, class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x761 | Ordinal: 1890
        void AddObject(class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x788 | Ordinal: 1929
        void DeleteAll(void);

    // RVA: 0x7A7 | Ordinal: 1960
        void GetByName(class ed::basic_string<char> const &);

    // RVA: 0x7A8 | Ordinal: 1961
        void GetCount(void) const;

    // RVA: 0x7C1 | Ordinal: 1986
        void GetObjects(class ed::vector<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>, class ed::allocator<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>>> &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x7C2 | Ordinal: 1987
        void GetObjects(class ClipVolume const *, class ed::vector<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>, class ed::allocator<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>>> &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x7D7 | Ordinal: 2008
        void Initialize(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x7D8 | Ordinal: 2009
        void Initialize(void);

    // RVA: 0x7D9 | Ordinal: 2010
        void IntersectSegment(class osg::Vec3f const &, class osg::Vec3f const &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x7DB | Ordinal: 2012
        void IntersectSphere(class osg::Vec3f const &, float const &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x857 | Ordinal: 2136
        void RemoveByName(class ed::basic_string<char> const &);

    // RVA: 0x85A | Ordinal: 2139
        void RemoveObject(class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x7D | Ordinal: 126
        void SimpleOctTree(class cockpit::SimpleOctTree const &);

    // RVA: 0x7E | Ordinal: 127
        void SimpleOctTree(class osg::BoundingBoxImpl<class osg::Vec3f> const &, float, int, int);

    // RVA: 0x7F | Ordinal: 128
        void SimpleOctTree(void);

    // RVA: 0x8E4 | Ordinal: 2277
        void Walk(class cockpit::SimpleOctTree_check_object &, class ClipVolume const *);

    // RVA: 0xB48 | Ordinal: 2889
        void create_octant_tree(class osg::BoundingBoxImpl<class osg::Vec3f> const &, float);

    // RVA: 0xB49 | Ordinal: 2890
        void create_quad_tree(class osg::BoundingBoxImpl<class osg::Vec3f> const &, float);

    // RVA: 0xB56 | Ordinal: 2903
        void debug_draw_tree(class wPosition3<float> const &, bool);

    // RVA: 0xB58 | Ordinal: 2905
        void debug_draw_tree_reverse(class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter> const &, class wPosition3<float> const &);

    // RVA: 0x2BB | Ordinal: 700
        void _SimpleOctTree(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SIMPLEOCTTREE_HPP
