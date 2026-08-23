#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: TemporalExtent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace metadata {

class TemporalExtent
{
public:

    // RVA: 0x148 | Ordinal: 329
        void contains(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::TemporalExtent>> const &) const;

    // RVA: 0x19A | Ordinal: 411
        void create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x29E | Ordinal: 671
        void intersects(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::TemporalExtent>> const &) const;

    // RVA: 0x331 | Ordinal: 818
        void start(void) const;

    // RVA: 0x334 | Ordinal: 821
        void stop(void) const;

    // RVA: 0x96 | Ordinal: 151
        void _TemporalExtent(void);
};

} // namespace metadata
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_TEMPORALEXTENT_HPP
