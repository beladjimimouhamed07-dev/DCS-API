#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Transform
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class Transform
{
public:

    // RVA: 0x382 | Ordinal: 899
        void Transform(class openvdb::v9_0::math::Transform const &);

    // RVA: 0x383 | Ordinal: 900
        void Transform(class std::shared_ptr<class openvdb::v9_0::math::MapBase> const &);

    // RVA: 0x384 | Ordinal: 901
        void Transform(void);

    // RVA: 0x586 | Ordinal: 1415
        void baseMap(void);

    // RVA: 0x587 | Ordinal: 1416
        void baseMap(void) const;

    // RVA: 0x5E4 | Ordinal: 1509
        void copy(void) const;

    // RVA: 0x5FE | Ordinal: 1535
        void createFrustumTransform(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &, double, double, double);

    // RVA: 0x603 | Ordinal: 1540
        void createLinearTransform(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x604 | Ordinal: 1541
        void createLinearTransform(double);

    // RVA: 0x71A | Ordinal: 1819
        void hasUniformScale(void) const;

    // RVA: 0x721 | Ordinal: 1826
        void indexToWorld(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &) const;

    // RVA: 0x722 | Ordinal: 1827
        void indexToWorld(class openvdb::v9_0::math::CoordBBox const &) const;

    // RVA: 0x723 | Ordinal: 1828
        void indexToWorld(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x724 | Ordinal: 1829
        void indexToWorld(class openvdb::v9_0::math::Coord const &) const;

    // RVA: 0x761 | Ordinal: 1890
        void isIdentity(void) const;

    // RVA: 0x76C | Ordinal: 1901
        void isLinear(void) const;

    // RVA: 0x7A4 | Ordinal: 1957
        void mapType(void) const;

    // RVA: 0x7E8 | Ordinal: 2025
        void postMult(class openvdb::v9_0::math::Mat3<double> const &);

    // RVA: 0x7E9 | Ordinal: 2026
        void postMult(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x7EE | Ordinal: 2031
        void postRotate(double, enum openvdb::v9_0::math::Axis);

    // RVA: 0x7F5 | Ordinal: 2038
        void postScale(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x7F6 | Ordinal: 2039
        void postScale(double);

    // RVA: 0x7FD | Ordinal: 2046
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis);

    // RVA: 0x804 | Ordinal: 2053
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x809 | Ordinal: 2058
        void preMult(class openvdb::v9_0::math::Mat3<double> const &);

    // RVA: 0x80A | Ordinal: 2059
        void preMult(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x80F | Ordinal: 2064
        void preRotate(double, enum openvdb::v9_0::math::Axis);

    // RVA: 0x816 | Ordinal: 2071
        void preScale(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x817 | Ordinal: 2072
        void preScale(double);

    // RVA: 0x81E | Ordinal: 2079
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis);

    // RVA: 0x825 | Ordinal: 2086
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x82E | Ordinal: 2095
        void print(class std::basic_ostream<char, struct std::char_traits<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x84B | Ordinal: 2124
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x9E5 | Ordinal: 2534
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9E6 | Ordinal: 2535
        void voxelSize(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void voxelVolume(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9EC | Ordinal: 2541
        void voxelVolume(void) const;

    // RVA: 0x9F3 | Ordinal: 2548
        void worldToIndex(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &) const;

    // RVA: 0x9F4 | Ordinal: 2549
        void worldToIndex(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9F5 | Ordinal: 2550
        void worldToIndexCellCentered(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9F6 | Ordinal: 2551
        void worldToIndexCellCentered(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &) const;

    // RVA: 0x9F7 | Ordinal: 2552
        void worldToIndexNodeCentered(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9F8 | Ordinal: 2553
        void worldToIndexNodeCentered(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &) const;

    // RVA: 0xA06 | Ordinal: 2567
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3F8 | Ordinal: 1017
        void _Transform(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_TRANSFORM_HPP
