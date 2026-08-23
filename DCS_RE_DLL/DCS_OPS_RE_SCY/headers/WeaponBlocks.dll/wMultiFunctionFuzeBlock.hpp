#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wMultiFunctionFuzeBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMultiFunctionFuzeBlock
{
public:

    // RVA: 0x4D7 | Ordinal: 1240
        void __getInputPorts(void);

    // RVA: 0x570 | Ordinal: 1393
        void __getOutputPorts(void);

    // RVA: 0x5AE | Ordinal: 1455
        void animateArmingVane_(double const &);

    // RVA: 0x6E7 | Ordinal: 1768
        void delayModeSettingWrapper_(int const &, class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> const &, double &);

    // RVA: 0x6E8 | Ordinal: 1769
        void delayValueSettingWrapper_(double const &, int const &, class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> &, double &);

    // RVA: 0x70D | Ordinal: 1806
        void functionAtPosition_(class Math::Vector<3, double> const &);

    // RVA: 0x807 | Ordinal: 2056
        void getDesc_(void);

    // RVA: 0x8BB | Ordinal: 2236
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B8 | Ordinal: 2489
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC4 | Ordinal: 2757
        void init_randoms(int);

    // RVA: 0xAD8 | Ordinal: 2777
        void isOwnerInstance_(void);

    // RVA: 0xAD9 | Ordinal: 2778
        void isProxyTargetDetected_(void);

    // RVA: 0xB2F | Ordinal: 2864
        void processArmConditions_(void);

    // RVA: 0xB31 | Ordinal: 2866
        void processFunctionConditions_(void);

    // RVA: 0xB3A | Ordinal: 2875
        void processProximityObjectsStatic_(class viObject *, class viSearch *, void *);

    // RVA: 0xB3B | Ordinal: 2876
        void processProximityObjects_(class viObject *, class viSearch *, void *);

    // RVA: 0xBDE | Ordinal: 3039
        void registerStateData(void);

    // RVA: 0xC92 | Ordinal: 3219
        void setArmDelay_(double);

    // RVA: 0xC93 | Ordinal: 3220
        void setArmDlyMode_(int);

    // RVA: 0xC94 | Ordinal: 3221
        void setArmState_(bool);

    // RVA: 0xCB0 | Ordinal: 3249
        void setFuncAlt_(double);

    // RVA: 0xCB2 | Ordinal: 3251
        void setFuncDelay_(double);

    // RVA: 0xCB3 | Ordinal: 3252
        void setFuncDlyMode_(int);

    // RVA: 0xCEB | Ordinal: 3308
        void setOutputObjID_(unsigned int const &);

    // RVA: 0xCF3 | Ordinal: 3316
        void setProxyRadius_(double);

    // RVA: 0xCF6 | Ordinal: 3319
        void setProxyState_(bool);

    // RVA: 0xD03 | Ordinal: 3332
        void setSafetyState_(bool);

    // RVA: 0xD0C | Ordinal: 3341
        void setSelfDestructDelay_(double);

    // RVA: 0xD35 | Ordinal: 3382
        void setVaneReqRevs_(int);

    // RVA: 0xDA2 | Ordinal: 3491
        void simulate(double);

    // RVA: 0xDC6 | Ordinal: 3527
        void simulateArmingVane_(void);

    // RVA: 0xE02 | Ordinal: 3587
        void triggerExternally_(bool);

    // RVA: 0xE1A | Ordinal: 3611
        void updateMaxFuncDelay_(void);

    // RVA: 0x16A | Ordinal: 363
        void wMultiFunctionFuzeBlock(class wMultiFunctionFuzeBlock const &);

    // RVA: 0x16B | Ordinal: 364
        void wMultiFunctionFuzeBlock(class wMultiFunctionFuzeBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x267 | Ordinal: 616
        void _wMultiFunctionFuzeBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMULTIFUNCTIONFUZEBLOCK_HPP
