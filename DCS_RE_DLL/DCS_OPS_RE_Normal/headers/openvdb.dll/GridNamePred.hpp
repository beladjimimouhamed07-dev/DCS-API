#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: GridNamePred
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {

class GridNamePred
{
public:

    // RVA: 0x328 | Ordinal: 809
        void GridNamePred(struct openvdb::v9_0::GridNamePred &&);

    // RVA: 0x329 | Ordinal: 810
        void GridNamePred(struct openvdb::v9_0::GridNamePred const &);

    // RVA: 0x32A | Ordinal: 811
        void GridNamePred(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x4B5 | Ordinal: 1206
        void operator()(class std::shared_ptr<class openvdb::v9_0::GridBase const> const &) const;

    // RVA: 0x3DB | Ordinal: 988
        void _GridNamePred(void);
};

} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_GRIDNAMEPRED_HPP
