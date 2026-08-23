#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: math
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class math
{
public:

    // RVA: 0x1DA | Ordinal: 475
        void Ray_double___(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>> const &, class openvdb::v9_0::tools::LevelSetRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>, class openvdb::v9_0::tools::LinearSearchImpl<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>, 0, double>, 2, class openvdb::v9_0::math::Ray<double>> const &, class openvdb::v9_0::tools::BaseShader const &, class openvdb::v9_0::tools::BaseCamera &, unsigned __int64, unsigned int, bool);

    // RVA: 0x1DC | Ordinal: 477
        void Ray_double___(class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>> const &, class openvdb::v9_0::tools::LevelSetRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>, class openvdb::v9_0::tools::LinearSearchImpl<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>, 0, double>, 2, class openvdb::v9_0::math::Ray<double>> const &, class openvdb::v9_0::tools::BaseShader const &, class openvdb::v9_0::tools::BaseCamera &, unsigned __int64, unsigned int, bool);

    // RVA: 0xCB | Ordinal: 204
        void Vec3_double__(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<double>> const &, class openvdb::v9_0::math::Transform const &, double);

    // RVA: 0xCA | Ordinal: 203
        void Vec3_float__(class openvdb::v9_0::math::BBox<class openvdb::v9_0::math::Vec3<float>> const &, class openvdb::v9_0::math::Transform const &, float);

    // RVA: 0x568 | Ordinal: 1385
        void approxInverse(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x59B | Ordinal: 1436
        void calculateBounds(class openvdb::v9_0::math::Transform const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> &, class openvdb::v9_0::math::Vec3<double> &);

    // RVA: 0x5B5 | Ordinal: 1462
        void closestPointOnSegmentToPoint(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, double &);

    // RVA: 0x5B6 | Ordinal: 1463
        void closestPointOnTriangleToPoint(class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> const &, class openvdb::v9_0::math::Vec3<double> &);

    // RVA: 0x5FF | Ordinal: 1536
        void createFullyDecomposedMap(class openvdb::v9_0::math::Mat4<double> const &);

    // RVA: 0x608 | Ordinal: 1545
        void createPolarDecomposedMap(class openvdb::v9_0::math::Mat3<double> const &);

    // RVA: 0x609 | Ordinal: 1546
        void createSymmetricMap(class openvdb::v9_0::math::Mat3<double> const &);

    // RVA: 0x472 | Ordinal: 1139
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, class openvdb::v9_0::math::Transform const &);

    // RVA: 0x954 | Ordinal: 2389
        void simplify(class std::shared_ptr<class openvdb::v9_0::math::AffineMap>);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_MATH_HPP
