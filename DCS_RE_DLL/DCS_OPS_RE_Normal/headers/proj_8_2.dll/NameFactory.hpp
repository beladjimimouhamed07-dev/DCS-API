#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: NameFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace util {

class NameFactory
{
public:

    // RVA: 0x1D5 | Ordinal: 470
        void createGenericName(class std::shared_ptr<class osgeo::proj::util::NameSpace> const &, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &);

    // RVA: 0x1F8 | Ordinal: 505
        void createLocalName(class std::shared_ptr<class osgeo::proj::util::NameSpace> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x202 | Ordinal: 515
        void createNameSpace(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::util::GenericName>> const &, class osgeo::proj::util::PropertyMap const &);
};

} // namespace util
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_NAMEFACTORY_HPP
