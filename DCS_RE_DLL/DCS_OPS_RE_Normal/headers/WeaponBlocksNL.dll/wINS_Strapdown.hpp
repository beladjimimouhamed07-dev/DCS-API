#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7F1 | Ordinal: 2034
        void getDesc_(void);

    // RVA: 0x8A4 | Ordinal: 2213
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A1 | Ordinal: 2466
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA9F | Ordinal: 2720
        void init_randoms(int);

    // RVA: 0xB3C | Ordinal: 2877
        void readInputData(double);

    // RVA: 0xB5A | Ordinal: 2907
        void refineTargetData(struct INS::DataLinkMessage<3, double> *);

    // RVA: 0xBA8 | Ordinal: 2985
        void registerStateData(void);

    // RVA: 0xC41 | Ordinal: 3138
        void setAlignmentData(struct INS::AlignmentDataMessage<3, double> *);

    // RVA: 0xC42 | Ordinal: 3139
        void setAlignmentErrors(void);

    // RVA: 0xCE2 | Ordinal: 3299
        void setTargetingData(struct INS::TargetingDataMessage<3, double> *);

    // RVA: 0xD49 | Ordinal: 3402
        void simulate(double);

    // RVA: 0xDD5 | Ordinal: 3542
        void updatePosRot(double);

    // RVA: 0x13E | Ordinal: 319
        void wINS_Strapdown(class wINS_Strapdown const &);

    // RVA: 0x13F | Ordinal: 320
        void wINS_Strapdown(class wINS_Strapdown_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x258 | Ordinal: 601
        void _wINS_Strapdown(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WINS_STRAPDOWN_HPP
