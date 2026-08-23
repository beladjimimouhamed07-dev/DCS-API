#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x82F | Ordinal: 2096
        void getDesc_(void);

    // RVA: 0x8E3 | Ordinal: 2276
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9E0 | Ordinal: 2529
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA87 | Ordinal: 2696
        void initBackup(bool);

    // RVA: 0xAAC | Ordinal: 2733
        void initUpdate(bool);

    // RVA: 0xC00 | Ordinal: 3073
        void registerStateData(void);

    // RVA: 0xDC3 | Ordinal: 3524
        void simulate(double);

    // RVA: 0xDFF | Ordinal: 3584
        void trajSim(struct wWCS_SpikeNlos::PredState const &, class Math::Vector<2, double> const &, class wWCS_SpikeNlosDescriptor const *, double &, double &, double &);

    // RVA: 0xE03 | Ordinal: 3588
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCS_SPIKENLOS_HPP
