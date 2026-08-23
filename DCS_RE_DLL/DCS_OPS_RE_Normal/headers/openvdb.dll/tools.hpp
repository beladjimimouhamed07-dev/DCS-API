#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: tools
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class tools
{
public:

    // RVA: 0x300 | Ordinal: 769
        void BoxSampler_(class openvdb::v9_0::tools::VolumeRender<class openvdb::v9_0::tools::VolumeRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>, 2, class openvdb::v9_0::math::Ray<double>>, struct openvdb::v9_0::tools::BoxSampler> const &);

    // RVA: 0x301 | Ordinal: 770
        void BoxSampler_(class openvdb::v9_0::tools::VolumeRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>, 2, class openvdb::v9_0::math::Ray<double>> const &, class openvdb::v9_0::tools::BaseCamera &);

    // RVA: 0x302 | Ordinal: 771
        void BoxSampler_(class openvdb::v9_0::tools::VolumeRender<class openvdb::v9_0::tools::VolumeRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>, 2, class openvdb::v9_0::math::Ray<double>>, struct openvdb::v9_0::tools::BoxSampler> const &);

    // RVA: 0x303 | Ordinal: 772
        void BoxSampler_(class openvdb::v9_0::tools::VolumeRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>, 2, class openvdb::v9_0::math::Ray<double>> const &, class openvdb::v9_0::tools::BaseCamera &);

    // RVA: 0x3CE | Ordinal: 975
        void BoxSampler_(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_TOOLS_HPP
