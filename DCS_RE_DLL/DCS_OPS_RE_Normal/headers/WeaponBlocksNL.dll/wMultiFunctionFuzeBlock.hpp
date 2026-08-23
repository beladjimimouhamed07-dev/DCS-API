#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6E3 | Ordinal: 1764
        void delayModeSettingWrapper_(int const &, class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> const &, double &);

    // RVA: 0x6E4 | Ordinal: 1765
        void delayValueSettingWrapper_(double const &, int const &, class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<double, class ed::allocator<double>> &, double &);

    // RVA: 0x707 | Ordinal: 1800
        void functionAtPosition_(class Math::Vector<3, double> const &);

    // RVA: 0x7FF | Ordinal: 2048
        void getDesc_(void);

    // RVA: 0x8B2 | Ordinal: 2227
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AF | Ordinal: 2480
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA1 | Ordinal: 2722
        void init_randoms(int);

    // RVA: 0xAB2 | Ordinal: 2739
        void isOwnerInstance_(void);

    // RVA: 0xAB3 | Ordinal: 2740
        void isProxyTargetDetected_(void);

    // RVA: 0xB05 | Ordinal: 2822
        void processArmConditions_(void);

    // RVA: 0xB07 | Ordinal: 2824
        void processFunctionConditions_(void);

    // RVA: 0xB10 | Ordinal: 2833
        void processProximityObjectsStatic_(class viObject *, class viSearch *, void *);

    // RVA: 0xB11 | Ordinal: 2834
        void processProximityObjects_(class viObject *, class viSearch *, void *);

    // RVA: 0xBB4 | Ordinal: 2997
        void registerStateData(void);

    // RVA: 0xC48 | Ordinal: 3145
        void setArmDelay_(double);

    // RVA: 0xC49 | Ordinal: 3146
        void setArmDlyMode_(int);

    // RVA: 0xC4A | Ordinal: 3147
        void setArmState_(bool);

    // RVA: 0xC66 | Ordinal: 3175
        void setFuncAlt_(double);

    // RVA: 0xC68 | Ordinal: 3177
        void setFuncDelay_(double);

    // RVA: 0xC69 | Ordinal: 3178
        void setFuncDlyMode_(int);

    // RVA: 0xCA1 | Ordinal: 3234
        void setOutputObjID_(unsigned int const &);

    // RVA: 0xCA9 | Ordinal: 3242
        void setProxyRadius_(double);

    // RVA: 0xCAC | Ordinal: 3245
        void setProxyState_(bool);

    // RVA: 0xCB9 | Ordinal: 3258
        void setSafetyState_(bool);

    // RVA: 0xCC2 | Ordinal: 3267
        void setSelfDestructDelay_(double);

    // RVA: 0xCEA | Ordinal: 3307
        void setVaneReqRevs_(int);

    // RVA: 0xD57 | Ordinal: 3416
        void simulate(double);

    // RVA: 0xD7B | Ordinal: 3452
        void simulateArmingVane_(void);

    // RVA: 0xDB7 | Ordinal: 3512
        void triggerExternally_(bool);

    // RVA: 0xDCB | Ordinal: 3532
        void updateMaxFuncDelay_(void);

    // RVA: 0x16A | Ordinal: 363
        void wMultiFunctionFuzeBlock(class wMultiFunctionFuzeBlock const &);

    // RVA: 0x16B | Ordinal: 364
        void wMultiFunctionFuzeBlock(class wMultiFunctionFuzeBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x267 | Ordinal: 616
        void _wMultiFunctionFuzeBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMULTIFUNCTIONFUZEBLOCK_HPP
