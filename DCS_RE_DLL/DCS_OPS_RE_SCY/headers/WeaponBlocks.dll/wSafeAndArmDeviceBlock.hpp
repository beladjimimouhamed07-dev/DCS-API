#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6FE | Ordinal: 1791
        void execSchedFunc_(void);

    // RVA: 0x819 | Ordinal: 2074
        void getDesc_(void);

    // RVA: 0x8CD | Ordinal: 2254
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CA | Ordinal: 2507
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xACD | Ordinal: 2766
        void isArmingComplete(void);

    // RVA: 0xB34 | Ordinal: 2869
        void processFunctionConditions_(void);

    // RVA: 0xBED | Ordinal: 3054
        void registerStateData(void);

    // RVA: 0xC95 | Ordinal: 3222
        void setArmState_(int);

    // RVA: 0xCA5 | Ordinal: 3238
        void setDlyModeWrapper_(int);

    // RVA: 0xCA7 | Ordinal: 3240
        void setDlyValWrapper_(double);

    // RVA: 0xD04 | Ordinal: 3333
        void setSafetyState_(bool);

    // RVA: 0xD36 | Ordinal: 3383
        void setVaneReqRevs_(int);

    // RVA: 0xDB2 | Ordinal: 3507
        void simulate(double);

    // RVA: 0xDC7 | Ordinal: 3528
        void simulateArmingVane_(void);

    // RVA: 0x19B | Ordinal: 412
        void wSafeAndArmDeviceBlock(class wSafeAndArmDeviceBlock &&);

    // RVA: 0x19C | Ordinal: 413
        void wSafeAndArmDeviceBlock(class wSafeAndArmDeviceDesc const *, class wSimulationSystem *);

    // RVA: 0x27B | Ordinal: 636
        void _wSafeAndArmDeviceBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSAFEANDARMDEVICEBLOCK_HPP
