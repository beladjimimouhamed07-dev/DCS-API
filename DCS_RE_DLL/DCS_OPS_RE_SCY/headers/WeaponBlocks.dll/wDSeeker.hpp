#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wDSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDSeeker
{
public:

    // RVA: 0x49F | Ordinal: 1184
        void __getInputPorts(void);

    // RVA: 0x538 | Ordinal: 1337
        void __getOutputPorts(void);

    // RVA: 0x5B6 | Ordinal: 1463
        void cPositionFromPosRot(class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &);

    // RVA: 0x61F | Ordinal: 1568
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x71A | Ordinal: 1819
        void getAimError(void);

    // RVA: 0x7CF | Ordinal: 2000
        void getDesc_(void);

    // RVA: 0x883 | Ordinal: 2180
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x980 | Ordinal: 2433
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA4A | Ordinal: 2635
        void getRndEv01(void);

    // RVA: 0xA4C | Ordinal: 2637
        void getRndN(void);

    // RVA: 0xA4B | Ordinal: 2636
        void getRndN1m1(double);

    // RVA: 0xA82 | Ordinal: 2691
        void initAimError(void);

    // RVA: 0xAB8 | Ordinal: 2745
        void init_randoms(int);

    // RVA: 0xAEF | Ordinal: 2800
        void isTargetLocked(void);

    // RVA: 0xB5D | Ordinal: 2910
        void readInputData(void);

    // RVA: 0xBAF | Ordinal: 2992
        void registerStateData(void);

    // RVA: 0xC24 | Ordinal: 3109
        void saveDiffVals(void);

    // RVA: 0xC35 | Ordinal: 3126
        void seekerBlockProc(void);

    // RVA: 0xC42 | Ordinal: 3139
        void sendBlockIsOff(void);

    // RVA: 0xC52 | Ordinal: 3155
        void sendNoTarget(void);

    // RVA: 0xC60 | Ordinal: 3169
        void sendVisData(void);

    // RVA: 0xCAC | Ordinal: 3245
        void setErrVal(class Math::Vector<3, double> const &);

    // RVA: 0xD07 | Ordinal: 3336
        void setSeekerDelay(double);

    // RVA: 0xD08 | Ordinal: 3337
        void setSeekerOn(bool);

    // RVA: 0xD1D | Ordinal: 3358
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD27 | Ordinal: 3368
        void setSyncTargetPoint(class Math::Vector<3, double> const &);

    // RVA: 0xD72 | Ordinal: 3443
        void simulate(double);

    // RVA: 0xA9 | Ordinal: 170
        void wDSeeker(class wDSeeker &&);

    // RVA: 0xAA | Ordinal: 171
        void wDSeeker(class wDSeeker const &);

    // RVA: 0xAB | Ordinal: 172
        void wDSeeker(class wDSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21F | Ordinal: 544
        void _wDSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDSEEKER_HPP
