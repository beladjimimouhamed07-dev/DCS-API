#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x806 | Ordinal: 2055
        void getDesc_(void);

    // RVA: 0x8B9 | Ordinal: 2234
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B6 | Ordinal: 2487
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBB9 | Ordinal: 3002
        void registerStateData(void);

    // RVA: 0xCE9 | Ordinal: 3306
        void setTriggerValue(bool);

    // RVA: 0xD5D | Ordinal: 3422
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WPORTTOWIRESIGNALBLOCK_HPP
