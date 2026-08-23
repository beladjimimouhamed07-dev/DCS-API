#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DatabaseContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class DatabaseContext
{
public:

    // RVA: 0x167 | Ordinal: 360
        void create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &, struct pj_ctx *);

    // RVA: 0x168 | Ordinal: 361
        void create(void *);

    // RVA: 0x261 | Ordinal: 610
        void getAuthorities(void) const;

    // RVA: 0x269 | Ordinal: 618
        void getDatabaseStructure(void) const;

    // RVA: 0x272 | Ordinal: 627
        void getInsertStatementsFor(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::common::IdentifiedObject>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &);

    // RVA: 0x274 | Ordinal: 629
        void getMetadata(char const *) const;

    // RVA: 0x278 | Ordinal: 633
        void getPath(void) const;

    // RVA: 0x27C | Ordinal: 637
        void getSqliteHandle(void) const;

    // RVA: 0x280 | Ordinal: 641
        void getVersionedAuthoritiesFromName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2B6 | Ordinal: 695
        void lookForGridInfo(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, bool &, bool &, bool &) const;

    // RVA: 0x332 | Ordinal: 819
        void startInsertStatementsSession(void);

    // RVA: 0x335 | Ordinal: 822
        void stopInsertStatementsSession(void);

    // RVA: 0x33A | Ordinal: 827
        void suggestsCodeFor(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::common::IdentifiedObject>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool);

    // RVA: 0x49 | Ordinal: 74
        void _DatabaseContext(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DATABASECONTEXT_HPP
