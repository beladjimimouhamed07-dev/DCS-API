#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: AttributeArray
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class AttributeArray
{
public:

    // RVA: 0x30F | Ordinal: 784
        void AttributeArray(class openvdb::v9_0::points::AttributeArray const &, class tbb::spin_mutex::scoped_lock const &);

    // RVA: 0x310 | Ordinal: 785
        void AttributeArray(class openvdb::v9_0::points::AttributeArray const &);

    // RVA: 0x311 | Ordinal: 786
        void AttributeArray(void);

    // RVA: 0x5AD | Ordinal: 1454
        void clearRegistry(class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x5CC | Ordinal: 1485
        void constDataAsByteArray(void) const;

    // RVA: 0x5F0 | Ordinal: 1521
        void create(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, unsigned int, unsigned int, bool, class openvdb::v9_0::Metadata const *, class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x65D | Ordinal: 1630
        void flags(void) const;

    // RVA: 0x704 | Ordinal: 1797
        void hasConstantStride(void) const;

    // RVA: 0x75D | Ordinal: 1886
        void isHidden(void) const;

    // RVA: 0x77B | Ordinal: 1916
        void isRegistered(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x78A | Ordinal: 1931
        void isStreaming(void) const;

    // RVA: 0x78B | Ordinal: 1932
        void isTransient(void) const;

    // RVA: 0x878 | Ordinal: 2169
        void registerType(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class std::shared_ptr<class openvdb::v9_0::points::AttributeArray> (__cdecl *)(unsigned int, unsigned int, bool, class openvdb::v9_0::Metadata const *), class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x8CF | Ordinal: 2256
        void setConstantStride(bool);

    // RVA: 0x8F5 | Ordinal: 2294
        void setHidden(bool);

    // RVA: 0x933 | Ordinal: 2356
        void setStreaming(bool);

    // RVA: 0x949 | Ordinal: 2378
        void setTransient(bool);

    // RVA: 0x9C9 | Ordinal: 2506
        void unregisterType(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x3D3 | Ordinal: 980
        void _AttributeArray(void);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_ATTRIBUTEARRAY_HPP
