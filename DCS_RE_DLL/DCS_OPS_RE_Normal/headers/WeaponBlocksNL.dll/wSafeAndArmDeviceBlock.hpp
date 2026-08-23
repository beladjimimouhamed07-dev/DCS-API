#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSafeAndArmDeviceBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSafeAndArmDeviceBlock
{
public:

    // RVA: 0x4E9 | Ordinal: 1258
        void __getInputPorts(void);

    // RVA: 0x582 | Ordinal: 1411
        void __getOutputPorts(void);

    // RVA: 0x5AF | Ordinal: 1456
        void animateArmingVane_(double);

    // RVA: 0x5B1 | Ordinal: 1458
        void areAllDevicesArmed(void);

    // RVA: 0x6FA | Ordinal: 1787
        void execSchedFunc_(void);

    // RVA: 0x811 | Ordinal: 2066
        void getDesc_(void);

    // RVA: 0x8C4 | Ordinal: 2245
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C1 | Ordinal: 2498
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA7 | Ordinal: 2728
        void isArmingComplete(void);

    // RVA: 0xB0A | Ordinal: 2827
        void processFunctionConditions_(void);

    // RVA: 0xBC3 | Ordinal: 3012
        void registerStateData(void);

    // RVA: 0xC4B | Ordinal: 3148
        void setArmState_(int);

    // RVA: 0xC5B | Ordinal: 3164
        void setDlyModeWrapper_(int);

    // RVA: 0xC5D | Ordinal: 3166
        void setDlyValWrapper_(double);

    // RVA: 0xCBA | Ordinal: 3259
        void setSafetyState_(bool);

    // RVA: 0xCEB | Ordinal: 3308
        void setVaneReqRevs_(int);

    // RVA: 0xD67 | Ordinal: 3432
        void simulate(double);

    // RVA: 0xD7C | Ordinal: 3453
        void simulateArmingVane_(void);

    // RVA: 0x19B | Ordinal: 412
        void wSafeAndArmDeviceBlock(class wSafeAndArmDeviceBlock &&);

    // RVA: 0x19C | Ordinal: 413
        void wSafeAndArmDeviceBlock(class wSafeAndArmDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x27B | Ordinal: 636
        void _wSafeAndArmDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSAFEANDARMDEVICEBLOCK_HPP
