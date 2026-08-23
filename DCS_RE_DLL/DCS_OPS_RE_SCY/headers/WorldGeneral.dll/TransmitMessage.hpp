#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TransmitMessage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class TransmitMessage
{
public:

    // RVA: 0x1C2 | Ordinal: 451
        void TransmitMessage(class AI::TransmitMessage &&);

    // RVA: 0x1C3 | Ordinal: 452
        void TransmitMessage(class AI::TransmitMessage const &);

    // RVA: 0x1C4 | Ordinal: 453
        void TransmitMessage(void);

    // RVA: 0x6D6 | Ordinal: 1751
        void clone(void) const;

    // RVA: 0x748 | Ordinal: 1865
        void create(void);

    // RVA: 0x8C2 | Ordinal: 2243
        void getName(void) const;

    // RVA: 0xA47 | Ordinal: 2632
        void load(class Lua::Config &);

    // RVA: 0xAFD | Ordinal: 2814
        void params(void) const;

    // RVA: 0x2C5 | Ordinal: 710
        void _TransmitMessage(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TRANSMITMESSAGE_HPP
