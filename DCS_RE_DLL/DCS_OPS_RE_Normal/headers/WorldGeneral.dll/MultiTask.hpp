#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MultiTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class MultiTask
{
public:

    // RVA: 0x121 | Ordinal: 290
        void MultiTask(class AI::MultiTask const &);

    // RVA: 0x122 | Ordinal: 291
        void MultiTask(void);

    // RVA: 0x6DE | Ordinal: 1759
        void const_visit(class std::function<int __cdecl(class AI::Task const *, unsigned int)> const &, unsigned int) const;

    // RVA: 0x7FF | Ordinal: 2048
        void getCategory(void) const;

    // RVA: 0x9A8 | Ordinal: 2473
        void isBackGround(void) const;

    // RVA: 0xC60 | Ordinal: 3169
        void visit(class std::function<int __cdecl(class AI::Task *, unsigned int)> const &, unsigned int);

    // RVA: 0x28D | Ordinal: 654
        void _MultiTask(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_MULTITASK_HPP
