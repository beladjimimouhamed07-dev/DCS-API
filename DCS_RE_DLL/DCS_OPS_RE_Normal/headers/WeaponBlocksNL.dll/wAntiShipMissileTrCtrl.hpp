#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6B0 | Ordinal: 1713
        void convLoft(int);

    // RVA: 0x701 | Ordinal: 1794
        void fixRangeData(bool);

    // RVA: 0x7AB | Ordinal: 1964
        void getDesc_(void);

    // RVA: 0x85E | Ordinal: 2143
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95B | Ordinal: 2396
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB76 | Ordinal: 2935
        void registerStateData(void);

    // RVA: 0xC04 | Ordinal: 3077
        void sendDestruct(void);

    // RVA: 0xC06 | Ordinal: 3079
        void sendFinalManeuver(void);

    // RVA: 0xC0A | Ordinal: 3083
        void sendMinGlideH(void);

    // RVA: 0xC13 | Ordinal: 3092
        void sendSensorOn(void);

    // RVA: 0xC15 | Ordinal: 3094
        void sendStraightNav(void);

    // RVA: 0xC17 | Ordinal: 3096
        void sendTgUpdJump(void);

    // RVA: 0xC58 | Ordinal: 3161
        void setDestructRange(double);

    // RVA: 0xC63 | Ordinal: 3172
        void setFinalManeuverRange(double);

    // RVA: 0xCC5 | Ordinal: 3270
        void setSensorOnRange(double);

    // RVA: 0xD0E | Ordinal: 3343
        void simulate(double);

    // RVA: 0xDD6 | Ordinal: 3543
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WANTISHIPMISSILETRCTRL_HPP
