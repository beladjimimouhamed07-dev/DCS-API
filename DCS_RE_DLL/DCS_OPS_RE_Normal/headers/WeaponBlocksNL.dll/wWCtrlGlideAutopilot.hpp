#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x66F | Ordinal: 1648
        void checkFinsLimits(void);

    // RVA: 0x679 | Ordinal: 1658
        void checkSignalLimits(void);

    // RVA: 0x6B2 | Ordinal: 1715
        void convOutVec(void);

    // RVA: 0x6B4 | Ordinal: 1717
        void convSumError(void);

    // RVA: 0x828 | Ordinal: 2089
        void getDesc_(void);

    // RVA: 0x8DB | Ordinal: 2268
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x91E | Ordinal: 2335
        void getKpH(double);

    // RVA: 0x92E | Ordinal: 2351
        void getMaxClimbVal(double);

    // RVA: 0x930 | Ordinal: 2353
        void getMaxW(double);

    // RVA: 0x9D8 | Ordinal: 2521
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA0A | Ordinal: 2571
        void getPNError(void);

    // RVA: 0xA2E | Ordinal: 2607
        void getPursError(void);

    // RVA: 0xB4B | Ordinal: 2892
        void readInputData(void);

    // RVA: 0xB4F | Ordinal: 2896
        void readMinInputData(void);

    // RVA: 0xBD7 | Ordinal: 3032
        void registerStateData(void);

    // RVA: 0xC6D | Ordinal: 3182
        void setGlideHeight(double);

    // RVA: 0xC75 | Ordinal: 3190
        void setHeadingCmd(double);

    // RVA: 0xC76 | Ordinal: 3191
        void setHeadingPriorityActive(bool);

    // RVA: 0xC7D | Ordinal: 3198
        void setInertialError(void);

    // RVA: 0xC7F | Ordinal: 3200
        void setInpInertialError(class Math::Vector<3, double> const &);

    // RVA: 0xC80 | Ordinal: 3201
        void setInputTargetShift(class Math::Vector<3, double> const &);

    // RVA: 0xCA4 | Ordinal: 3237
        void setPoint(class Math::Vector<3, double> const &);

    // RVA: 0xCA8 | Ordinal: 3241
        void setPreManeuverGlideHeight(bool);

    // RVA: 0xCCB | Ordinal: 3276
        void setSkimMode(bool);

    // RVA: 0xD79 | Ordinal: 3450
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCTRLGLIDEAUTOPILOT_HPP
