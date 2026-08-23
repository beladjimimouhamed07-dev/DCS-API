#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: AffineMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class AffineMap
{
public:

    // RVA: 0x304 | Ordinal: 773
        void AffineMap(class openvdb::v9_0::math::AffineMap const &, class openvdb::v9_0::math::AffineMap const &);

    // RVA: 0x305 | Ordinal: 774
        void AffineMap(class openvdb::v9_0::math::AffineMap const &);

    // RVA: 0x306 | Ordinal: 775
        void AffineMap(class openvdb::v9_0::math::Mat3<double> const &);

    // RVA: 0x307 | Ordinal: 776
        void AffineMap(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x308 | Ordinal: 777
        void AffineMap(void);

    // RVA: 0x50C | Ordinal: 1293
        void accumPostRotation(enum openvdb::v9_0::math::Axis, double);

    // RVA: 0x50D | Ordinal: 1294
        void accumPostScale(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x50E | Ordinal: 1295
        void accumPostShear(enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis, double);

    // RVA: 0x50F | Ordinal: 1296
        void accumPostTranslation(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x510 | Ordinal: 1297
        void accumPreRotation(enum openvdb::v9_0::math::Axis, double);

    // RVA: 0x511 | Ordinal: 1298
        void accumPreScale(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x512 | Ordinal: 1299
        void accumPreShear(enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis, double);

    // RVA: 0x513 | Ordinal: 1300
        void accumPreTranslation(class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x520 | Ordinal: 1313
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &) const;

    // RVA: 0x521 | Ordinal: 1314
        void applyIJC(class openvdb::v9_0::math::Mat3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x52C | Ordinal: 1325
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x52D | Ordinal: 1326
        void applyIJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x538 | Ordinal: 1337
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x539 | Ordinal: 1338
        void applyInverseJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x544 | Ordinal: 1349
        void applyInverseMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x54A | Ordinal: 1355
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x54B | Ordinal: 1356
        void applyJT(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x556 | Ordinal: 1367
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x557 | Ordinal: 1368
        void applyJacobian(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x562 | Ordinal: 1379
        void applyMap(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x5D9 | Ordinal: 1498
        void copy(void) const;

    // RVA: 0x5EF | Ordinal: 1520
        void create(void);

    // RVA: 0x5FD | Ordinal: 1534
        void createDecomposedMap(void);

    // RVA: 0x610 | Ordinal: 1553
        void determinant(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x611 | Ordinal: 1554
        void determinant(void) const;

    // RVA: 0x671 | Ordinal: 1650
        void getAffineMap(void) const;

    // RVA: 0x67D | Ordinal: 1662
        void getConstJacobianInv(void) const;

    // RVA: 0x67E | Ordinal: 1663
        void getConstMat4(void) const;

    // RVA: 0x6AB | Ordinal: 1708
        void getMat4(void) const;

    // RVA: 0x716 | Ordinal: 1815
        void hasUniformScale(void) const;

    // RVA: 0x741 | Ordinal: 1858
        void inverse(void) const;

    // RVA: 0x742 | Ordinal: 1859
        void inverseMap(void) const;

    // RVA: 0x752 | Ordinal: 1875
        void isDiagonal(void) const;

    // RVA: 0x753 | Ordinal: 1876
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x75F | Ordinal: 1888
        void isIdentity(void) const;

    // RVA: 0x768 | Ordinal: 1897
        void isLinear(void) const;

    // RVA: 0x77A | Ordinal: 1915
        void isRegistered(void);

    // RVA: 0x787 | Ordinal: 1928
        void isScale(void) const;

    // RVA: 0x788 | Ordinal: 1929
        void isScaleTranslate(void) const;

    // RVA: 0x7A0 | Ordinal: 1953
        void mapType(void);

    // RVA: 0x7EA | Ordinal: 2027
        void postRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x7F1 | Ordinal: 2034
        void postScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x7F9 | Ordinal: 2042
        void postShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x800 | Ordinal: 2049
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x80B | Ordinal: 2060
        void preRotate(double, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x812 | Ordinal: 2067
        void preScale(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x81A | Ordinal: 2075
        void preShear(double, enum openvdb::v9_0::math::Axis, enum openvdb::v9_0::math::Axis) const;

    // RVA: 0x821 | Ordinal: 2082
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x841 | Ordinal: 2114
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x86F | Ordinal: 2160
        void registerMap(void);

    // RVA: 0x97A | Ordinal: 2427
        void str(void) const;

    // RVA: 0x9B5 | Ordinal: 2486
        void type(void) const;

    // RVA: 0x9CF | Ordinal: 2512
        void updateAcceleration(void);

    // RVA: 0x9DB | Ordinal: 2524
        void voxelSize(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x9DC | Ordinal: 2525
        void voxelSize(void) const;

    // RVA: 0x9F9 | Ordinal: 2554
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3D0 | Ordinal: 977
        void _AffineMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_AFFINEMAP_HPP
