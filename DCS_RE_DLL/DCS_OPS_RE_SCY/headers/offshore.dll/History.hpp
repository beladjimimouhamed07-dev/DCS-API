#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: History
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class History
{
public:

    // RVA: 0x0 | Ordinal: 1
        void History(void);

    // RVA: 0x7B | Ordinal: 124
        void addHistoryPage(struct offshore::History::IHistoryPage *);

    // RVA: 0xCF | Ordinal: 208
        void clear(void);

    // RVA: 0x1A8 | Ordinal: 425
        void isEmpty(void) const;

    // RVA: 0x1DF | Ordinal: 480
        void redo(struct offshore::Scene &, class ed::list<int, class ed::allocator<int>> &);

    // RVA: 0x25F | Ordinal: 608
        void undo(struct offshore::Scene &, class ed::list<int, class ed::allocator<int>> &);

    // RVA: 0x19 | Ordinal: 26
        void _History(void);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_HISTORY_HPP
