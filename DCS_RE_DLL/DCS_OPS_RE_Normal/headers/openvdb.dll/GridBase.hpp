#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: GridBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class GridBase
{
public:

    // RVA: 0x321 | Ordinal: 802
        void GridBase(class openvdb::v9_0::GridBase &, class openvdb::v9_0::ShallowCopy);

    // RVA: 0x322 | Ordinal: 803
        void GridBase(class openvdb::v9_0::GridBase const &);

    // RVA: 0x323 | Ordinal: 804
        void GridBase(class openvdb::v9_0::MetaMap const &, class std::shared_ptr<class openvdb::v9_0::math::Transform>);

    // RVA: 0x324 | Ordinal: 805
        void GridBase(void);

    // RVA: 0x515 | Ordinal: 1302
        void addStatsMetadata(void);

    // RVA: 0x588 | Ordinal: 1417
        void baseTree(void);

    // RVA: 0x589 | Ordinal: 1418
        void baseTree(void) const;

    // RVA: 0x58A | Ordinal: 1419
        void baseTreePtr(void);

    // RVA: 0x58B | Ordinal: 1420
        void baseTreePtr(void) const;

    // RVA: 0x5A8 | Ordinal: 1449
        void clearGridClass(void);

    // RVA: 0x5AE | Ordinal: 1455
        void clearRegistry(void);

    // RVA: 0x5B1 | Ordinal: 1458
        void clearVectorType(void);

    // RVA: 0x5B2 | Ordinal: 1459
        void clipGrid(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &);

    // RVA: 0x5CB | Ordinal: 1484
        void constBaseTree(void) const;

    // RVA: 0x5CF | Ordinal: 1488
        void constTransform(void) const;

    // RVA: 0x5D0 | Ordinal: 1489
        void constTransformPtr(void) const;

    // RVA: 0x601 | Ordinal: 1538
        void createGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x67F | Ordinal: 1664
        void getCreator(void) const;

    // RVA: 0x694 | Ordinal: 1685
        void getGridClass(void) const;

    // RVA: 0x6B4 | Ordinal: 1717
        void getName(void) const;

    // RVA: 0x6C9 | Ordinal: 1738
        void getStatsMetadata(void) const;

    // RVA: 0x6E0 | Ordinal: 1761
        void getVectorType(void) const;

    // RVA: 0x6EA | Ordinal: 1771
        void gridClassToMenuName(enum openvdb::v9_0::GridClass);

    // RVA: 0x6EB | Ordinal: 1772
        void gridClassToString(enum openvdb::v9_0::GridClass);

    // RVA: 0x71D | Ordinal: 1822
        void hasUniformVoxels(void) const;

    // RVA: 0x71F | Ordinal: 1824
        void indexToWorld(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x720 | Ordinal: 1825
        void indexToWorld(class openvdb::v9_0::math::Coord const &) const;

    // RVA: 0x762 | Ordinal: 1891
        void isInWorldSpace(void) const;

    // RVA: 0x77C | Ordinal: 1917
        void isRegistered(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x869 | Ordinal: 2154
        void readTransform(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x86E | Ordinal: 2159
        void registerGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class openvdb::v9_0::GridBase> (__cdecl *)(void));

    // RVA: 0x8AD | Ordinal: 2222
        void saveFloatAsHalf(void) const;

    // RVA: 0x8D2 | Ordinal: 2259
        void setCreator(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x8EC | Ordinal: 2285
        void setGridClass(enum openvdb::v9_0::GridClass);

    // RVA: 0x8FE | Ordinal: 2303
        void setIsInWorldSpace(bool);

    // RVA: 0x914 | Ordinal: 2325
        void setName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x922 | Ordinal: 2339
        void setSaveFloatAsHalf(bool);

    // RVA: 0x948 | Ordinal: 2377
        void setTransform(class std::shared_ptr<class openvdb::v9_0::math::Transform>);

    // RVA: 0x94E | Ordinal: 2383
        void setVectorType(enum openvdb::v9_0::VecType);

    // RVA: 0x986 | Ordinal: 2439
        void stringToGridClass(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x987 | Ordinal: 2440
        void stringToVecType(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x999 | Ordinal: 2458
        void transform(void);

    // RVA: 0x99A | Ordinal: 2459
        void transform(void) const;

    // RVA: 0x99B | Ordinal: 2460
        void transformPtr(void);

    // RVA: 0x99C | Ordinal: 2461
        void transformPtr(void) const;

    // RVA: 0x9BE | Ordinal: 2495
        void typeChar(void) const;

    // RVA: 0x9C7 | Ordinal: 2504
        void unregisterGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x9D3 | Ordinal: 2516
        void vecTypeDescription(enum openvdb::v9_0::VecType);

    // RVA: 0x9D4 | Ordinal: 2517
        void vecTypeExamples(enum openvdb::v9_0::VecType);

    // RVA: 0x9D5 | Ordinal: 2518
        void vecTypeToString(enum openvdb::v9_0::VecType);

    // RVA: 0x9DD | Ordinal: 2526
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9DE | Ordinal: 2527
        void voxelSize(void) const;

    // RVA: 0x9F2 | Ordinal: 2547
        void worldToIndex(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0xA19 | Ordinal: 2586
        void writeTransform(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3D9 | Ordinal: 986
        void _GridBase(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_GRIDBASE_HPP
