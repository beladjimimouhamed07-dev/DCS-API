#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x66F | Ordinal: 1648
        void checkFinsLimits(void);

    // RVA: 0x6B0 | Ordinal: 1713
        void convCtrlValByRoll(void);

    // RVA: 0x6B7 | Ordinal: 1720
        void convSumError(void);

    // RVA: 0x6B9 | Ordinal: 1722
        void convWSumError(void);

    // RVA: 0x803 | Ordinal: 2052
        void getDesc_(void);

    // RVA: 0x8B7 | Ordinal: 2232
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B4 | Ordinal: 2485
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA34 | Ordinal: 2613
        void getProcParameters(void);

    // RVA: 0xA6D | Ordinal: 2670
        void getVertFinsLimitCoeff(void);

    // RVA: 0xB0B | Ordinal: 2828
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xB6A | Ordinal: 2923
        void readInputData(double);

    // RVA: 0xBDA | Ordinal: 3035
        void registerStateData(void);

    // RVA: 0xC91 | Ordinal: 3218
        void setApStage(int);

    // RVA: 0xD17 | Ordinal: 3352
        void setStPitch(class Math::Vector<3, double> const &);

    // RVA: 0xD42 | Ordinal: 3395
        void simpleCalcCtrlVal(void);

    // RVA: 0xD43 | Ordinal: 3396
        void simpleCalcCtrlXVal(void);

    // RVA: 0xD9E | Ordinal: 3487
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMARTAUTOPILOT_HPP
