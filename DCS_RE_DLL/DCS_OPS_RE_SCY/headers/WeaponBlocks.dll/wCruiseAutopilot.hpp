#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x672 | Ordinal: 1651
        void checkFrontVis(double);

    // RVA: 0x7C6 | Ordinal: 1991
        void getDesc_(void);

    // RVA: 0x87A | Ordinal: 2171
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x977 | Ordinal: 2424
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA40 | Ordinal: 2625
        void getRealCtrlHeight(void);

    // RVA: 0xAB5 | Ordinal: 2742
        void init_randoms(int);

    // RVA: 0xB58 | Ordinal: 2905
        void readInputData(void);

    // RVA: 0xBA6 | Ordinal: 2983
        void registerStateData(void);

    // RVA: 0xC2E | Ordinal: 3119
        void searchForObj(void);

    // RVA: 0xCC6 | Ordinal: 3271
        void setInertialError(void);

    // RVA: 0xD11 | Ordinal: 3346
        void setSensorPoints(class osg::Vec3d, class osg::Vec3d);

    // RVA: 0xD39 | Ordinal: 3386
        void setYDirection(void);

    // RVA: 0xD3A | Ordinal: 3387
        void set_inp_inertial_error(class Math::Vector<3, double> const &);

    // RVA: 0xD69 | Ordinal: 3434
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCRUISEAUTOPILOT_HPP
