#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: GenericShiftGridSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class GenericShiftGridSet
{
public:

    // RVA: 0x255 | Ordinal: 598
        void format(void) const;

    // RVA: 0x282 | Ordinal: 643
        void gridAt(double, double) const;

    // RVA: 0x287 | Ordinal: 648
        void grids(void) const;

    // RVA: 0x2BD | Ordinal: 702
        void name(void) const;

    // RVA: 0x2C9 | Ordinal: 714
        void open(struct pj_ctx *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2F7 | Ordinal: 760
        void reassign_context(struct pj_ctx *);

    // RVA: 0x2FB | Ordinal: 764
        void reopen(struct pj_ctx *);

    // RVA: 0x62 | Ordinal: 99
        void _GenericShiftGridSet(void);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_GENERICSHIFTGRIDSET_HPP
