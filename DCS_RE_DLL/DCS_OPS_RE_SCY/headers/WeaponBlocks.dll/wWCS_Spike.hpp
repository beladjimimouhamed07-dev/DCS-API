#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x82E | Ordinal: 2095
        void getDesc_(void);

    // RVA: 0x8E2 | Ordinal: 2275
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9DF | Ordinal: 2528
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA9A | Ordinal: 2715
        void initManualLOS(class Math::Vector<3, double> const &);

    // RVA: 0xAAB | Ordinal: 2732
        void initTrajMode(int);

    // RVA: 0xBFF | Ordinal: 3072
        void registerStateData(void);

    // RVA: 0xDC2 | Ordinal: 3523
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCS_SPIKE_HPP
