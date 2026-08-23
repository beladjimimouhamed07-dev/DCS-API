#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Stack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Stack
{
public:

    // RVA: 0x182 | Ordinal: 387
        void Stack(class AI::Stack &&);

    // RVA: 0x183 | Ordinal: 388
        void Stack(class AI::Stack const &);

    // RVA: 0x184 | Ordinal: 389
        void Stack(void);

    // RVA: 0x6CD | Ordinal: 1742
        void clone(void) const;

    // RVA: 0x73F | Ordinal: 1856
        void create(void);

    // RVA: 0x8B9 | Ordinal: 2234
        void getName(void) const;

    // RVA: 0xA3D | Ordinal: 2622
        void load(class Lua::Config &);

    // RVA: 0x2AE | Ordinal: 687
        void _Stack(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_STACK_HPP
