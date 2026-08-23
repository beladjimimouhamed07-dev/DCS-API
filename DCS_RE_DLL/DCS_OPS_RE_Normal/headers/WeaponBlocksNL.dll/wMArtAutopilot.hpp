#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wMArtAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMArtAutopilot
{
public:

    // RVA: 0x4D3 | Ordinal: 1236
        void __getInputPorts(void);

    // RVA: 0x56C | Ordinal: 1389
        void __getOutputPorts(void);

    // RVA: 0x5C2 | Ordinal: 1475
        void calcByInpData(void);

    // RVA: 0x5C9 | Ordinal: 1482
        void calcCtrlVal(void);

    // RVA: 0x5D5 | Ordinal: 1494
        void calcError(void);

    // RVA: 0x606 | Ordinal: 1543
        void calcMainStageVertCtrlVal(void);

    // RVA: 0x651 | Ordinal: 1618
        void calcXCtrlVal(void);

    // RVA: 0x66D | Ordinal: 1646
        void checkFinsLimits(void);

    // RVA: 0x6AC | Ordinal: 1709
        void convCtrlValByRoll(void);

    // RVA: 0x6B3 | Ordinal: 1716
        void convSumError(void);

    // RVA: 0x6B5 | Ordinal: 1718
        void convWSumError(void);

    // RVA: 0x7FB | Ordinal: 2044
        void getDesc_(void);

    // RVA: 0x8AE | Ordinal: 2223
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AB | Ordinal: 2476
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2B | Ordinal: 2604
        void getProcParameters(void);

    // RVA: 0xA5E | Ordinal: 2655
        void getVertFinsLimitCoeff(void);

    // RVA: 0xAE4 | Ordinal: 2789
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xB40 | Ordinal: 2881
        void readInputData(double);

    // RVA: 0xBB0 | Ordinal: 2993
        void registerStateData(void);

    // RVA: 0xC47 | Ordinal: 3144
        void setApStage(int);

    // RVA: 0xCCC | Ordinal: 3277
        void setStPitch(class Math::Vector<3, double> const &);

    // RVA: 0xCF7 | Ordinal: 3320
        void simpleCalcCtrlVal(void);

    // RVA: 0xCF8 | Ordinal: 3321
        void simpleCalcCtrlXVal(void);

    // RVA: 0xD53 | Ordinal: 3412
        void simulate(double);

    // RVA: 0x15E | Ordinal: 351
        void wMArtAutopilot(class wMArtAutopilot &&);

    // RVA: 0x15F | Ordinal: 352
        void wMArtAutopilot(class wMArtAutopilot const &);

    // RVA: 0x160 | Ordinal: 353
        void wMArtAutopilot(class wMArtAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x263 | Ordinal: 612
        void _wMArtAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMARTAUTOPILOT_HPP
