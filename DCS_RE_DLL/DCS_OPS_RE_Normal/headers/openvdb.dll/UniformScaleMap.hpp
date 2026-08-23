#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: UniformScaleMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class UniformScaleMap
{
public:

    // RVA: 0x38E | Ordinal: 911
        void UniformScaleMap(class openvdb::v9_0::math::UniformScaleMap const &);

    // RVA: 0x38F | Ordinal: 912
        void UniformScaleMap(double);

    // RVA: 0x390 | Ordinal: 913
        void UniformScaleMap(void);

    // RVA: 0x5E6 | Ordinal: 1511
        void copy(void) const;

    // RVA: 0x5F9 | Ordinal: 1530
        void create(void);

    // RVA: 0x747 | Ordinal: 1864
        void inverseMap(void) const;

    // RVA: 0x758 | Ordinal: 1881
        void isEqual(class openvdb::v9_0::math::MapBase const &) const;

    // RVA: 0x782 | Ordinal: 1923
        void isRegistered(void);

    // RVA: 0x7A6 | Ordinal: 1959
        void mapType(void);

    // RVA: 0x806 | Ordinal: 2055
        void postTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x827 | Ordinal: 2088
        void preTranslate(class openvdb::v9_0::math::Vec3<double> const &) const;

    // RVA: 0x875 | Ordinal: 2166
        void registerMap(void);

    // RVA: 0x9BB | Ordinal: 2492
        void type(void) const;

    // RVA: 0x3FC | Ordinal: 1021
        void _UniformScaleMap(void);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_UNIFORMSCALEMAP_HPP
