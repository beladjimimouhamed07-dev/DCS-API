#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x66B | Ordinal: 1644
        void checkFinsLimits(void);

    // RVA: 0x6AB | Ordinal: 1708
        void convCtrlValByRoll(void);

    // RVA: 0x7F4 | Ordinal: 2037
        void getDesc_(void);

    // RVA: 0x8A7 | Ordinal: 2216
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A4 | Ordinal: 2469
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB3D | Ordinal: 2878
        void readInputData(void);

    // RVA: 0xBAA | Ordinal: 2987
        void registerStateData(void);

    // RVA: 0xC6C | Ordinal: 3181
        void setGlideHeight(double);

    // RVA: 0xC74 | Ordinal: 3189
        void setHeadingCmd(double);

    // RVA: 0xCA3 | Ordinal: 3236
        void setPoint(class Math::Vector<3, double> const &);

    // RVA: 0xCA7 | Ordinal: 3240
        void setPreManeuverGlideHeight(bool);

    // RVA: 0xCCA | Ordinal: 3275
        void setSkimMode(bool);

    // RVA: 0xD4C | Ordinal: 3405
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WINERTIALGLIDEAUTOPILOT_HPP
