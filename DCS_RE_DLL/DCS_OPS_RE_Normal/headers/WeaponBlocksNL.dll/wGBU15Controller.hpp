#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7E4 | Ordinal: 2021
        void getDesc_(void);

    // RVA: 0x897 | Ordinal: 2200
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x994 | Ordinal: 2453
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA26 | Ordinal: 2599
        void getPitchHold(double);

    // RVA: 0xA27 | Ordinal: 2600
        void getPitchPN(void);

    // RVA: 0xA57 | Ordinal: 2648
        void getTransitionYawGuidance(void);

    // RVA: 0xA62 | Ordinal: 2659
        void getYawPN(double);

    // RVA: 0xA85 | Ordinal: 2694
        void initNewState(int);

    // RVA: 0xA89 | Ordinal: 2698
        void initPermitAutoTerminal(bool);

    // RVA: 0xA91 | Ordinal: 2706
        void initTargetLocked(bool);

    // RVA: 0xAEC | Ordinal: 2797
        void midcourseGuidance(void);

    // RVA: 0xB9C | Ordinal: 2973
        void registerStateData(void);

    // RVA: 0xC03 | Ordinal: 3076
        void sendData(void);

    // RVA: 0xC26 | Ordinal: 3111
        void separationGuidance(void);

    // RVA: 0xD3B | Ordinal: 3388
        void simulate(double);

    // RVA: 0xD97 | Ordinal: 3480
        void stateTransition(enum Gbu15State);

    // RVA: 0xDAB | Ordinal: 3500
        void terminalGuidance(void);

    // RVA: 0xDB6 | Ordinal: 3511
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGBU15CONTROLLER_HPP
