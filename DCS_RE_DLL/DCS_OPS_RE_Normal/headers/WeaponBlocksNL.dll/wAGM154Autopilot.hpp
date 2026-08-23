#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x668 | Ordinal: 1641
        void checkFinsLimits(void);

    // RVA: 0x6F0 | Ordinal: 1777
        void doStartProc(int);

    // RVA: 0x6F3 | Ordinal: 1780
        void endJumpManeuver(void);

    // RVA: 0x79A | Ordinal: 1947
        void getDesc_(void);

    // RVA: 0x84D | Ordinal: 2126
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94A | Ordinal: 2379
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA5B | Ordinal: 2652
        void getVelCoeff(double);

    // RVA: 0xADA | Ordinal: 2779
        void jumpProcess(void);

    // RVA: 0xB25 | Ordinal: 2854
        void readInputData(void);

    // RVA: 0xB65 | Ordinal: 2918
        void registerStateData(void);

    // RVA: 0xC8B | Ordinal: 3212
        void setLoftMode(int);

    // RVA: 0xC8F | Ordinal: 3216
        void setLoftPower(int);

    // RVA: 0xC9F | Ordinal: 3232
        void setNoMinLim(bool);

    // RVA: 0xCD0 | Ordinal: 3281
        void setStartProc(int);

    // RVA: 0xCFE | Ordinal: 3327
        void simulate(double);

    // RVA: 0xDD2 | Ordinal: 3539
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAGM154AUTOPILOT_HPP
