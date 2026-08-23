#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FlexyTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FlexyTask
{
public:

    // RVA: 0xCF | Ordinal: 208
        void FlexyTask(class AI::FlexyTask &&);

    // RVA: 0xD0 | Ordinal: 209
        void FlexyTask(class AI::FlexyTask const &);

    // RVA: 0xD1 | Ordinal: 210
        void FlexyTask(void);

    // RVA: 0x6DD | Ordinal: 1758
        void const_visit(class std::function<int __cdecl(class AI::Task const *, unsigned int)> const &, unsigned int) const;

    // RVA: 0x7F7 | Ordinal: 2040
        void getCategory(void) const;

    // RVA: 0x9A4 | Ordinal: 2469
        void isBackGround(void) const;

    // RVA: 0xA1B | Ordinal: 2588
        void load(class Lua::Config &);

    // RVA: 0xAE0 | Ordinal: 2785
        void params(void) const;

    // RVA: 0xC5D | Ordinal: 3166
        void visit(class std::function<int __cdecl(class AI::Task *, unsigned int)> const &, unsigned int);

    // RVA: 0x26E | Ordinal: 623
        void _FlexyTask(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FLEXYTASK_HPP
