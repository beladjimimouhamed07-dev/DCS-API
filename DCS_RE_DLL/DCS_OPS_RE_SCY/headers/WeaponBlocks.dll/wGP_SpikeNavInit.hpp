#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGP_SpikeNavInit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_SpikeNavInit
{
public:

    // RVA: 0x4C5 | Ordinal: 1222
        void __getInputPorts(void);

    // RVA: 0x55E | Ordinal: 1375
        void __getOutputPorts(void);

    // RVA: 0x5AC | Ordinal: 1453
        void alignTfer(struct INS::AlignmentDataMessage<3, double> *);

    // RVA: 0x7F5 | Ordinal: 2038
        void getDesc_(void);

    // RVA: 0x8A9 | Ordinal: 2218
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A6 | Ordinal: 2471
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBCF | Ordinal: 3024
        void registerStateData(void);

    // RVA: 0xD8F | Ordinal: 3472
        void simulate(double);

    // RVA: 0xDF4 | Ordinal: 3573
        void targetTfer(struct INS::TargetingDataMessage<3, double> *);

    // RVA: 0x12F | Ordinal: 304
        void wGP_SpikeNavInit(class wGP_SpikeNavInit &&);

    // RVA: 0x130 | Ordinal: 305
        void wGP_SpikeNavInit(class wGP_SpikeNavInit const &);

    // RVA: 0x131 | Ordinal: 306
        void wGP_SpikeNavInit(class wGP_SpikeNavInitDescriptor const *, class wSimulationSystem *);

    // RVA: 0xE2E | Ordinal: 3631
        void wcsUpdate(struct INS::TargetingDataMessage<3, double> *);

    // RVA: 0x252 | Ordinal: 595
        void _wGP_SpikeNavInit(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_SPIKENAVINIT_HPP
