#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: AttributeSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {

class AttributeSet
{
public:

    // RVA: 0x312 | Ordinal: 787
        void AttributeSet(class openvdb::v9_0::points::AttributeSet const &);

    // RVA: 0x313 | Ordinal: 788
        void AttributeSet(class openvdb::v9_0::points::AttributeSet const &, unsigned int, class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x314 | Ordinal: 789
        void AttributeSet(class std::shared_ptr<class openvdb::v9_0::points::AttributeSet::Descriptor> const &, unsigned int, class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x315 | Ordinal: 790
        void AttributeSet(void);

    // RVA: 0x51B | Ordinal: 1308
        void appendAttribute(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, unsigned int, bool, class openvdb::v9_0::Metadata const *);

    // RVA: 0x51C | Ordinal: 1309
        void appendAttribute(class openvdb::v9_0::points::AttributeSet::Descriptor const &, class std::shared_ptr<class openvdb::v9_0::points::AttributeSet::Descriptor> &, unsigned __int64, unsigned int, bool, class openvdb::v9_0::Metadata const *, class openvdb::v9_0::points::AttributeArray::ScopedRegistryLock const *);

    // RVA: 0x60D | Ordinal: 1550
        void descriptor(void);

    // RVA: 0x60E | Ordinal: 1551
        void descriptor(void) const;

    // RVA: 0x60F | Ordinal: 1552
        void descriptorPtr(void) const;

    // RVA: 0x629 | Ordinal: 1578
        void dropAttributes(class std::vector<unsigned __int64, class std::allocator<unsigned __int64>> const &);

    // RVA: 0x62A | Ordinal: 1579
        void dropAttributes(class std::vector<unsigned __int64, class std::allocator<unsigned __int64>> const &, class openvdb::v9_0::points::AttributeSet::Descriptor const &, class std::shared_ptr<class openvdb::v9_0::points::AttributeSet::Descriptor> &);

    // RVA: 0x650 | Ordinal: 1617
        void find(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x66A | Ordinal: 1643
        void get(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x66B | Ordinal: 1644
        void get(unsigned __int64);

    // RVA: 0x66C | Ordinal: 1645
        void get(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x66D | Ordinal: 1646
        void get(unsigned __int64) const;

    // RVA: 0x67B | Ordinal: 1660
        void getConst(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x67C | Ordinal: 1661
        void getConst(unsigned __int64) const;

    // RVA: 0x6F6 | Ordinal: 1783
        void groupAttributeIndices(void) const;

    // RVA: 0x6F8 | Ordinal: 1785
        void groupIndex(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x6F9 | Ordinal: 1786
        void groupIndex(unsigned __int64) const;

    // RVA: 0x6FE | Ordinal: 1791
        void groupOffset(struct std::pair<unsigned __int64, unsigned char> const &) const;

    // RVA: 0x6FF | Ordinal: 1792
        void groupOffset(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x789 | Ordinal: 1930
        void isShared(unsigned __int64) const;

    // RVA: 0x79D | Ordinal: 1950
        void makeUnique(unsigned __int64);

    // RVA: 0x7CB | Ordinal: 1996
        void memUsage(void) const;

    // RVA: 0x842 | Ordinal: 2115
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x84F | Ordinal: 2128
        void readAttributes(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x851 | Ordinal: 2130
        void readDescriptor(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x866 | Ordinal: 2151
        void readMetadata(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x87B | Ordinal: 2172
        void removeAttribute(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x87C | Ordinal: 2173
        void removeAttribute(unsigned __int64);

    // RVA: 0x87D | Ordinal: 2174
        void removeAttributeUnsafe(unsigned __int64);

    // RVA: 0x882 | Ordinal: 2179
        void renameAttributes(class openvdb::v9_0::points::AttributeSet::Descriptor const &, class std::shared_ptr<class openvdb::v9_0::points::AttributeSet::Descriptor> const &);

    // RVA: 0x886 | Ordinal: 2183
        void reorderAttributes(class std::shared_ptr<class openvdb::v9_0::points::AttributeSet::Descriptor> const &);

    // RVA: 0x887 | Ordinal: 2184
        void replace(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class openvdb::v9_0::points::AttributeArray> const &);

    // RVA: 0x888 | Ordinal: 2185
        void replace(unsigned __int64, class std::shared_ptr<class openvdb::v9_0::points::AttributeArray> const &);

    // RVA: 0x896 | Ordinal: 2199
        void resetDescriptor(class std::shared_ptr<class openvdb::v9_0::points::AttributeSet::Descriptor> const &, bool);

    // RVA: 0x964 | Ordinal: 2405
        void size(void) const;

    // RVA: 0x9FD | Ordinal: 2558
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0xA09 | Ordinal: 2570
        void writeAttributes(class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0xA0A | Ordinal: 2571
        void writeDescriptor(class std::basic_ostream<char, struct std::char_traits<char>> &, bool) const;

    // RVA: 0xA15 | Ordinal: 2582
        void writeMetadata(class std::basic_ostream<char, struct std::char_traits<char>> &, bool, bool) const;

    // RVA: 0x3D4 | Ordinal: 981
        void _AttributeSet(void);
};

} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_ATTRIBUTESET_HPP
