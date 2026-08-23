#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: HistoryNodeOp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {
namespace History {

class HistoryNodeOp
{
public:

    // RVA: 0x6B | Ordinal: 108
        void add(int, struct offshore::TreeNode const &);

    // RVA: 0x10D | Ordinal: 270
        void empty(void) const;

    // RVA: 0x1E0 | Ordinal: 481
        void redo(struct offshore::Scene &, class ed::list<int, class ed::allocator<int>> &);
};

} // namespace History
} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_HISTORYNODEOP_HPP
