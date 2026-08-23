#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x677 | Ordinal: 1656
        void checkLaunchPoint(void);

    // RVA: 0x67F | Ordinal: 1664
        void checkTargetPoint(void);

    // RVA: 0x715 | Ordinal: 1814
        void getAltHold(double);

    // RVA: 0x716 | Ordinal: 1815
        void getAltLoop(double);

    // RVA: 0x717 | Ordinal: 1816
        void getAutoTerminalT(void);

    // RVA: 0x798 | Ordinal: 1945
        void getDesc_(void);

    // RVA: 0x82A | Ordinal: 2091
        void getDeviationLoop(double);

    // RVA: 0x82D | Ordinal: 2094
        void getDriftLoop(double);

    // RVA: 0x839 | Ordinal: 2106
        void getHeadingCommand(double);

    // RVA: 0x84B | Ordinal: 2124
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x940 | Ordinal: 2369
        void getOptGuidance(void);

    // RVA: 0x93F | Ordinal: 2368
        void getOptGuidance2(void);

    // RVA: 0x948 | Ordinal: 2377
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2F | Ordinal: 2608
        void getRadAlt(void);

    // RVA: 0xA4C | Ordinal: 2637
        void getTTG(void);

    // RVA: 0xA5A | Ordinal: 2651
        void getVVLoop(double);

    // RVA: 0xA78 | Ordinal: 2681
        void initForceGPSAlt(bool);

    // RVA: 0xA79 | Ordinal: 2682
        void initForceRadAlt(bool);

    // RVA: 0xA7C | Ordinal: 2685
        void initHeadingOffset(double);

    // RVA: 0xA7D | Ordinal: 2686
        void initImpactMode(int);

    // RVA: 0xA7E | Ordinal: 2687
        void initIsDirect(bool);

    // RVA: 0xA7F | Ordinal: 2688
        void initLaunchPoint(class Math::Vector<3, double> const &);

    // RVA: 0xA80 | Ordinal: 2689
        void initLaunchPointData(struct INS::AlignmentDataMessage<3, double> *);

    // RVA: 0xA81 | Ordinal: 2690
        void initLaunchRot(struct Math::Rotation3<double> const &);

    // RVA: 0xA82 | Ordinal: 2691
        void initLaunchVel(class Math::Vector<3, double> const &);

    // RVA: 0xA86 | Ordinal: 2695
        void initOpMode(int);

    // RVA: 0xA8D | Ordinal: 2702
        void initSetAltitude(double);

    // RVA: 0xA90 | Ordinal: 2705
        void initTargetData(struct INS::TargetingDataMessage<3, double> *);

    // RVA: 0xA93 | Ordinal: 2708
        void initTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xAEB | Ordinal: 2796
        void midcourseGuidance(void);

    // RVA: 0xB63 | Ordinal: 2916
        void registerStateData(void);

    // RVA: 0xC02 | Ordinal: 3075
        void sendData(void);

    // RVA: 0xC25 | Ordinal: 3110
        void separationGuidance(void);

    // RVA: 0xCFC | Ordinal: 3325
        void simulate(double);

    // RVA: 0xDAA | Ordinal: 3499
        void terminalGuidance(void);

    // RVA: 0xDB5 | Ordinal: 3510
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAGM130CONTROLLER_HPP
