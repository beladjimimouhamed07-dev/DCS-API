#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viObjectNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viObjectNode
{
public:

    // RVA: 0x95 | Ordinal: 150
        void AddChild(class viObjectNode *);

    // RVA: 0xA2 | Ordinal: 163
        void ChangeParent(class viObjectNode *);

    // RVA: 0xA4 | Ordinal: 165
        void ChangePos(class wPosition3<float> const &);

    // RVA: 0xA6 | Ordinal: 167
        void Child(int) const;

    // RVA: 0xA7 | Ordinal: 168
        void ChildCount(void) const;

    // RVA: 0xDF | Ordinal: 224
        void GetPosition(void);

    // RVA: 0xFA | Ordinal: 251
        void OnParentChangePos(void);

    // RVA: 0xFC | Ordinal: 253
        void OnParentDeath(void);

    // RVA: 0xFE | Ordinal: 255
        void Parent(void) const;

    // RVA: 0x10E | Ordinal: 271
        void RecursiveLightsUpdate(void);

    // RVA: 0x114 | Ordinal: 277
        void RemoveChild(int);

    // RVA: 0x137 | Ordinal: 312
        void TopMostParentSpace_GetPosition(void);

    // RVA: 0x144 | Ordinal: 325
        void UseChildren(double, enum viArgumentPurpose);

    // RVA: 0x148 | Ordinal: 329
        void WorldSpaceWithParents_GetPoint(void);

    // RVA: 0x149 | Ordinal: 330
        void WorldSpaceWithParents_GetPosition(void);

    // RVA: 0x159 | Ordinal: 346
        void cast_viObjectNode(void);

    // RVA: 0x166 | Ordinal: 359
        void for_each_child(double, enum viArgumentPurpose, class std::function<void __cdecl(class viObjectNode *)>);

    // RVA: 0x17E | Ordinal: 383
        void getPositionInParentSpace(double);

    // RVA: 0x180 | Ordinal: 385
        void getPositionUsingMode(void) const;

    // RVA: 0x1A4 | Ordinal: 421
        void objectIsPartOfToMe(class ISceneObject &) const;

    // RVA: 0x2E | Ordinal: 47
        void viObjectNode(class viObjectNode const &);

    // RVA: 0x2F | Ordinal: 48
        void viObjectNode(unsigned int, class viObjectNode *);

    // RVA: 0x1C2 | Ordinal: 451
        void viObjectNodeIsPartOfToMe(class viObjectNode const *) const;

    // RVA: 0x50 | Ordinal: 81
        void _viObjectNode(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VIOBJECTNODE_HPP
