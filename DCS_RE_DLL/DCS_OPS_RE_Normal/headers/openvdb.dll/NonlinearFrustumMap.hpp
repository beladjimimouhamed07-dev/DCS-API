#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: NonlinearFrustumMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class NonlinearFrustumMap
{
public:

    // RVA: 0x347 | Ordinal: 840
        void NonlinearFrustumMap(class openvdb::v9_0::math::NonlinearFrustumMap const &);

    // RVA: 0x348 | Ordinal: 841
        void NonlinearFrustumMap(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &, double, double);

    // RVA: 0x349 | Ordinal: 842
        void NonlinearFrustumMap(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &, double, double, class std::shared_ptr<class openvdb::v9_0::math::MapBase> const &);

    // RVA: 0x34A | Ordinal: 843
        void NonlinearFrustumMap(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, double, double, double, int, int);

    // RVA: 0x34B | Ordinal: 844
        void NonlinearFrustumMap(void);

    // RVA: 0x51E | Ordinal: 1311
        void applyFrustumInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x51F | Ordinal: 1312
        void applyFrustumMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x522 | Ordinal: 1315
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &) const;

    // RVA: 0x523 | Ordinal: 1316
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x52E | Ordinal: 1327
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x52F | Ordinal: 1328
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x53A | Ordinal: 1339
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x53B | Ordinal: 1340
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x545 | Ordinal: 1350
        void applyInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x54C | Ordinal: 1357
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x54D | Ordinal: 1358
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x558 | Ordinal: 1369
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x559 | Ordinal: 1370
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x563 | Ordinal: 1380
        void applyMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x5DE | Ordinal: 1503
        void copy(void) const;

    // RVA: 0x5F3 | Ordinal: 1524
        void create(void);

    // RVA: 0x612 | Ordinal: 1555
        void determinant(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x613 | Ordinal: 1556
        void determinant(void) const;

    // RVA: 0x672 | Ordinal: 1651
        void getAffineMap(void) const;

    // RVA: 0x677 | Ordinal: 1656
        void getBBox(void) const;

    // RVA: 0x681 | Ordinal: 1666
        void getDepth(void) const;

    // RVA: 0x684 | Ordinal: 1669
        void getGamma(void) const;

    // RVA: 0x6CD | Ordinal: 1742
        void getTaper(void) const;

    // RVA: 0x715 | Ordinal: 1814
        void hasSimpleAffine(void) const;

    // RVA: 0x717 | Ordinal: 1816
        void hasUniformScale(void) const;

    // RVA: 0x729 | Ordinal: 1834
        void init(void);

    // RVA: 0x743 | Ordinal: 1860
        void inverseMap(void) const;

    // RVA: 0x754 | Ordinal: 1877
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x760 | Ordinal: 1889
        void isIdentity(void) const;

    // RVA: 0x769 | Ordinal: 1898
        void isLinear(void) const;

    // RVA: 0x77E | Ordinal: 1919
        void isRegistered(void);

    // RVA: 0x78E | Ordinal: 1935
        void isValid(void) const;

    // RVA: 0x7A1 | Ordinal: 1954
        void mapType(void);

    // RVA: 0x7EB | Ordinal: 2028
        void postRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x7F2 | Ordinal: 2035
        void postScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x7FA | Ordinal: 2043
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x801 | Ordinal: 2050
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x80C | Ordinal: 2061
        void preRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x813 | Ordinal: 2068
        void preScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x81B | Ordinal: 2076
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x822 | Ordinal: 2083
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x846 | Ordinal: 2119
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x871 | Ordinal: 2162
        void registerMap(void);

    // RVA: 0x8B5 | Ordinal: 2230
        void secondMap(void) const;

    // RVA: 0x8D9 | Ordinal: 2266
        void setDepth(double);

    // RVA: 0x936 | Ordinal: 2359
        void setTaper(double);

    // RVA: 0x97D | Ordinal: 2430
        void str(void) const;

    // RVA: 0x9B7 | Ordinal: 2488
        void type(void) const;

    // RVA: 0x9DF | Ordinal: 2528
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9E0 | Ordinal: 2529
        void voxelSize(void) const;

    // RVA: 0xA01 | Ordinal: 2562
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3E5 | Ordinal: 998
        void _NonlinearFrustumMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_NONLINEARFRUSTUMMAP_HPP
