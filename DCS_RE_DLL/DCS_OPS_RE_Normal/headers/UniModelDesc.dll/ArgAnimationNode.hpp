#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: ArgAnimationNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class ArgAnimationNode
{
public:

    // RVA: 0x1F | Ordinal: 32
        void animate(class model::IModelArguments const *, class osg::Matrixd &) const;

    // RVA: 0x4D | Ordinal: 78
        void empty(void) const;

    // RVA: 0x6E | Ordinal: 111
        void getHandles(class std::function<void __cdecl(unsigned int)>) const;

    // RVA: 0x8E | Ordinal: 143
        void getPositionAnimations(void);

    // RVA: 0x8F | Ordinal: 144
        void getPositionAnimations(void) const;

    // RVA: 0x96 | Ordinal: 151
        void getRotationAnimations(void);

    // RVA: 0x97 | Ordinal: 152
        void getRotationAnimations(void) const;

    // RVA: 0x98 | Ordinal: 153
        void getScalesAnimations(void);

    // RVA: 0x99 | Ordinal: 154
        void getScalesAnimations(void) const;

    // RVA: 0xDE | Ordinal: 223
        void optimize(float);

    // RVA: 0xE2 | Ordinal: 227
        void postTransform(class model::IModelArguments const *, class osg::Matrixd &) const;

    // RVA: 0x12E | Ordinal: 303
        void setPositionAnimations(class ed::vector<struct model::ArgAnimationNode::Animation<0>, class ed::allocator<struct model::ArgAnimationNode::Animation<0>>> const &);

    // RVA: 0x130 | Ordinal: 305
        void setRotationAnimations(class ed::vector<struct model::ArgAnimationNode::Animation<1>, class ed::allocator<struct model::ArgAnimationNode::Animation<1>>> const &);

    // RVA: 0x131 | Ordinal: 306
        void setScaleAnimations(class ed::vector<struct model::ArgAnimationNode::Animation<2>, class ed::allocator<struct model::ArgAnimationNode::Animation<2>>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_ARGANIMATIONNODE_HPP
