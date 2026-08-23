#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MyStack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class MyStack
{
public:

    // RVA: 0x125 | Ordinal: 294
        void MyStack(class AI::MyStack &&);

    // RVA: 0x126 | Ordinal: 295
        void MyStack(class AI::MyStack const &);

    // RVA: 0x127 | Ordinal: 296
        void MyStack(void);

    // RVA: 0x6B7 | Ordinal: 1720
        void clone(void) const;

    // RVA: 0x728 | Ordinal: 1833
        void create(void);

    // RVA: 0x8A3 | Ordinal: 2212
        void getName(void) const;

    // RVA: 0xA25 | Ordinal: 2598
        void load(class Lua::Config &);

    // RVA: 0xB2D | Ordinal: 2862
        void push(class AI::Task const *);

    // RVA: 0x28F | Ordinal: 656
        void _MyStack(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_MYSTACK_HPP
