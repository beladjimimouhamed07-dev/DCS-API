#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wWCS_SpikeNlos
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCS_SpikeNlos
{
public:

    // RVA: 0x4FF | Ordinal: 1280
        void __getInputPorts(void);

    // RVA: 0x598 | Ordinal: 1433
        void __getOutputPorts(void);

    // RVA: 0x827 | Ordinal: 2088
        void getDesc_(void);

    // RVA: 0x8DA | Ordinal: 2267
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D7 | Ordinal: 2520
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA75 | Ordinal: 2678
        void initBackup(bool);

    // RVA: 0xA96 | Ordinal: 2711
        void initUpdate(bool);

    // RVA: 0xBD6 | Ordinal: 3031
        void registerStateData(void);

    // RVA: 0xD78 | Ordinal: 3449
        void simulate(double);

    // RVA: 0xDB4 | Ordinal: 3509
        void trajSim(struct wWCS_SpikeNlos::PredState const &, class Math::Vector<2, double> const &, class wWCS_SpikeNlosDescriptor const *, double &, double &, double &);

    // RVA: 0xDB8 | Ordinal: 3513
        void trustReg(class wWCS_SpikeNlosDescriptor const *, class Math::Vector<2, double> const &, struct wWCS_SpikeNlos::PredState const &);

    // RVA: 0x1D9 | Ordinal: 474
        void wWCS_SpikeNlos(class wWCS_SpikeNlos &&);

    // RVA: 0x1DA | Ordinal: 475
        void wWCS_SpikeNlos(class wWCS_SpikeNlos const &);

    // RVA: 0x1DB | Ordinal: 476
        void wWCS_SpikeNlos(class wWCS_SpikeNlosDescriptor const *, class wSimulationSystem *);

    // RVA: 0x292 | Ordinal: 659
        void _wWCS_SpikeNlos(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCS_SPIKENLOS_HPP
