#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: BoxSampler>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace tools {

class BoxSampler_
{
public:

    // RVA: 0x4B3 | Ordinal: 1204
        void operator()(class tbb::blocked_range<unsigned __int64> const &) const;

    // RVA: 0x82C | Ordinal: 2093
        void print(class std::basic_ostream<char, struct std::char_traits<char>> &, int);

    // RVA: 0x884 | Ordinal: 2181
        void render(bool) const;

    // RVA: 0x8C2 | Ordinal: 2243
        void setAbsorption(double, double, double);

    // RVA: 0x8C9 | Ordinal: 2250
        void setCamera(class openvdb::v9_0::tools::BaseCamera &);

    // RVA: 0x8D4 | Ordinal: 2261
        void setCutOff(double);

    // RVA: 0x8FC | Ordinal: 2301
        void setIntersector(class openvdb::v9_0::tools::VolumeRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<float, 3>, 4>, 5>>>>, 2, class openvdb::v9_0::math::Ray<double>> const &);

    // RVA: 0x8FD | Ordinal: 2302
        void setIntersector(class openvdb::v9_0::tools::VolumeRayIntersector<class openvdb::v9_0::Grid<class openvdb::v9_0::tree::Tree<class openvdb::v9_0::tree::RootNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::InternalNode<class openvdb::v9_0::tree::LeafNode<double, 3>, 4>, 5>>>>, 2, class openvdb::v9_0::math::Ray<double>> const &);

    // RVA: 0x902 | Ordinal: 2307
        void setLightColor(double, double, double);

    // RVA: 0x904 | Ordinal: 2309
        void setLightDir(double, double, double);

    // RVA: 0x906 | Ordinal: 2311
        void setLightGain(double);

    // RVA: 0x91E | Ordinal: 2335
        void setPrimaryStep(double);

    // RVA: 0x923 | Ordinal: 2340
        void setScattering(double, double, double);

    // RVA: 0x926 | Ordinal: 2343
        void setShadowStep(double);
};

} // namespace tools
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_BOXSAMPLER_HPP
