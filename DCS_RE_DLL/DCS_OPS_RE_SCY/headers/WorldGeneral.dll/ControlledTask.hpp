#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ControlledTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ControlledTask
{
public:

    // RVA: 0x6D | Ordinal: 110
        void ControlledTask(class AI::ControlledTask &&);

    // RVA: 0x6E | Ordinal: 111
        void ControlledTask(class AI::ControlledTask const &);

    // RVA: 0x6F | Ordinal: 112
        void ControlledTask(void);

    // RVA: 0x694 | Ordinal: 1685
        void clone(void) const;

    // RVA: 0x701 | Ordinal: 1794
        void create(void);

    // RVA: 0x78F | Ordinal: 1936
        void exec(class AI::Controller *);

    // RVA: 0x880 | Ordinal: 2177
        void getName(void) const;

    // RVA: 0xA00 | Ordinal: 2561
        void load(class Lua::Config &);

    // RVA: 0xAC9 | Ordinal: 2762
        void params(void) const;

    // RVA: 0x24E | Ordinal: 591
        void _ControlledTask(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CONTROLLEDTASK_HPP
