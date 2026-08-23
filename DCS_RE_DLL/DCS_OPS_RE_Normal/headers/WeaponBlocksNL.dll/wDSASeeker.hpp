#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x712 | Ordinal: 1811
        void getAimError(void);

    // RVA: 0x7C5 | Ordinal: 1990
        void getDesc_(void);

    // RVA: 0x878 | Ordinal: 2169
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x93A | Ordinal: 2363
        void getObjectReflection(class MovingObject *);

    // RVA: 0x975 | Ordinal: 2422
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xABF | Ordinal: 2752
        void isTargetLinked(class MovingObject *);

    // RVA: 0xAC6 | Ordinal: 2759
        void isTargetLocked(unsigned int);

    // RVA: 0xAC7 | Ordinal: 2760
        void isTargetLocked(class MovingObject *, bool);

    // RVA: 0xB32 | Ordinal: 2867
        void readInputData(void);

    // RVA: 0xB83 | Ordinal: 2948
        void registerStateData(void);

    // RVA: 0xBF3 | Ordinal: 3060
        void seekerBlockProc(void);

    // RVA: 0xC0D | Ordinal: 3086
        void sendNoTarget(void);

    // RVA: 0xC1B | Ordinal: 3100
        void sendVisData(void);

    // RVA: 0xC77 | Ordinal: 3192
        void setHojCmd(bool);

    // RVA: 0xD25 | Ordinal: 3366
        void simulate(double);

    // RVA: 0xA4 | Ordinal: 165
        void wDSASeeker(class wDSASeeker const &);

    // RVA: 0xA5 | Ordinal: 166
        void wDSASeeker(class wDSASeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21D | Ordinal: 542
        void _wDSASeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDSASEEKER_HPP
