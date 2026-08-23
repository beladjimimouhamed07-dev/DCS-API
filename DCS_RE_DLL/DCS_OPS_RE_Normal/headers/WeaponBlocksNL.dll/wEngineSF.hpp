#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineSF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineSF
{
public:

    // RVA: 0x4B1 | Ordinal: 1202
        void __getInputPorts(void);

    // RVA: 0x54A | Ordinal: 1355
        void __getOutputPorts(void);

    // RVA: 0x7D9 | Ordinal: 2010
        void getDesc_(void);

    // RVA: 0x831 | Ordinal: 2098
        void getFuelRate(double);

    // RVA: 0x88C | Ordinal: 2189
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x989 | Ordinal: 2442
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB50 | Ordinal: 2897
        void recalcFuelMass(void);

    // RVA: 0xB95 | Ordinal: 2966
        void registerStateData(void);

    // RVA: 0xD37 | Ordinal: 3384
        void simulate(double);

    // RVA: 0xD9B | Ordinal: 3484
        void switchState_(int);

    // RVA: 0xE5 | Ordinal: 230
        void wEngineSF(class wEngineSF const &);

    // RVA: 0xE6 | Ordinal: 231
        void wEngineSF(class wEngineSFDescriptor const *, class wSimulationSystem *);

    // RVA: 0x235 | Ordinal: 566
        void _wEngineSF(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINESF_HPP
