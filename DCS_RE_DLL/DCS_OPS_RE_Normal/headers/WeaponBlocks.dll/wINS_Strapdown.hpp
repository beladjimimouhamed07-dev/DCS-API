#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wINS_Strapdown
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wINS_Strapdown
{
public:

    // RVA: 0x4C9 | Ordinal: 1226
        void __getInputPorts(void);

    // RVA: 0x562 | Ordinal: 1379
        void __getOutputPorts(void);

    // RVA: 0x7F9 | Ordinal: 2042
        void getDesc_(void);

    // RVA: 0x8AD | Ordinal: 2222
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AA | Ordinal: 2475
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xABF | Ordinal: 2752
        void init_randoms(int);

    // RVA: 0xB66 | Ordinal: 2919
        void readInputData(double);

    // RVA: 0xB84 | Ordinal: 2949
        void refineTargetData(struct INS::DataLinkMessage<3, double> *);

    // RVA: 0xBD2 | Ordinal: 3027
        void registerStateData(void);

    // RVA: 0xC8B | Ordinal: 3212
        void setAlignmentData(struct INS::AlignmentDataMessage<3, double> *);

    // RVA: 0xC8C | Ordinal: 3213
        void setAlignmentErrors(void);

    // RVA: 0xD2D | Ordinal: 3374
        void setTargetingData(struct INS::TargetingDataMessage<3, double> *);

    // RVA: 0xD94 | Ordinal: 3477
        void simulate(double);

    // RVA: 0xE24 | Ordinal: 3621
        void updatePosRot(double);

    // RVA: 0x13E | Ordinal: 319
        void wINS_Strapdown(class wINS_Strapdown const &);

    // RVA: 0x13F | Ordinal: 320
        void wINS_Strapdown(class wINS_Strapdown_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x258 | Ordinal: 601
        void _wINS_Strapdown(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WINS_STRAPDOWN_HPP
