#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: TranslationMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class TranslationMap
{
public:

    // RVA: 0x385 | Ordinal: 902
        void TranslationMap(class openvdb::v9_0::math::TranslationMap const &);

    // RVA: 0x386 | Ordinal: 903
        void TranslationMap(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x387 | Ordinal: 904
        void TranslationMap(void);

    // RVA: 0x528 | Ordinal: 1321
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &) const;

    // RVA: 0x529 | Ordinal: 1322
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x534 | Ordinal: 1333
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x535 | Ordinal: 1334
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x540 | Ordinal: 1345
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x541 | Ordinal: 1346
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x548 | Ordinal: 1353
        void applyInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x552 | Ordinal: 1363
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x553 | Ordinal: 1364
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x55E | Ordinal: 1375
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x55F | Ordinal: 1376
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x566 | Ordinal: 1383
        void applyMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x5E5 | Ordinal: 1510
        void copy(void) const;

    // RVA: 0x5F8 | Ordinal: 1529
        void create(void);

    // RVA: 0x618 | Ordinal: 1561
        void determinant(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x619 | Ordinal: 1562
        void determinant(void) const;

    // RVA: 0x675 | Ordinal: 1654
        void getAffineMap(void) const;

    // RVA: 0x6DD | Ordinal: 1758
        void getTranslation(void) const;

    // RVA: 0x71B | Ordinal: 1820
        void hasUniformScale(void) const;

    // RVA: 0x746 | Ordinal: 1863
        void inverseMap(void) const;

    // RVA: 0x757 | Ordinal: 1880
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x76D | Ordinal: 1902
        void isLinear(void) const;

    // RVA: 0x781 | Ordinal: 1922
        void isRegistered(void);

    // RVA: 0x7A5 | Ordinal: 1958
        void mapType(void);

    // RVA: 0x7EF | Ordinal: 2032
        void postRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x7F7 | Ordinal: 2040
        void postScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x7FE | Ordinal: 2047
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x805 | Ordinal: 2054
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x810 | Ordinal: 2065
        void preRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x818 | Ordinal: 2073
        void preScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x81F | Ordinal: 2080
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x826 | Ordinal: 2087
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x84C | Ordinal: 2125
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x874 | Ordinal: 2165
        void registerMap(void);

    // RVA: 0x981 | Ordinal: 2434
        void str(void) const;

    // RVA: 0x9BA | Ordinal: 2491
        void type(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9E8 | Ordinal: 2537
        void voxelSize(void) const;

    // RVA: 0xA07 | Ordinal: 2568
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3F9 | Ordinal: 1018
        void _TranslationMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_TRANSLATIONMAP_HPP
