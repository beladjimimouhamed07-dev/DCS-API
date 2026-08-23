#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAntiShipMissileTrCtrl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAntiShipMissileTrCtrl
{
public:

    // RVA: 0x483 | Ordinal: 1156
        void __getInputPorts(void);

    // RVA: 0x51C | Ordinal: 1309
        void __getOutputPorts(void);

    // RVA: 0x6B4 | Ordinal: 1717
        void convLoft(int);

    // RVA: 0x707 | Ordinal: 1800
        void fixRangeData(bool);

    // RVA: 0x7B3 | Ordinal: 1972
        void getDesc_(void);

    // RVA: 0x867 | Ordinal: 2152
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x964 | Ordinal: 2405
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBA0 | Ordinal: 2977
        void registerStateData(void);

    // RVA: 0xC48 | Ordinal: 3145
        void sendDestruct(void);

    // RVA: 0xC4A | Ordinal: 3147
        void sendFinalManeuver(void);

    // RVA: 0xC4E | Ordinal: 3151
        void sendMinGlideH(void);

    // RVA: 0xC57 | Ordinal: 3160
        void sendSensorOn(void);

    // RVA: 0xC59 | Ordinal: 3162
        void sendStraightNav(void);

    // RVA: 0xC5B | Ordinal: 3164
        void sendTgUpdJump(void);

    // RVA: 0xCA2 | Ordinal: 3235
        void setDestructRange(double);

    // RVA: 0xCAD | Ordinal: 3246
        void setFinalManeuverRange(double);

    // RVA: 0xD0F | Ordinal: 3344
        void setSensorOnRange(double);

    // RVA: 0xD59 | Ordinal: 3418
        void simulate(double);

    // RVA: 0xE25 | Ordinal: 3622
        void updateRangeData(void);

    // RVA: 0x56 | Ordinal: 87
        void wAntiShipMissileTrCtrl(class wAntiShipMissileTrCtrl &&);

    // RVA: 0x57 | Ordinal: 88
        void wAntiShipMissileTrCtrl(class wAntiShipMissileTrCtrl const &);

    // RVA: 0x58 | Ordinal: 89
        void wAntiShipMissileTrCtrl(class wAntiShipMissileTrCtrlDescriptor const *, class wSimulationSystem *);

    // RVA: 0x200 | Ordinal: 513
        void _wAntiShipMissileTrCtrl(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WANTISHIPMISSILETRCTRL_HPP
