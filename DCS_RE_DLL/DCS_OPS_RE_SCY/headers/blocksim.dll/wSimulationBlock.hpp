#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationBlock
{
public:

    // RVA: 0x3ED | Ordinal: 1006
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x473 | Ordinal: 1140
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0x532 | Ordinal: 1331
        void isOfType(enum weBlockType) const;

    // RVA: 0x10E | Ordinal: 271
        void wSimulationBlock(class wSimulationBlockDescriptor const *);

    // RVA: 0x10F | Ordinal: 272
        void wSimulationBlock(class wSimulationBlock const &);

    // RVA: 0x16A | Ordinal: 363
        void _wSimulationBlock(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONBLOCK_HPP
