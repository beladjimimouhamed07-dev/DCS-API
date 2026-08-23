#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wCBDistCtrl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCBDistCtrl
{
public:

    // RVA: 0x489 | Ordinal: 1162
        void __getInputPorts(void);

    // RVA: 0x522 | Ordinal: 1315
        void __getOutputPorts(void);

    // RVA: 0x60F | Ordinal: 1552
        void calcPathToTarget(void);

    // RVA: 0x67E | Ordinal: 1663
        void checkTargetLosingBehavior(void);

    // RVA: 0x6B1 | Ordinal: 1714
        void convLoft(int);

    // RVA: 0x7B1 | Ordinal: 1970
        void getDesc_(void);

    // RVA: 0x864 | Ordinal: 2149
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x961 | Ordinal: 2402
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAF2 | Ordinal: 2803
        void onHeadingReached(bool);

    // RVA: 0xB2D | Ordinal: 2862
        void readInputData(double);

    // RVA: 0xB7A | Ordinal: 2939
        void registerStateData(void);

    // RVA: 0xBEF | Ordinal: 3056
        void secondCheckDestruct(void);

    // RVA: 0xC05 | Ordinal: 3078
        void sendDestruct(void);

    // RVA: 0xC07 | Ordinal: 3080
        void sendFinalManeuver(void);

    // RVA: 0xC09 | Ordinal: 3082
        void sendHeadingCtrl(bool);

    // RVA: 0xC0B | Ordinal: 3084
        void sendMinGlideH(void);

    // RVA: 0xC12 | Ordinal: 3091
        void sendSensorOff(void);

    // RVA: 0xC14 | Ordinal: 3093
        void sendSensorOn(void);

    // RVA: 0xC16 | Ordinal: 3095
        void sendStraightNav(void);

    // RVA: 0xC18 | Ordinal: 3097
        void sendTgUpdJump(void);

    // RVA: 0xC3E | Ordinal: 3135
        void setAfterSimValues(void);

    // RVA: 0xC59 | Ordinal: 3162
        void setDestructRange(double);

    // RVA: 0xC64 | Ordinal: 3173
        void setFinalManeuverRange(double);

    // RVA: 0xCC6 | Ordinal: 3271
        void setSensorOnRange(double);

    // RVA: 0xCE5 | Ordinal: 3302
        void setTgUpdJumpDist(double);

    // RVA: 0xD12 | Ordinal: 3347
        void simulate(double);

    // RVA: 0x69 | Ordinal: 106
        void wCBDistCtrl(class wCBDistCtrl &&);

    // RVA: 0x6A | Ordinal: 107
        void wCBDistCtrl(class wCBDistCtrl const &);

    // RVA: 0x6B | Ordinal: 108
        void wCBDistCtrl(class wCBDistCtrlDescriptor const *, class wSimulationSystem *);

    // RVA: 0x207 | Ordinal: 520
        void _wCBDistCtrl(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCBDISTCTRL_HPP
