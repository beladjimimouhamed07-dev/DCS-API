#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Command
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Command
{
public:

    // RVA: 0x6C | Ordinal: 109
        void Command(void);

    // RVA: 0x78E | Ordinal: 1935
        void exec(class AI::Controller *) const;

    // RVA: 0x24D | Ordinal: 590
        void _Command(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_COMMAND_HPP
