#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: FakeOmniLightsNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class FakeOmniLightsNode
{
public:

    // RVA: 0x24 | Ordinal: 37
        void applyMatrix(unsigned __int64, class osg::Matrixd const &);

    // RVA: 0x32 | Ordinal: 51
        void calculateBoundingBox(unsigned int) const;

    // RVA: 0x3B | Ordinal: 60
        void canBeMerged(class model::FakeOmniLightsNode const &, struct model::BaseRenderNode::OptExpl &) const;

    // RVA: 0x78 | Ordinal: 121
        void getLights(void);

    // RVA: 0x79 | Ordinal: 122
        void getLights(void) const;

    // RVA: 0x85 | Ordinal: 134
        void getNumFaces(void) const;

    // RVA: 0x126 | Ordinal: 295
        void setLights(class ed::vector<struct model::FakeOmniLight, class ed::allocator<struct model::FakeOmniLight>> const &);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_FAKEOMNILIGHTSNODE_HPP
