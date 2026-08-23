#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x681 | Ordinal: 1666
        void checkTargetLosingBehavior(void);

    // RVA: 0x6B5 | Ordinal: 1718
        void convLoft(int);

    // RVA: 0x7B9 | Ordinal: 1978
        void getDesc_(void);

    // RVA: 0x86D | Ordinal: 2158
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96A | Ordinal: 2411
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB1A | Ordinal: 2843
        void onHeadingReached(bool);

    // RVA: 0xB57 | Ordinal: 2904
        void readInputData(double);

    // RVA: 0xBA4 | Ordinal: 2981
        void registerStateData(void);

    // RVA: 0xC30 | Ordinal: 3121
        void secondCheckDestruct(void);

    // RVA: 0xC49 | Ordinal: 3146
        void sendDestruct(void);

    // RVA: 0xC4B | Ordinal: 3148
        void sendFinalManeuver(void);

    // RVA: 0xC4D | Ordinal: 3150
        void sendHeadingCtrl(bool);

    // RVA: 0xC4F | Ordinal: 3152
        void sendMinGlideH(void);

    // RVA: 0xC56 | Ordinal: 3159
        void sendSensorOff(void);

    // RVA: 0xC58 | Ordinal: 3161
        void sendSensorOn(void);

    // RVA: 0xC5A | Ordinal: 3163
        void sendStraightNav(void);

    // RVA: 0xC5C | Ordinal: 3165
        void sendTgUpdJump(void);

    // RVA: 0xC87 | Ordinal: 3208
        void setAfterSimValues(void);

    // RVA: 0xCA3 | Ordinal: 3236
        void setDestructRange(double);

    // RVA: 0xCAE | Ordinal: 3247
        void setFinalManeuverRange(double);

    // RVA: 0xD10 | Ordinal: 3345
        void setSensorOnRange(double);

    // RVA: 0xD30 | Ordinal: 3377
        void setTgUpdJumpDist(double);

    // RVA: 0xD5D | Ordinal: 3422
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCBDISTCTRL_HPP
