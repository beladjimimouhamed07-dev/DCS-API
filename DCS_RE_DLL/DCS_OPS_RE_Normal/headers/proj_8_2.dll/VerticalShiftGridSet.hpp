#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: VerticalShiftGridSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class VerticalShiftGridSet
{
public:

    // RVA: 0x257 | Ordinal: 600
        void format(void) const;

    // RVA: 0x286 | Ordinal: 647
        void gridAt(double, double) const;

    // RVA: 0x289 | Ordinal: 650
        void grids(void) const;

    // RVA: 0x2C3 | Ordinal: 708
        void name(void) const;

    // RVA: 0x2CB | Ordinal: 716
        void open(struct pj_ctx *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2F9 | Ordinal: 762
        void reassign_context(struct pj_ctx *);

    // RVA: 0x2FD | Ordinal: 766
        void reopen(struct pj_ctx *);

    // RVA: 0xA0 | Ordinal: 161
        void _VerticalShiftGridSet(void);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_VERTICALSHIFTGRIDSET_HPP
