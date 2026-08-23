#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace points {
namespace AttributeSet {

class Descriptor
{
public:

    // RVA: 0x318 | Ordinal: 793
        void Descriptor(class openvdb::v9_0::points::AttributeSet::Descriptor const &);

    // RVA: 0x319 | Ordinal: 794
        void Descriptor(void);

    // RVA: 0x51D | Ordinal: 1310
        void appendTo(class std::vector<struct openvdb::v9_0::points::AttributeSet::Util::NameAndType, class std::allocator<struct openvdb::v9_0::points::AttributeSet::Util::NameAndType>> &) const;

    // RVA: 0x571 | Ordinal: 1394
        void availableGroups(void) const;

    // RVA: 0x59C | Ordinal: 1437
        void canCompactGroups(void) const;

    // RVA: 0x5A9 | Ordinal: 1450
        void clearGroups(void);

    // RVA: 0x5ED | Ordinal: 1518
        void count(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &) const;

    // RVA: 0x5F1 | Ordinal: 1522
        void create(class std::vector<struct openvdb::v9_0::points::AttributeSet::Util::NameAndType, class std::allocator<struct openvdb::v9_0::points::AttributeSet::Util::NameAndType>> const &, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>> const &, class openvdb::v9_0::MetaMap const &);

    // RVA: 0x5F2 | Ordinal: 1523
        void create(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &);

    // RVA: 0x62B | Ordinal: 1580
        void dropGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x62C | Ordinal: 1581
        void duplicateAppend(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &) const;

    // RVA: 0x62D | Ordinal: 1582
        void duplicateDrop(class std::vector<unsigned __int64, class std::allocator<unsigned __int64>> const &) const;

    // RVA: 0x651 | Ordinal: 1618
        void find(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x6AE | Ordinal: 1711
        void getMetadata(void);

    // RVA: 0x6AF | Ordinal: 1712
        void getMetadata(void) const;

    // RVA: 0x6F7 | Ordinal: 1784
        void groupBits(void);

    // RVA: 0x6FA | Ordinal: 1787
        void groupIndex(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x6FB | Ordinal: 1788
        void groupIndex(unsigned __int64) const;

    // RVA: 0x6FC | Ordinal: 1789
        void groupIndexCollision(class openvdb::v9_0::points::AttributeSet::Descriptor const &) const;

    // RVA: 0x6FD | Ordinal: 1790
        void groupMap(void) const;

    // RVA: 0x700 | Ordinal: 1793
        void groupOffset(struct std::pair<unsigned __int64, unsigned char> const &) const;

    // RVA: 0x701 | Ordinal: 1794
        void groupOffset(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x706 | Ordinal: 1799
        void hasDefaultValue(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x708 | Ordinal: 1801
        void hasGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x714 | Ordinal: 1813
        void hasSameAttributes(class openvdb::v9_0::points::AttributeSet::Descriptor const &) const;

    // RVA: 0x738 | Ordinal: 1849
        void insert(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &);

    // RVA: 0x79E | Ordinal: 1951
        void map(void) const;

    // RVA: 0x7CC | Ordinal: 1997
        void memUsage(void) const;

    // RVA: 0x7E4 | Ordinal: 2021
        void parseNames(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> &, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> &, bool &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x7E5 | Ordinal: 2022
        void parseNames(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> &, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x83F | Ordinal: 2112
        void pruneUnusedDefaultValues(void);

    // RVA: 0x843 | Ordinal: 2116
        void read(class std::basic_istream<char, struct std::char_traits<char>> &);

    // RVA: 0x87E | Ordinal: 2175
        void removeDefaultValue(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x881 | Ordinal: 2178
        void rename(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x883 | Ordinal: 2180
        void renameGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x889 | Ordinal: 2186
        void requiresGroupMove(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, unsigned __int64 &, unsigned __int64 &) const;

    // RVA: 0x8D8 | Ordinal: 2265
        void setDefaultValue(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class openvdb::v9_0::Metadata const &);

    // RVA: 0x8F2 | Ordinal: 2291
        void setGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned __int64, bool);

    // RVA: 0x966 | Ordinal: 2407
        void size(void) const;

    // RVA: 0x9B6 | Ordinal: 2487
        void type(unsigned __int64) const;

    // RVA: 0x9C3 | Ordinal: 2500
        void uniqueGroupName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x9C4 | Ordinal: 2501
        void uniqueName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x9CC | Ordinal: 2509
        void unusedGroupOffset(unsigned __int64) const;

    // RVA: 0x9CD | Ordinal: 2510
        void unusedGroups(void) const;

    // RVA: 0x9D0 | Ordinal: 2513
        void validName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x9D2 | Ordinal: 2515
        void valueType(unsigned __int64) const;

    // RVA: 0x9FE | Ordinal: 2559
        void write(class std::basic_ostream<char, struct std::char_traits<char>> &) const;

    // RVA: 0x3D6 | Ordinal: 983
        void _Descriptor(void);
};

} // namespace AttributeSet
} // namespace points
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_DESCRIPTOR_HPP
