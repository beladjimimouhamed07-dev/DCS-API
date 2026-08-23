#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x80B | Ordinal: 2060
        void getDesc_(void);

    // RVA: 0x8BE | Ordinal: 2239
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BB | Ordinal: 2492
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBBD | Ordinal: 3006
        void registerStateData(void);

    // RVA: 0xD61 | Ordinal: 3426
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WROLLREFERENCEGYRO_HPP
