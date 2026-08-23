#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSnareBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSnareBlock
{
public:

    // RVA: 0x4EF | Ordinal: 1264
        void __getInputPorts(void);

    // RVA: 0x588 | Ordinal: 1417
        void __getOutputPorts(void);

    // RVA: 0x817 | Ordinal: 2072
        void getDesc_(void);

    // RVA: 0x8CA | Ordinal: 2251
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C7 | Ordinal: 2504
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xABC | Ordinal: 2749
        void isSnareRadiatedByRadar(void);

    // RVA: 0xBC7 | Ordinal: 3016
        void registerStateData(void);

    // RVA: 0xD69 | Ordinal: 3434
        void simulate(double);

    // RVA: 0x1AB | Ordinal: 428
        void wSnareBlock(class wSnareBlock &&);

    // RVA: 0x1AC | Ordinal: 429
        void wSnareBlock(class wSnareBlock const &);

    // RVA: 0x1AD | Ordinal: 430
        void wSnareBlock(class wSnareBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x281 | Ordinal: 642
        void _wSnareBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSNAREBLOCK_HPP
