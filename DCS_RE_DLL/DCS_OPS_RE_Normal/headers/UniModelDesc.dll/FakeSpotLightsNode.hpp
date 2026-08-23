#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: FakeSpotLightsNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class FakeSpotLightsNode
{
public:

    // RVA: 0x25 | Ordinal: 38
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x33 | Ordinal: 52
        void calculateBoundingBox(unsigned int) const;

    // RVA: 0x3C | Ordinal: 61
        void canBeMerged(class model::FakeSpotLightsNode const &, struct model::BaseRenderNode::OptExpl &) const;

    // RVA: 0x6A | Ordinal: 107
        void getDirection(unsigned int) const;

    // RVA: 0x6B | Ordinal: 108
        void getDirections(void) const;

    // RVA: 0x7A | Ordinal: 123
        void getLights(void);

    // RVA: 0x7B | Ordinal: 124
        void getLights(void) const;

    // RVA: 0x86 | Ordinal: 135
        void getNumFaces(void) const;

    // RVA: 0x122 | Ordinal: 291
        void setDirection(unsigned int, class osg::Vec3f const &);

    // RVA: 0x123 | Ordinal: 292
        void setDirections(class ed::span<class osg::Vec3f const, -1>);

    // RVA: 0x127 | Ordinal: 296
        void setLights(class ed::vector<struct model::FakeSpotLight, class ed::allocator<struct model::FakeSpotLight>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_FAKESPOTLIGHTSNODE_HPP
