#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: b2DynamicTree
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class b2DynamicTree
{
public:

    // RVA: 0x10F | Ordinal: 272
        void AllocateNode(void);

    // RVA: 0x110 | Ordinal: 273
        void Balance(int);

    // RVA: 0x113 | Ordinal: 276
        void ComputeHeight(int) const;

    // RVA: 0x114 | Ordinal: 277
        void ComputeHeight(void) const;

    // RVA: 0x115 | Ordinal: 278
        void CreateProxy(class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct b2TreeNode::UserData const &);

    // RVA: 0x116 | Ordinal: 279
        void DestroyProxy(int);

    // RVA: 0x11B | Ordinal: 284
        void FreeNode(int);

    // RVA: 0x11D | Ordinal: 286
        void GetAreaRatio(void) const;

    // RVA: 0x11E | Ordinal: 287
        void GetFatAABB(int) const;

    // RVA: 0x11F | Ordinal: 288
        void GetHeight(void) const;

    // RVA: 0x120 | Ordinal: 289
        void GetMaxBalance(void) const;

    // RVA: 0x121 | Ordinal: 290
        void GetUserData(int) const;

    // RVA: 0x123 | Ordinal: 292
        void InsertLeaf(int);

    // RVA: 0x124 | Ordinal: 293
        void MoveProxy(int, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Vec3f const &);

    // RVA: 0x131 | Ordinal: 306
        void RebuildBottomUp(void);

    // RVA: 0x132 | Ordinal: 307
        void RemoveLeaf(int);

    // RVA: 0x135 | Ordinal: 310
        void ShiftOrigin(class osg::Vec3f const &);

    // RVA: 0x139 | Ordinal: 314
        void Validate(void) const;

    // RVA: 0x13A | Ordinal: 315
        void ValidateMetrics(int) const;

    // RVA: 0x13B | Ordinal: 316
        void ValidateStructure(int) const;

    // RVA: 0x96 | Ordinal: 151
        void b2DynamicTree(void);

    // RVA: 0xD6 | Ordinal: 215
        void _b2DynamicTree(void);
};

// DCS_OPS_RE_EDCORE.DLL_B2DYNAMICTREE_HPP
