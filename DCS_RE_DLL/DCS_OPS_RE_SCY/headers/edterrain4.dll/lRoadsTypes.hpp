#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoadsTypes
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoadsTypes
{
public:

    // RVA: 0x2AB | Ordinal: 684
        void getBridgeType(struct offshore::Scene &, int);

    // RVA: 0x2AC | Ordinal: 685
        void getBridgeType(class ed::basic_string<char> const &);

    // RVA: 0x2D0 | Ordinal: 721
        void getCrossType(struct offshore::Scene &, class osg::Vec3d const &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x2D1 | Ordinal: 722
        void getCrossType(struct offshore::Scene &, int);

    // RVA: 0x2D2 | Ordinal: 723
        void getCrossType(class ed::basic_string<char> const &);

    // RVA: 0x2EE | Ordinal: 751
        void getEmptyCrossType(void);

    // RVA: 0x2F2 | Ordinal: 755
        void getEndRoadDummyCrossType(class osg::Vec3d const &, int);

    // RVA: 0x2F6 | Ordinal: 759
        void getFieldType(class ed::basic_string<char> const &);

    // RVA: 0x2F7 | Ordinal: 760
        void getForestType(class ed::basic_string<char> const &);

    // RVA: 0x394 | Ordinal: 917
        void getRoadDetailGeometry(class ed::basic_string<char> const &);

    // RVA: 0x39A | Ordinal: 923
        void getRoadToRoadDummyCrossType(class osg::Vec3d const &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x39C | Ordinal: 925
        void getRoadType(class ed::basic_string<char> const &);

    // RVA: 0x3EE | Ordinal: 1007
        void getTownType(class ed::basic_string<char> const &);

    // RVA: 0x423 | Ordinal: 1060
        void init(class ed::basic_string<char> const &);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROADSTYPES_HPP
