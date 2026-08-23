#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: HistoryTweak
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {
namespace History {

class HistoryTweak
{
public:

    // RVA: 0x6D | Ordinal: 110
        void add(struct offshore::Scene &, int);

    // RVA: 0x6E | Ordinal: 111
        void add(struct offshore::Scene &, int, struct offshore::Mesh const &);

    // RVA: 0x6F | Ordinal: 112
        void add(struct offshore::Scene &, int, struct offshore::Spline const &);

    // RVA: 0x70 | Ordinal: 113
        void add(int, class osg::Matrixd const &);

    // RVA: 0x10F | Ordinal: 272
        void empty(void) const;

    // RVA: 0x1E2 | Ordinal: 483
        void redo(struct offshore::Scene &, class ed::list<int, class ed::allocator<int>> &);
};

} // namespace History
} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_HISTORYTWEAK_HPP
