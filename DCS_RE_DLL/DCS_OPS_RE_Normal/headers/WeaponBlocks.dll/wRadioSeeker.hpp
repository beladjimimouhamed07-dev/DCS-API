#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wRadioSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadioSeeker
{
public:

    // RVA: 0x4E1 | Ordinal: 1250
        void __getInputPorts(void);

    // RVA: 0x57A | Ordinal: 1403
        void __getOutputPorts(void);

    // RVA: 0x5B2 | Ordinal: 1459
        void areTargetRdrEmissionsDetectable(class MovingObject *);

    // RVA: 0x5B5 | Ordinal: 1462
        void cPositionFromMissilePosRot(void);

    // RVA: 0x5FA | Ordinal: 1531
        void calcLOS(void);

    // RVA: 0x602 | Ordinal: 1539
        void calcLockedPointLOS(void);

    // RVA: 0x60E | Ordinal: 1551
        void calcOBA(void);

    // RVA: 0x811 | Ordinal: 2066
        void getDesc_(void);

    // RVA: 0x834 | Ordinal: 2101
        void getDistToTarget(void);

    // RVA: 0x8C5 | Ordinal: 2246
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x933 | Ordinal: 2356
        void getLockedPoint(void);

    // RVA: 0x934 | Ordinal: 2357
        void getMObjectPos(class MovingObject *);

    // RVA: 0x9C2 | Ordinal: 2499
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3C | Ordinal: 2621
        void getRadiationKValue(void);

    // RVA: 0xA88 | Ordinal: 2697
        void initBoresightError(class Math::Vector<3, double> const &);

    // RVA: 0xAC7 | Ordinal: 2760
        void init_randoms(int);

    // RVA: 0xAD2 | Ordinal: 2771
        void isIgnoredUnitType(class MovingObject *);

    // RVA: 0xADC | Ordinal: 2781
        void isSavedTargetType(class ed::basic_string<char> const &);

    // RVA: 0xAFE | Ordinal: 2815
        void isThisMissileRadiatedByTargetRadar(class MovingObject *);

    // RVA: 0xBE5 | Ordinal: 3046
        void registerStateData(void);

    // RVA: 0xC29 | Ordinal: 3114
        void saveTargetType(class ed::basic_string<char> const &);

    // RVA: 0xDAA | Ordinal: 3499
        void simulate(double);

    // RVA: 0xDE0 | Ordinal: 3553
        void squareToCircle(class Math::Vector<3, double> const &, class Math::Vector<3, double> &);

    // RVA: 0xE06 | Ordinal: 3591
        void tryFirstCoords(class MovingObject *);

    // RVA: 0x186 | Ordinal: 391
        void wRadioSeeker(class wRadioSeeker const &);

    // RVA: 0x187 | Ordinal: 392
        void wRadioSeeker(class wRadioSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x272 | Ordinal: 627
        void _wRadioSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WRADIOSEEKER_HPP
