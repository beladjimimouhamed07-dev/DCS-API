#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: HorizontalShiftGridSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class HorizontalShiftGridSet
{
public:

    // RVA: 0x256 | Ordinal: 599
        void format(void) const;

    // RVA: 0x284 | Ordinal: 645
        void gridAt(double, double) const;

    // RVA: 0x288 | Ordinal: 649
        void grids(void) const;

    // RVA: 0x2BF | Ordinal: 704
        void name(void) const;

    // RVA: 0x2CA | Ordinal: 715
        void open(struct pj_ctx *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2F8 | Ordinal: 761
        void reassign_context(struct pj_ctx *);

    // RVA: 0x2FC | Ordinal: 765
        void reopen(struct pj_ctx *);

    // RVA: 0x6B | Ordinal: 108
        void _HorizontalShiftGridSet(void);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_HORIZONTALSHIFTGRIDSET_HPP
