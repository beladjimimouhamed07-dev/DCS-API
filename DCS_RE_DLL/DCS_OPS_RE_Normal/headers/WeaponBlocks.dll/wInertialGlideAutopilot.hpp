#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wInertialGlideAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wInertialGlideAutopilot
{
public:

    // RVA: 0x4CC | Ordinal: 1229
        void __getInputPorts(void);

    // RVA: 0x565 | Ordinal: 1382
        void __getOutputPorts(void);

    // RVA: 0x5F2 | Ordinal: 1523
        void calcHorCtrlVal(void);

    // RVA: 0x5FF | Ordinal: 1536
        void calcLOSwLOS(void);

    // RVA: 0x648 | Ordinal: 1609
        void calcVertCtrlVal(void);

    // RVA: 0x650 | Ordinal: 1617
        void calcXCtrlVal(void);

    // RVA: 0x66D | Ordinal: 1646
        void checkFinsLimits(void);

    // RVA: 0x6AF | Ordinal: 1712
        void convCtrlValByRoll(void);

    // RVA: 0x7FC | Ordinal: 2045
        void getDesc_(void);

    // RVA: 0x8B0 | Ordinal: 2225
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9AD | Ordinal: 2478
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC1 | Ordinal: 2754
        void init_randoms(int);

    // RVA: 0xB67 | Ordinal: 2920
        void readInputData(void);

    // RVA: 0xBD4 | Ordinal: 3029
        void registerStateData(void);

    // RVA: 0xCB6 | Ordinal: 3255
        void setGlideHeight(double);

    // RVA: 0xCBE | Ordinal: 3263
        void setHeadingCmd(double);

    // RVA: 0xCED | Ordinal: 3310
        void setPoint(class Math::Vector<3, double> const &);

    // RVA: 0xCF1 | Ordinal: 3314
        void setPreManeuverGlideHeight(bool);

    // RVA: 0xD15 | Ordinal: 3350
        void setSkimMode(bool);

    // RVA: 0xD97 | Ordinal: 3480
        void simulate(double);

    // RVA: 0x149 | Ordinal: 330
        void wInertialGlideAutopilot(class wInertialGlideAutopilot &&);

    // RVA: 0x14A | Ordinal: 331
        void wInertialGlideAutopilot(class wInertialGlideAutopilot const &);

    // RVA: 0x14B | Ordinal: 332
        void wInertialGlideAutopilot(class wInertialGlideAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x25C | Ordinal: 605
        void _wInertialGlideAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WINERTIALGLIDEAUTOPILOT_HPP
