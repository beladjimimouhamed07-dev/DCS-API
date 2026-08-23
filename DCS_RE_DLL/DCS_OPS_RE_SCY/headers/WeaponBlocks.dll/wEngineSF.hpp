#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7E1 | Ordinal: 2018
        void getDesc_(void);

    // RVA: 0x839 | Ordinal: 2106
        void getFuelRate(double);

    // RVA: 0x895 | Ordinal: 2198
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x992 | Ordinal: 2451
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB7A | Ordinal: 2939
        void recalcFuelMass(void);

    // RVA: 0xBBF | Ordinal: 3008
        void registerStateData(void);

    // RVA: 0xD82 | Ordinal: 3459
        void simulate(double);

    // RVA: 0xDE6 | Ordinal: 3559
        void switchState_(int);

    // RVA: 0xE5 | Ordinal: 230
        void wEngineSF(class wEngineSF const &);

    // RVA: 0xE6 | Ordinal: 231
        void wEngineSF(class wEngineSFDescriptor const *, class wSimulationSystem *);

    // RVA: 0x235 | Ordinal: 566
        void _wEngineSF(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINESF_HPP
