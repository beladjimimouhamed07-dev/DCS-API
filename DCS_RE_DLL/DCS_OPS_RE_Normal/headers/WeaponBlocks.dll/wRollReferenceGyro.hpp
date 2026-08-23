#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wRollReferenceGyro
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRollReferenceGyro
{
public:

    // RVA: 0x4E3 | Ordinal: 1252
        void __getInputPorts(void);

    // RVA: 0x57C | Ordinal: 1405
        void __getOutputPorts(void);

    // RVA: 0x813 | Ordinal: 2068
        void getDesc_(void);

    // RVA: 0x8C7 | Ordinal: 2248
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C4 | Ordinal: 2501
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBE7 | Ordinal: 3048
        void registerStateData(void);

    // RVA: 0xDAC | Ordinal: 3501
        void simulate(double);

    // RVA: 0x18D | Ordinal: 398
        void wRollReferenceGyro(class wRollReferenceGyro &&);

    // RVA: 0x18E | Ordinal: 399
        void wRollReferenceGyro(class wRollReferenceGyro const &);

    // RVA: 0x18F | Ordinal: 400
        void wRollReferenceGyro(class wRollReferenceGyroDescriptor const *, class wSimulationSystem *);

    // RVA: 0x275 | Ordinal: 630
        void _wRollReferenceGyro(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WROLLREFERENCEGYRO_HPP
