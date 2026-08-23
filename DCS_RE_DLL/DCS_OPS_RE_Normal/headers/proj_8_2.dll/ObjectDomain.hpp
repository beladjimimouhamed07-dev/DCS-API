#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: ObjectDomain
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace common {

class ObjectDomain
{
public:

    // RVA: 0x183 | Ordinal: 388
        void create(class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class std::shared_ptr<class osgeo::proj::metadata::Extent> const &);

    // RVA: 0x248 | Ordinal: 585
        void domainOfValidity(void) const;

    // RVA: 0x301 | Ordinal: 770
        void scope(void) const;

    // RVA: 0x7C | Ordinal: 125
        void _ObjectDomain(void);
};

} // namespace common
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_OBJECTDOMAIN_HPP
