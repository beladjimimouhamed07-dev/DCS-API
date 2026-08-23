#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: UnitaryMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class UnitaryMap
{
public:

    // RVA: 0x395 | Ordinal: 918
        void UnitaryMap(class openvdb::v9_0::math::UnitaryMap const &, class openvdb::v9_0::math::UnitaryMap const &);

    // RVA: 0x396 | Ordinal: 919
        void UnitaryMap(class openvdb::v9_0::math::UnitaryMap const &);

    // RVA: 0x397 | Ordinal: 920
        void UnitaryMap(class openvdb::v9_0::math::Mat3<double> const &);

    // RVA: 0x398 | Ordinal: 921
        void UnitaryMap(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x399 | Ordinal: 922
        void UnitaryMap(class openvdb::v9_0::math::Vec3<double> const &, double);

    // RVA: 0x39A | Ordinal: 923
        void UnitaryMap(enum openvdb::v9_0::math::Axis, double);

    // RVA: 0x39B | Ordinal: 924
        void UnitaryMap(void);

    // RVA: 0x52A | Ordinal: 1323
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &) const;

    // RVA: 0x52B | Ordinal: 1324
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x536 | Ordinal: 1335
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x537 | Ordinal: 1336
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x542 | Ordinal: 1347
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x543 | Ordinal: 1348
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x549 | Ordinal: 1354
        void applyInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x554 | Ordinal: 1365
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x555 | Ordinal: 1366
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x560 | Ordinal: 1377
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x561 | Ordinal: 1378
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x567 | Ordinal: 1384
        void applyMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x5E8 | Ordinal: 1513
        void copy(void) const;

    // RVA: 0x5FB | Ordinal: 1532
        void create(void);

    // RVA: 0x61A | Ordinal: 1563
        void determinant(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x61B | Ordinal: 1564
        void determinant(void) const;

    // RVA: 0x676 | Ordinal: 1655
        void getAffineMap(void) const;

    // RVA: 0x71C | Ordinal: 1821
        void hasUniformScale(void) const;

    // RVA: 0x749 | Ordinal: 1866
        void inverseMap(void) const;

    // RVA: 0x75A | Ordinal: 1883
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x76E | Ordinal: 1903
        void isLinear(void) const;

    // RVA: 0x784 | Ordinal: 1925
        void isRegistered(void);

    // RVA: 0x7A8 | Ordinal: 1961
        void mapType(void);

    // RVA: 0x7F0 | Ordinal: 2033
        void postRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x7F8 | Ordinal: 2041
        void postScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x7FF | Ordinal: 2048
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x808 | Ordinal: 2057
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x811 | Ordinal: 2066
        void preRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x819 | Ordinal: 2074
        void preScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x820 | Ordinal: 2081
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x829 | Ordinal: 2090
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x84D | Ordinal: 2126
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x877 | Ordinal: 2168
        void registerMap(void);

    // RVA: 0x982 | Ordinal: 2435
        void str(void) const;

    // RVA: 0x9BD | Ordinal: 2494
        void type(void) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9EA | Ordinal: 2539
        void voxelSize(void) const;

    // RVA: 0xA08 | Ordinal: 2569
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3FE | Ordinal: 1023
        void _UnitaryMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_UNITARYMAP_HPP
