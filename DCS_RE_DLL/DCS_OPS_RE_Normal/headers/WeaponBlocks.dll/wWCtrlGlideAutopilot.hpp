#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wWCtrlGlideAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCtrlGlideAutopilot
{
public:

    // RVA: 0x500 | Ordinal: 1281
        void __getInputPorts(void);

    // RVA: 0x599 | Ordinal: 1434
        void __getOutputPorts(void);

    // RVA: 0x5CA | Ordinal: 1483
        void calcCtrlVal(void);

    // RVA: 0x5CE | Ordinal: 1487
        void calcCtrlXVal(void);

    // RVA: 0x5F7 | Ordinal: 1528
        void calcHorError(void);

    // RVA: 0x5FB | Ordinal: 1532
        void calcLOSWLOS(void);

    // RVA: 0x635 | Ordinal: 1590
        void calcSumError(void);

    // RVA: 0x64D | Ordinal: 1614
        void calcVertError(void);

    // RVA: 0x671 | Ordinal: 1650
        void checkFinsLimits(void);

    // RVA: 0x673 | Ordinal: 1652
        void checkInertialErrorReady(void);

    // RVA: 0x67C | Ordinal: 1661
        void checkSignalLimits(void);

    // RVA: 0x6B6 | Ordinal: 1719
        void convOutVec(void);

    // RVA: 0x6B8 | Ordinal: 1721
        void convSumError(void);

    // RVA: 0x830 | Ordinal: 2097
        void getDesc_(void);

    // RVA: 0x8E4 | Ordinal: 2277
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x927 | Ordinal: 2344
        void getKpH(double);

    // RVA: 0x937 | Ordinal: 2360
        void getMaxClimbVal(double);

    // RVA: 0x939 | Ordinal: 2362
        void getMaxW(double);

    // RVA: 0x9E1 | Ordinal: 2530
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA13 | Ordinal: 2580
        void getPNError(void);

    // RVA: 0xA37 | Ordinal: 2616
        void getPursError(void);

    // RVA: 0xACB | Ordinal: 2764
        void init_randoms(int);

    // RVA: 0xB75 | Ordinal: 2934
        void readInputData(void);

    // RVA: 0xB79 | Ordinal: 2938
        void readMinInputData(void);

    // RVA: 0xC01 | Ordinal: 3074
        void registerStateData(void);

    // RVA: 0xCB7 | Ordinal: 3256
        void setGlideHeight(double);

    // RVA: 0xCBF | Ordinal: 3264
        void setHeadingCmd(double);

    // RVA: 0xCC0 | Ordinal: 3265
        void setHeadingPriorityActive(bool);

    // RVA: 0xCC7 | Ordinal: 3272
        void setInertialError(void);

    // RVA: 0xCC9 | Ordinal: 3274
        void setInpInertialError(class Math::Vector<3, double> const &);

    // RVA: 0xCCA | Ordinal: 3275
        void setInputTargetShift(class Math::Vector<3, double> const &);

    // RVA: 0xCEE | Ordinal: 3311
        void setPoint(class Math::Vector<3, double> const &);

    // RVA: 0xCF2 | Ordinal: 3315
        void setPreManeuverGlideHeight(bool);

    // RVA: 0xD16 | Ordinal: 3351
        void setSkimMode(bool);

    // RVA: 0xDC4 | Ordinal: 3525
        void simulate(double);

    // RVA: 0x1DC | Ordinal: 477
        void wWCtrlGlideAutopilot(class wWCtrlGlideAutopilot &&);

    // RVA: 0x1DD | Ordinal: 478
        void wWCtrlGlideAutopilot(class wWCtrlGlideAutopilot const &);

    // RVA: 0x1DE | Ordinal: 479
        void wWCtrlGlideAutopilot(class wWCtrlGlideAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x293 | Ordinal: 660
        void _wWCtrlGlideAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCTRLGLIDEAUTOPILOT_HPP
