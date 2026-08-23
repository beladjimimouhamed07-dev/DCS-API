#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TransmitMessageTask
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class TransmitMessageTask
{
public:

    // RVA: 0x1C5 | Ordinal: 454
        void TransmitMessageTask(class AI::TransmitMessageTask &&);

    // RVA: 0x1C6 | Ordinal: 455
        void TransmitMessageTask(class AI::TransmitMessageTask const &);

    // RVA: 0x1C7 | Ordinal: 456
        void TransmitMessageTask(void);

    // RVA: 0x6D7 | Ordinal: 1752
        void clone(void) const;

    // RVA: 0x749 | Ordinal: 1866
        void create(void);

    // RVA: 0x80C | Ordinal: 2061
        void getCategory(void) const;

    // RVA: 0x8C3 | Ordinal: 2244
        void getName(void) const;

    // RVA: 0xA48 | Ordinal: 2633
        void load(class Lua::Config &);

    // RVA: 0xAFE | Ordinal: 2815
        void params(void) const;

    // RVA: 0x2C6 | Ordinal: 711
        void _TransmitMessageTask(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TRANSMITMESSAGETASK_HPP
