#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDLaserSpotSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDLaserSpotSeeker
{
public:

    // RVA: 0x49B | Ordinal: 1180
        void __getInputPorts(void);

    // RVA: 0x534 | Ordinal: 1333
        void __getOutputPorts(void);

    // RVA: 0x60B | Ordinal: 1548
        void calcOBA(void);

    // RVA: 0x61C | Ordinal: 1565
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x6E7 | Ordinal: 1768
        void discriminate(double);

    // RVA: 0x7C3 | Ordinal: 1988
        void getDesc_(void);

    // RVA: 0x876 | Ordinal: 2167
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x973 | Ordinal: 2420
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA4D | Ordinal: 2638
        void getTargetLOS(class Math::Vector<3, double> &);

    // RVA: 0xA63 | Ordinal: 2660
        void get_code(void);

    // RVA: 0xAC4 | Ordinal: 2757
        void isTargetLocked(void);

    // RVA: 0xB30 | Ordinal: 2865
        void readInputData(void);

    // RVA: 0xB81 | Ordinal: 2946
        void registerStateData(void);

    // RVA: 0xBE3 | Ordinal: 3044
        void saveDiffVals(void);

    // RVA: 0xBF1 | Ordinal: 3058
        void seekerBlockProc(void);

    // RVA: 0xCBC | Ordinal: 3261
        void setSeekerDelay(double);

    // RVA: 0xD23 | Ordinal: 3364
        void simulate(double);

    // RVA: 0xDC5 | Ordinal: 3526
        void update(double);

    // RVA: 0x9E | Ordinal: 159
        void wDLaserSpotSeeker(class wDLaserSpotSeeker &&);

    // RVA: 0x9F | Ordinal: 160
        void wDLaserSpotSeeker(class wDLaserSpotSeeker const &);

    // RVA: 0xA0 | Ordinal: 161
        void wDLaserSpotSeeker(class wDLaserSpotSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21B | Ordinal: 540
        void _wDLaserSpotSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDLASERSPOTSEEKER_HPP
