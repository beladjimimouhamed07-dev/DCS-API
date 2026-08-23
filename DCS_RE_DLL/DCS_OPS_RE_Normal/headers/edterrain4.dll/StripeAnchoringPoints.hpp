#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: StripeAnchoringPoints
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class StripeAnchoringPoints
{
public:

    // RVA: 0x28 | Ordinal: 41
        void StripeAnchoringPoints(void);

    // RVA: 0x4C4 | Ordinal: 1221
        void multiply(class osg::Matrixd const &);

    // RVA: 0x530 | Ordinal: 1329
        void revert(void);

    // RVA: 0x56D | Ordinal: 1390
        void setEnd(class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x583 | Ordinal: 1412
        void setStart(class osg::Vec3d const &, class osg::Vec3d const &);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_STRIPEANCHORINGPOINTS_HPP
