#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6EB | Ordinal: 1772
        void discriminate(double);

    // RVA: 0x7CB | Ordinal: 1996
        void getDesc_(void);

    // RVA: 0x87F | Ordinal: 2176
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97C | Ordinal: 2429
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA5C | Ordinal: 2653
        void getTargetLOS(class Math::Vector<3, double> &);

    // RVA: 0xA72 | Ordinal: 2675
        void get_code(void);

    // RVA: 0xAEB | Ordinal: 2796
        void isTargetLocked(void);

    // RVA: 0xB5A | Ordinal: 2907
        void readInputData(void);

    // RVA: 0xBAB | Ordinal: 2988
        void registerStateData(void);

    // RVA: 0xC23 | Ordinal: 3108
        void saveDiffVals(void);

    // RVA: 0xC32 | Ordinal: 3123
        void seekerBlockProc(void);

    // RVA: 0xD06 | Ordinal: 3335
        void setSeekerDelay(double);

    // RVA: 0xD6E | Ordinal: 3439
        void simulate(double);

    // RVA: 0xE14 | Ordinal: 3605
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDLASERSPOTSEEKER_HPP
