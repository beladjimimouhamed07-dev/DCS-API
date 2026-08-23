#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: TemporalDatum
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class TemporalDatum
{
public:

    // RVA: 0x139 | Ordinal: 314
        void calendar(void) const;

    // RVA: 0x199 | Ordinal: 410
        void create(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::DateTime const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x33F | Ordinal: 832
        void temporalOrigin(void) const;

    // RVA: 0x95 | Ordinal: 150
        void _TemporalDatum(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_TEMPORALDATUM_HPP
