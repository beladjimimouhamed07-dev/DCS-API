#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: UniformScaleTranslateMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class UniformScaleTranslateMap
{
public:

    // RVA: 0x391 | Ordinal: 914
        void UniformScaleTranslateMap(class openvdb::v9_0::math::UniformScaleTranslateMap const &);

    // RVA: 0x392 | Ordinal: 915
        void UniformScaleTranslateMap(class openvdb::v9_0::math::UniformScaleMap const &, class openvdb::v9_0::math::TranslationMap const &);

    // RVA: 0x393 | Ordinal: 916
        void UniformScaleTranslateMap(double, class openvdb::v9_0::math::Vec3<double> const &);

    // RVA: 0x394 | Ordinal: 917
        void UniformScaleTranslateMap(void);

    // RVA: 0x5E7 | Ordinal: 1512
        void copy(void) const;

    // RVA: 0x5FA | Ordinal: 1531
        void create(void);

    // RVA: 0x748 | Ordinal: 1865
        void inverseMap(void) const;

    // RVA: 0x759 | Ordinal: 1882
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x783 | Ordinal: 1924
        void isRegistered(void);

    // RVA: 0x7A7 | Ordinal: 1960
        void mapType(void);

    // RVA: 0x807 | Ordinal: 2056
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x828 | Ordinal: 2089
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x876 | Ordinal: 2167
        void registerMap(void);

    // RVA: 0x9BC | Ordinal: 2493
        void type(void) const;

    // RVA: 0x3FD | Ordinal: 1022
        void _UniformScaleTranslateMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_UNIFORMSCALETRANSLATEMAP_HPP
