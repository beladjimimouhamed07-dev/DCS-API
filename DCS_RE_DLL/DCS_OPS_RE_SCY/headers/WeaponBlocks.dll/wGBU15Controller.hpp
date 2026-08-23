#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGBU15Controller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGBU15Controller
{
public:

    // RVA: 0x4BC | Ordinal: 1213
        void __getInputPorts(void);

    // RVA: 0x555 | Ordinal: 1366
        void __getOutputPorts(void);

    // RVA: 0x5B4 | Ordinal: 1461
        void autoTerminal(void);

    // RVA: 0x7EC | Ordinal: 2029
        void getDesc_(void);

    // RVA: 0x8A0 | Ordinal: 2209
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99D | Ordinal: 2462
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2F | Ordinal: 2608
        void getPitchHold(double);

    // RVA: 0xA30 | Ordinal: 2609
        void getPitchPN(void);

    // RVA: 0xA66 | Ordinal: 2663
        void getTransitionYawGuidance(void);

    // RVA: 0xA71 | Ordinal: 2674
        void getYawPN(double);

    // RVA: 0xA9B | Ordinal: 2716
        void initNewState(int);

    // RVA: 0xA9F | Ordinal: 2720
        void initPermitAutoTerminal(bool);

    // RVA: 0xAA7 | Ordinal: 2728
        void initTargetLocked(bool);

    // RVA: 0xB13 | Ordinal: 2836
        void midcourseGuidance(void);

    // RVA: 0xBC6 | Ordinal: 3015
        void registerStateData(void);

    // RVA: 0xC47 | Ordinal: 3144
        void sendData(void);

    // RVA: 0xC6F | Ordinal: 3184
        void separationGuidance(void);

    // RVA: 0xD86 | Ordinal: 3463
        void simulate(double);

    // RVA: 0xDE2 | Ordinal: 3555
        void stateTransition(enum Gbu15State);

    // RVA: 0xDF6 | Ordinal: 3575
        void terminalGuidance(void);

    // RVA: 0xE01 | Ordinal: 3586
        void transitionGuidance(void);

    // RVA: 0x11A | Ordinal: 283
        void wGBU15Controller(class wGBU15Controller &&);

    // RVA: 0x11B | Ordinal: 284
        void wGBU15Controller(class wGBU15Controller const &);

    // RVA: 0x11C | Ordinal: 285
        void wGBU15Controller(class wGBU15ControllerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x249 | Ordinal: 586
        void _wGBU15Controller(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGBU15CONTROLLER_HPP
