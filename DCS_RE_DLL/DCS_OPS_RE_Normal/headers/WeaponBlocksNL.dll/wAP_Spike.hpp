#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7A8 | Ordinal: 1961
        void getDesc_(void);

    // RVA: 0x85B | Ordinal: 2140
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x958 | Ordinal: 2393
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA98 | Ordinal: 2713
        void initV(double);

    // RVA: 0xB73 | Ordinal: 2932
        void registerStateData(void);

    // RVA: 0xD0B | Ordinal: 3340
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_SPIKE_HPP
