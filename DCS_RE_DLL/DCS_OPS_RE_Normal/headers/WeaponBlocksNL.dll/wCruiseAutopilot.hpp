#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wCruiseAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCruiseAutopilot
{
public:

    // RVA: 0x496 | Ordinal: 1175
        void __getInputPorts(void);

    // RVA: 0x52F | Ordinal: 1328
        void __getOutputPorts(void);

    // RVA: 0x5A2 | Ordinal: 1443
        void add_mode(bool);

    // RVA: 0x5A8 | Ordinal: 1449
        void add_pos(class Math::Vector<3, double> const &);

    // RVA: 0x5AA | Ordinal: 1451
        void add_sensor_mode(bool);

    // RVA: 0x609 | Ordinal: 1546
        void calcNewYPathVec(void);

    // RVA: 0x60A | Ordinal: 1547
        void calcNewYPoint(void);

    // RVA: 0x652 | Ordinal: 1619
        void calcYErr(void);

    // RVA: 0x670 | Ordinal: 1649
        void checkFrontVis(double);

    // RVA: 0x7BE | Ordinal: 1983
        void getDesc_(void);

    // RVA: 0x871 | Ordinal: 2162
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96E | Ordinal: 2415
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA35 | Ordinal: 2614
        void getRealCtrlHeight(void);

    // RVA: 0xB2E | Ordinal: 2863
        void readInputData(void);

    // RVA: 0xB7C | Ordinal: 2941
        void registerStateData(void);

    // RVA: 0xC7C | Ordinal: 3197
        void setInertialError(void);

    // RVA: 0xCEE | Ordinal: 3311
        void setYDirection(void);

    // RVA: 0xCEF | Ordinal: 3312
        void set_inp_inertial_error(class Math::Vector<3, double> const &);

    // RVA: 0xD1E | Ordinal: 3359
        void simulate(double);

    // RVA: 0x90 | Ordinal: 145
        void wCruiseAutopilot(class wCruiseAutopilot &&);

    // RVA: 0x91 | Ordinal: 146
        void wCruiseAutopilot(class wCruiseAutopilot const &);

    // RVA: 0x92 | Ordinal: 147
        void wCruiseAutopilot(class wCruiseAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x216 | Ordinal: 535
        void _wCruiseAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCRUISEAUTOPILOT_HPP
