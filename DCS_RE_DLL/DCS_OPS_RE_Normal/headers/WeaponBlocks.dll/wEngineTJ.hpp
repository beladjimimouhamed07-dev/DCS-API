#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wEngineTJ
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineTJ
{
public:

    // RVA: 0x4B2 | Ordinal: 1203
        void __getInputPorts(void);

    // RVA: 0x54B | Ordinal: 1356
        void __getOutputPorts(void);

    // RVA: 0x6A0 | Ordinal: 1697
        void controlEffects(void);

    // RVA: 0x720 | Ordinal: 1825
        void getBlackSmokeOpacity(void);

    // RVA: 0x7E2 | Ordinal: 2019
        void getDesc_(void);

    // RVA: 0x848 | Ordinal: 2121
        void getHotAirParam(void);

    // RVA: 0x896 | Ordinal: 2199
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x993 | Ordinal: 2452
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA49 | Ordinal: 2634
        void getRelativePowerVal(void);

    // RVA: 0xB14 | Ordinal: 2837
        void moveStartTailsToX(double);

    // RVA: 0xB27 | Ordinal: 2856
        void procFlightEffect(double);

    // RVA: 0xB2A | Ordinal: 2859
        void procStartBurnEffect(double);

    // RVA: 0xBC0 | Ordinal: 3009
        void registerStateData(void);

    // RVA: 0xC22 | Ordinal: 3107
        void saveDelTails(void);

    // RVA: 0xD83 | Ordinal: 3460
        void simulate(double);

    // RVA: 0xDE7 | Ordinal: 3560
        void switchState_(int);

    // RVA: 0xE07 | Ordinal: 3592
        void tryToCreateBlackSmoke(void);

    // RVA: 0xE08 | Ordinal: 3593
        void tryToCreateHotAir(void);

    // RVA: 0xE09 | Ordinal: 3594
        void tryToCreateInversionTails(double);

    // RVA: 0xE0A | Ordinal: 3595
        void tryToCreateSmokeTails(double, double, double, bool);

    // RVA: 0xEA | Ordinal: 235
        void wEngineTJ(class wEngineTJ const &);

    // RVA: 0xEB | Ordinal: 236
        void wEngineTJ(class wEngineTJDescriptor const *, class wSimulationSystem *);

    // RVA: 0x237 | Ordinal: 568
        void _wEngineTJ(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINETJ_HPP
