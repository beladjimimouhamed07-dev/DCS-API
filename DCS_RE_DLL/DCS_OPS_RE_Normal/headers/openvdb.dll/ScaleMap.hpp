#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: ScaleMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class ScaleMap
{
public:

    // RVA: 0x365 | Ordinal: 870
        void ScaleMap(class openvdb::v9_0::math::ScaleMap const &);

    // RVA: 0x366 | Ordinal: 871
        void ScaleMap(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x367 | Ordinal: 872
        void ScaleMap(void);

    // RVA: 0x524 | Ordinal: 1317
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &) const;

    // RVA: 0x525 | Ordinal: 1318
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x530 | Ordinal: 1329
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x531 | Ordinal: 1330
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x53C | Ordinal: 1341
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x53D | Ordinal: 1342
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x546 | Ordinal: 1351
        void applyInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x54E | Ordinal: 1359
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x54F | Ordinal: 1360
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x55A | Ordinal: 1371
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x55B | Ordinal: 1372
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x564 | Ordinal: 1381
        void applyMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x5E1 | Ordinal: 1506
        void copy(void) const;

    // RVA: 0x5F4 | Ordinal: 1525
        void create(void);

    // RVA: 0x614 | Ordinal: 1557
        void determinant(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x615 | Ordinal: 1558
        void determinant(void) const;

    // RVA: 0x673 | Ordinal: 1652
        void getAffineMap(void) const;

    // RVA: 0x6A0 | Ordinal: 1697
        void getInvScale(void) const;

    // RVA: 0x6A2 | Ordinal: 1699
        void getInvScaleSqr(void) const;

    // RVA: 0x6A4 | Ordinal: 1701
        void getInvTwiceScale(void) const;

    // RVA: 0x6BE | Ordinal: 1727
        void getScale(void) const;

    // RVA: 0x718 | Ordinal: 1817
        void hasUniformScale(void) const;

    // RVA: 0x744 | Ordinal: 1861
        void inverseMap(void) const;

    // RVA: 0x755 | Ordinal: 1878
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x76A | Ordinal: 1899
        void isLinear(void) const;

    // RVA: 0x77F | Ordinal: 1920
        void isRegistered(void);

    // RVA: 0x7A2 | Ordinal: 1955
        void mapType(void);

    // RVA: 0x7EC | Ordinal: 2029
        void postRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x7F3 | Ordinal: 2036
        void postScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x7FB | Ordinal: 2044
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x802 | Ordinal: 2051
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x80D | Ordinal: 2062
        void preRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x814 | Ordinal: 2069
        void preScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x81C | Ordinal: 2077
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x823 | Ordinal: 2084
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x849 | Ordinal: 2122
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x872 | Ordinal: 2163
        void registerMap(void);

    // RVA: 0x97E | Ordinal: 2431
        void str(void) const;

    // RVA: 0x9B8 | Ordinal: 2489
        void type(void) const;

    // RVA: 0x9E1 | Ordinal: 2530
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9E2 | Ordinal: 2531
        void voxelSize(void) const;

    // RVA: 0xA03 | Ordinal: 2564
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3EE | Ordinal: 1007
        void _ScaleMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_SCALEMAP_HPP
