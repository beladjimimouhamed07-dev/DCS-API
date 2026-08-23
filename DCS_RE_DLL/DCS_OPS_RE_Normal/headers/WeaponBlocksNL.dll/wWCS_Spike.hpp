#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wWCS_Spike
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCS_Spike
{
public:

    // RVA: 0x4FE | Ordinal: 1279
        void __getInputPorts(void);

    // RVA: 0x597 | Ordinal: 1432
        void __getOutputPorts(void);

    // RVA: 0x655 | Ordinal: 1622
        void calculateGimbalAngles(class Math::Vector<3, double> const &);

    // RVA: 0x826 | Ordinal: 2087
        void getDesc_(void);

    // RVA: 0x8D9 | Ordinal: 2266
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D6 | Ordinal: 2519
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA84 | Ordinal: 2693
        void initManualLOS(class Math::Vector<3, double> const &);

    // RVA: 0xA95 | Ordinal: 2710
        void initTrajMode(int);

    // RVA: 0xBD5 | Ordinal: 3030
        void registerStateData(void);

    // RVA: 0xD77 | Ordinal: 3448
        void simulate(double);

    // RVA: 0x1D6 | Ordinal: 471
        void wWCS_Spike(class wWCS_Spike &&);

    // RVA: 0x1D7 | Ordinal: 472
        void wWCS_Spike(class wWCS_Spike const &);

    // RVA: 0x1D8 | Ordinal: 473
        void wWCS_Spike(class wWCS_SpikeDescriptor const *, class wSimulationSystem *);

    // RVA: 0x291 | Ordinal: 658
        void _wWCS_Spike(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCS_SPIKE_HPP
