#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: PointInstance
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lLinked {

class PointInstance
{
public:

    // RVA: 0x1A | Ordinal: 27
        void PointInstance(void);

    // RVA: 0x17B | Ordinal: 380
        void assignObjectIDs(unsigned int);

    // RVA: 0x19D | Ordinal: 414
        void buildSceneObjects(class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, class std::function<bool __cdecl(struct assets::lLinked::PointInstance const &)> const *, bool);

    // RVA: 0x292 | Ordinal: 659
        void getAnchorBySpline(int) const;

    // RVA: 0x293 | Ordinal: 660
        void getAnchorDirection(int) const;

    // RVA: 0x294 | Ordinal: 661
        void getAnchorLsa5Point(int) const;

    // RVA: 0x295 | Ordinal: 662
        void getAnchorLsa5Point(int, class osg::Vec3d &) const;

    // RVA: 0x296 | Ordinal: 663
        void getAnchorPosition(int) const;

    // RVA: 0x297 | Ordinal: 664
        void getAnchorTransform(int) const;

    // RVA: 0x314 | Ordinal: 789
        void getLsa5Point(int) const;
};

} // namespace lLinked
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_POINTINSTANCE_HPP
