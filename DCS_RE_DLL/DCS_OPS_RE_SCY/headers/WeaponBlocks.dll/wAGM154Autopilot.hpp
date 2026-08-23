#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAGM154Autopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAGM154Autopilot
{
public:

    // RVA: 0x472 | Ordinal: 1139
        void __getInputPorts(void);

    // RVA: 0x50B | Ordinal: 1292
        void __getOutputPorts(void);

    // RVA: 0x5EF | Ordinal: 1520
        void calcHorCtrlVal(void);

    // RVA: 0x645 | Ordinal: 1606
        void calcVertCtrlVal(void);

    // RVA: 0x66A | Ordinal: 1643
        void checkFinsLimits(void);

    // RVA: 0x6F4 | Ordinal: 1781
        void doStartProc(int);

    // RVA: 0x6F7 | Ordinal: 1784
        void endJumpManeuver(void);

    // RVA: 0x7A2 | Ordinal: 1955
        void getDesc_(void);

    // RVA: 0x856 | Ordinal: 2135
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x953 | Ordinal: 2388
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA6A | Ordinal: 2667
        void getVelCoeff(double);

    // RVA: 0xB01 | Ordinal: 2818
        void jumpProcess(void);

    // RVA: 0xB4F | Ordinal: 2896
        void readInputData(void);

    // RVA: 0xB8F | Ordinal: 2960
        void registerStateData(void);

    // RVA: 0xCD5 | Ordinal: 3286
        void setLoftMode(int);

    // RVA: 0xCD9 | Ordinal: 3290
        void setLoftPower(int);

    // RVA: 0xCE9 | Ordinal: 3306
        void setNoMinLim(bool);

    // RVA: 0xD1B | Ordinal: 3356
        void setStartProc(int);

    // RVA: 0xD49 | Ordinal: 3402
        void simulate(double);

    // RVA: 0xE21 | Ordinal: 3618
        void updatePIDcoeffs(void);

    // RVA: 0x25 | Ordinal: 38
        void wAGM154Autopilot(class wAGM154Autopilot &&);

    // RVA: 0x26 | Ordinal: 39
        void wAGM154Autopilot(class wAGM154Autopilot const &);

    // RVA: 0x27 | Ordinal: 40
        void wAGM154Autopilot(class wAGM154AutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1EF | Ordinal: 496
        void _wAGM154Autopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAGM154AUTOPILOT_HPP
