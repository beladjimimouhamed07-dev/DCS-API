#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAGM130Controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAGM130Controller
{
public:

    // RVA: 0x470 | Ordinal: 1137
        void __getInputPorts(void);

    // RVA: 0x509 | Ordinal: 1290
        void __getOutputPorts(void);

    // RVA: 0x5B3 | Ordinal: 1460
        void autoTerminal(void);

    // RVA: 0x67A | Ordinal: 1659
        void checkLaunchPoint(void);

    // RVA: 0x682 | Ordinal: 1667
        void checkTargetPoint(void);

    // RVA: 0x71C | Ordinal: 1821
        void getAltHold(double);

    // RVA: 0x71D | Ordinal: 1822
        void getAltLoop(double);

    // RVA: 0x71E | Ordinal: 1823
        void getAutoTerminalT(void);

    // RVA: 0x7A0 | Ordinal: 1953
        void getDesc_(void);

    // RVA: 0x832 | Ordinal: 2099
        void getDeviationLoop(double);

    // RVA: 0x835 | Ordinal: 2102
        void getDriftLoop(double);

    // RVA: 0x841 | Ordinal: 2114
        void getHeadingCommand(double);

    // RVA: 0x854 | Ordinal: 2133
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x949 | Ordinal: 2378
        void getOptGuidance(void);

    // RVA: 0x948 | Ordinal: 2377
        void getOptGuidance2(void);

    // RVA: 0x951 | Ordinal: 2386
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA38 | Ordinal: 2617
        void getRadAlt(void);

    // RVA: 0xA5B | Ordinal: 2652
        void getTTG(void);

    // RVA: 0xA69 | Ordinal: 2666
        void getVVLoop(double);

    // RVA: 0xA8E | Ordinal: 2703
        void initForceGPSAlt(bool);

    // RVA: 0xA8F | Ordinal: 2704
        void initForceRadAlt(bool);

    // RVA: 0xA92 | Ordinal: 2707
        void initHeadingOffset(double);

    // RVA: 0xA93 | Ordinal: 2708
        void initImpactMode(int);

    // RVA: 0xA94 | Ordinal: 2709
        void initIsDirect(bool);

    // RVA: 0xA95 | Ordinal: 2710
        void initLaunchPoint(class Math::Vector<3, double> const &);

    // RVA: 0xA96 | Ordinal: 2711
        void initLaunchPointData(struct INS::AlignmentDataMessage<3, double> *);

    // RVA: 0xA97 | Ordinal: 2712
        void initLaunchRot(struct Math::Rotation3<double> const &);

    // RVA: 0xA98 | Ordinal: 2713
        void initLaunchVel(class Math::Vector<3, double> const &);

    // RVA: 0xA9C | Ordinal: 2717
        void initOpMode(int);

    // RVA: 0xAA3 | Ordinal: 2724
        void initSetAltitude(double);

    // RVA: 0xAA6 | Ordinal: 2727
        void initTargetData(struct INS::TargetingDataMessage<3, double> *);

    // RVA: 0xAA9 | Ordinal: 2730
        void initTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xB12 | Ordinal: 2835
        void midcourseGuidance(void);

    // RVA: 0xB8D | Ordinal: 2958
        void registerStateData(void);

    // RVA: 0xC46 | Ordinal: 3143
        void sendData(void);

    // RVA: 0xC6E | Ordinal: 3183
        void separationGuidance(void);

    // RVA: 0xD47 | Ordinal: 3400
        void simulate(double);

    // RVA: 0xDF5 | Ordinal: 3574
        void terminalGuidance(void);

    // RVA: 0xE00 | Ordinal: 3585
        void transitionGuidance(void);

    // RVA: 0x1F | Ordinal: 32
        void wAGM130Controller(class wAGM130Controller &&);

    // RVA: 0x20 | Ordinal: 33
        void wAGM130Controller(class wAGM130Controller const &);

    // RVA: 0x21 | Ordinal: 34
        void wAGM130Controller(class wAGM130ControllerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1ED | Ordinal: 494
        void _wAGM130Controller(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAGM130CONTROLLER_HPP
