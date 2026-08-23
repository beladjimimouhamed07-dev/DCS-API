#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x713 | Ordinal: 1812
        void getAimError(void);

    // RVA: 0x7C7 | Ordinal: 1992
        void getDesc_(void);

    // RVA: 0x87A | Ordinal: 2171
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x977 | Ordinal: 2424
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC8 | Ordinal: 2761
        void isTargetLocked(void);

    // RVA: 0xB33 | Ordinal: 2868
        void readInputData(void);

    // RVA: 0xB85 | Ordinal: 2950
        void registerStateData(void);

    // RVA: 0xBE4 | Ordinal: 3045
        void saveDiffVals(void);

    // RVA: 0xBF4 | Ordinal: 3061
        void seekerBlockProc(void);

    // RVA: 0xBFE | Ordinal: 3071
        void sendBlockIsOff(void);

    // RVA: 0xC0E | Ordinal: 3087
        void sendNoTarget(void);

    // RVA: 0xC1C | Ordinal: 3101
        void sendVisData(void);

    // RVA: 0xC62 | Ordinal: 3171
        void setErrVal(class Math::Vector<3, double> const &);

    // RVA: 0xCBD | Ordinal: 3262
        void setSeekerDelay(double);

    // RVA: 0xCBE | Ordinal: 3263
        void setSeekerOn(bool);

    // RVA: 0xCD2 | Ordinal: 3283
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xCDC | Ordinal: 3293
        void setSyncTargetPoint(class Math::Vector<3, double> const &);

    // RVA: 0xD27 | Ordinal: 3368
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDSEEKER_HPP
