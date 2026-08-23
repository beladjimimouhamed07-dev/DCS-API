#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Task
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Task
{
public:

    // RVA: 0x1AC | Ordinal: 429
        void Task(class AI::Task const &);

    // RVA: 0x1AD | Ordinal: 430
        void Task(void);

    // RVA: 0x6DF | Ordinal: 1760
        void const_visit(class std::function<int __cdecl(class AI::Task const *, unsigned int)> const &, unsigned int) const;

    // RVA: 0x796 | Ordinal: 1943
        void exec(class AI::Controller *);

    // RVA: 0xA45 | Ordinal: 2630
        void load(class Lua::Config &);

    // RVA: 0xAFB | Ordinal: 2812
        void params(void) const;

    // RVA: 0xC63 | Ordinal: 3172
        void visit(class std::function<int __cdecl(class AI::Task *, unsigned int)> const &, unsigned int);

    // RVA: 0x2BB | Ordinal: 700
        void _Task(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TASK_HPP
