#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wPortToWireSignalBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wPortToWireSignalBlock
{
public:

    // RVA: 0x4DE | Ordinal: 1247
        void __getInputPorts(void);

    // RVA: 0x577 | Ordinal: 1400
        void __getOutputPorts(void);

    // RVA: 0x80E | Ordinal: 2063
        void getDesc_(void);

    // RVA: 0x8C2 | Ordinal: 2243
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BF | Ordinal: 2496
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBE3 | Ordinal: 3044
        void registerStateData(void);

    // RVA: 0xD34 | Ordinal: 3381
        void setTriggerValue(bool);

    // RVA: 0xDA8 | Ordinal: 3497
        void simulate(double);

    // RVA: 0x17E | Ordinal: 383
        void wPortToWireSignalBlock(class wPortToWireSignalBlock &&);

    // RVA: 0x17F | Ordinal: 384
        void wPortToWireSignalBlock(class wPortToWireSignalBlock const &);

    // RVA: 0x180 | Ordinal: 385
        void wPortToWireSignalBlock(class wPortToWireSignalBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x26F | Ordinal: 624
        void _wPortToWireSignalBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WPORTTOWIRESIGNALBLOCK_HPP
