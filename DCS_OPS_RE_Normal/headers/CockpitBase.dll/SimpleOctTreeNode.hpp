#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SimpleOctTreeNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SimpleOctTreeNode
{
public:

    // RVA: 0x762 | Ordinal: 1891
        void AddObject(class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x774 | Ordinal: 1909
        void ChangedPos(class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x789 | Ordinal: 1930
        void DeleteAll(void);

    // RVA: 0x798 | Ordinal: 1945
        void EraseObject(class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x7BF | Ordinal: 1984
        void GetObjectList(class ed::vector<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>, class ed::allocator<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>>> &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x7C0 | Ordinal: 1985
        void GetObjectList(class ClipVolume const *, class ed::vector<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>, class ed::allocator<class ed::Ptr<class cockpit::SimpleOctTreeLoad, struct ed::DefaultDeleter>>> &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x7DA | Ordinal: 2011
        void IntersectSegment(class osg::Vec3f const &, class osg::Vec3f const &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x7DC | Ordinal: 2013
        void IntersectSphere(class osg::Vec3f const &, float const &, class cockpit::SimpleOctTree_check_object *);

    // RVA: 0x85B | Ordinal: 2140
        void RemoveObject(class cockpit::SimpleOctTreeLoad *);

    // RVA: 0x80 | Ordinal: 129
        void SimpleOctTreeNode(struct cockpit::SimpleOctTreeNodePreferences *, class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x81 | Ordinal: 130
        void SimpleOctTreeNode(class cockpit::SimpleOctTreeNode *, short, short, short);

    // RVA: 0x8E5 | Ordinal: 2278
        void Walk(class cockpit::SimpleOctTree_check_object &, class ClipVolume const *);

    // RVA: 0xB57 | Ordinal: 2904
        void debug_draw_tree(class wPosition3<float> const &, bool);

    // RVA: 0xB59 | Ordinal: 2906
        void debug_draw_tree_reverse(class wPosition3<float> const &);

    // RVA: 0x2BD | Ordinal: 702
        void _SimpleOctTreeNode(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SIMPLEOCTTREENODE_HPP
