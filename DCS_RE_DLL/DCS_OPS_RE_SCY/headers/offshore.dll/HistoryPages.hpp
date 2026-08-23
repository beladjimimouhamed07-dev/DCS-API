#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: HistoryPages
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {
namespace History {

class HistoryPages
{
public:

    // RVA: 0x6C | Ordinal: 109
        void add(struct offshore::History::IHistoryPage *);

    // RVA: 0x10E | Ordinal: 271
        void empty(void) const;

    // RVA: 0x1E1 | Ordinal: 482
        void redo(struct offshore::Scene &, class ed::list<int, class ed::allocator<int>> &);

    // RVA: 0x1A | Ordinal: 27
        void _HistoryPages(void);
};

} // namespace History
} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_HISTORYPAGES_HPP
