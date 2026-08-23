#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x81F | Ordinal: 2080
        void getDesc_(void);

    // RVA: 0x8D3 | Ordinal: 2260
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D0 | Ordinal: 2513
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAE3 | Ordinal: 2788
        void isSnareRadiatedByRadar(void);

    // RVA: 0xBF1 | Ordinal: 3058
        void registerStateData(void);

    // RVA: 0xDB4 | Ordinal: 3509
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSNAREBLOCK_HPP
