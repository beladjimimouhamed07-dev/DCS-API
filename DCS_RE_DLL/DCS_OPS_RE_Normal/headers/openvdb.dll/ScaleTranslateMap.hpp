#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: ScaleTranslateMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class ScaleTranslateMap
{
public:

    // RVA: 0x368 | Ordinal: 873
        void ScaleTranslateMap(class openvdb::v9_0::math::ScaleTranslateMap const &);

    // RVA: 0x369 | Ordinal: 874
        void ScaleTranslateMap(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x36A | Ordinal: 875
        void ScaleTranslateMap(class openvdb::v9_0::math::ScaleMap const &, class openvdb::v9_0::math::TranslationMap const &);

    // RVA: 0x36B | Ordinal: 876
        void ScaleTranslateMap(void);

    // RVA: 0x526 | Ordinal: 1319
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &) const;

    // RVA: 0x527 | Ordinal: 1320
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x532 | Ordinal: 1331
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x533 | Ordinal: 1332
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x53E | Ordinal: 1343
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x53F | Ordinal: 1344
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x547 | Ordinal: 1352
        void applyInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x550 | Ordinal: 1361
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x551 | Ordinal: 1362
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x55C | Ordinal: 1373
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x55D | Ordinal: 1374
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x565 | Ordinal: 1382
        void applyMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x5E2 | Ordinal: 1507
        void copy(void) const;

    // RVA: 0x5F5 | Ordinal: 1526
        void create(void);

    // RVA: 0x616 | Ordinal: 1559
        void determinant(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x617 | Ordinal: 1560
        void determinant(void) const;

    // RVA: 0x674 | Ordinal: 1653
        void getAffineMap(void) const;

    // RVA: 0x6A1 | Ordinal: 1698
        void getInvScale(void) const;

    // RVA: 0x6A3 | Ordinal: 1700
        void getInvScaleSqr(void) const;

    // RVA: 0x6A5 | Ordinal: 1702
        void getInvTwiceScale(void) const;

    // RVA: 0x6BF | Ordinal: 1728
        void getScale(void) const;

    // RVA: 0x6DC | Ordinal: 1757
        void getTranslation(void) const;

    // RVA: 0x719 | Ordinal: 1818
        void hasUniformScale(void) const;

    // RVA: 0x745 | Ordinal: 1862
        void inverseMap(void) const;

    // RVA: 0x756 | Ordinal: 1879
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x76B | Ordinal: 1900
        void isLinear(void) const;

    // RVA: 0x780 | Ordinal: 1921
        void isRegistered(void);

    // RVA: 0x7A3 | Ordinal: 1956
        void mapType(void);

    // RVA: 0x7ED | Ordinal: 2030
        void postRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x7F4 | Ordinal: 2037
        void postScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x7FC | Ordinal: 2045
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x803 | Ordinal: 2052
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x80E | Ordinal: 2063
        void preRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x815 | Ordinal: 2070
        void preScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x81D | Ordinal: 2078
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x824 | Ordinal: 2085
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x84A | Ordinal: 2123
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x873 | Ordinal: 2164
        void registerMap(void);

    // RVA: 0x97F | Ordinal: 2432
        void str(void) const;

    // RVA: 0x9B9 | Ordinal: 2490
        void type(void) const;

    // RVA: 0x9E3 | Ordinal: 2532
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9E4 | Ordinal: 2533
        void voxelSize(void) const;

    // RVA: 0xA04 | Ordinal: 2565
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3EF | Ordinal: 1008
        void _ScaleTranslateMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_SCALETRANSLATEMAP_HPP
