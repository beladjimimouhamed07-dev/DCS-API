#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAP_Spike
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_Spike
{
public:

    // RVA: 0x445 | Ordinal: 1094
        void LLgain(class wAP_SpikeDescriptor const *);

    // RVA: 0x480 | Ordinal: 1153
        void __getInputPorts(void);

    // RVA: 0x519 | Ordinal: 1306
        void __getOutputPorts(void);

    // RVA: 0x7B0 | Ordinal: 1969
        void getDesc_(void);

    // RVA: 0x864 | Ordinal: 2149
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x961 | Ordinal: 2402
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAAE | Ordinal: 2735
        void initV(double);

    // RVA: 0xB9D | Ordinal: 2974
        void registerStateData(void);

    // RVA: 0xD56 | Ordinal: 3415
        void simulate(double);

    // RVA: 0x4E | Ordinal: 79
        void wAP_Spike(class wAP_Spike &&);

    // RVA: 0x4F | Ordinal: 80
        void wAP_Spike(class wAP_Spike const &);

    // RVA: 0x50 | Ordinal: 81
        void wAP_Spike(class wAP_SpikeDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1FD | Ordinal: 510
        void _wAP_Spike(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_SPIKE_HPP
