#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wDSASeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDSASeeker
{
public:

    // RVA: 0x49D | Ordinal: 1182
        void __getInputPorts(void);

    // RVA: 0x536 | Ordinal: 1335
        void __getOutputPorts(void);

    // RVA: 0x5C5 | Ordinal: 1478
        void calcClutterSignal(double, double &, double &, double &);

    // RVA: 0x61E | Ordinal: 1567
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x621 | Ordinal: 1570
        void calcRCSVar(double);

    // RVA: 0x658 | Ordinal: 1625
        void changeAirTarget(void);

    // RVA: 0x719 | Ordinal: 1818
        void getAimError(void);

    // RVA: 0x7CD | Ordinal: 1998
        void getDesc_(void);

    // RVA: 0x881 | Ordinal: 2178
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x943 | Ordinal: 2372
        void getObjectReflection(class MovingObject *);

    // RVA: 0x97E | Ordinal: 2431
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA81 | Ordinal: 2690
        void initAimError(void);

    // RVA: 0xAE6 | Ordinal: 2791
        void isTargetLinked(class MovingObject *);

    // RVA: 0xAED | Ordinal: 2798
        void isTargetLocked(unsigned int);

    // RVA: 0xAEE | Ordinal: 2799
        void isTargetLocked(class MovingObject *, bool);

    // RVA: 0xB5C | Ordinal: 2909
        void readInputData(void);

    // RVA: 0xBAD | Ordinal: 2990
        void registerStateData(void);

    // RVA: 0xC34 | Ordinal: 3125
        void seekerBlockProc(void);

    // RVA: 0xC51 | Ordinal: 3154
        void sendNoTarget(void);

    // RVA: 0xC5F | Ordinal: 3168
        void sendVisData(void);

    // RVA: 0xC66 | Ordinal: 3175
        void sendWarningToTarget(void);

    // RVA: 0xC88 | Ordinal: 3209
        void setAirTarget(unsigned int);

    // RVA: 0xCC1 | Ordinal: 3266
        void setHojCmd(bool);

    // RVA: 0xD70 | Ordinal: 3441
        void simulate(double);

    // RVA: 0xA4 | Ordinal: 165
        void wDSASeeker(class wDSASeeker const &);

    // RVA: 0xA5 | Ordinal: 166
        void wDSASeeker(class wDSASeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21D | Ordinal: 542
        void _wDSASeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDSASEEKER_HPP
