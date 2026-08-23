#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ModelDesc.dll
// Class: LightNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class LightNode
{
public:

    // RVA: 0x7 | Ordinal: 8
        void apply(class ed::vector<float, class ed::allocator128<float>> const &) const;

    // RVA: 0x21 | Ordinal: 34
        void getName(void) const;

    // RVA: 0x2C | Ordinal: 45
        void getPosition(class osg::Matrixd const &, class ed::vector<float, class ed::allocator128<float>> const &) const;

    // RVA: 0x2D | Ordinal: 46
        void getPosition(class osg::Matrixd const &, class ed::vector<float, class ed::allocator128<float>> const &, class osg::Matrixd &) const;

    // RVA: 0x3E | Ordinal: 63
        void getVisibility(class ed::vector<float, class ed::allocator128<float>> const &) const;
};

} // namespace model

// DCS_OPS_RE_MODELDESC.DLL_LIGHTNODE_HPP
