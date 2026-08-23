#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x809 | Ordinal: 2058
        void getDesc_(void);

    // RVA: 0x82C | Ordinal: 2093
        void getDistToTarget(void);

    // RVA: 0x8BC | Ordinal: 2237
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x92A | Ordinal: 2347
        void getLockedPoint(void);

    // RVA: 0x92B | Ordinal: 2348
        void getMObjectPos(class MovingObject *);

    // RVA: 0x9B9 | Ordinal: 2490
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA33 | Ordinal: 2612
        void getRadiationKValue(void);

    // RVA: 0xA76 | Ordinal: 2679
        void initBoresightError(class Math::Vector<3, double> const &);

    // RVA: 0xAAC | Ordinal: 2733
        void isIgnoredUnitType(class MovingObject *);

    // RVA: 0xAB5 | Ordinal: 2742
        void isSavedTargetType(class ed::basic_string<char> const &);

    // RVA: 0xAD7 | Ordinal: 2776
        void isThisMissileRadiatedByTargetRadar(class MovingObject *);

    // RVA: 0xBBB | Ordinal: 3004
        void registerStateData(void);

    // RVA: 0xBE9 | Ordinal: 3050
        void saveTargetType(class ed::basic_string<char> const &);

    // RVA: 0xD5F | Ordinal: 3424
        void simulate(double);

    // RVA: 0xD95 | Ordinal: 3478
        void squareToCircle(class Math::Vector<3, double> const &, class Math::Vector<3, double> &);

    // RVA: 0xDBB | Ordinal: 3516
        void tryFirstCoords(class MovingObject *);

    // RVA: 0x186 | Ordinal: 391
        void wRadioSeeker(class wRadioSeeker const &);

    // RVA: 0x187 | Ordinal: 392
        void wRadioSeeker(class wRadioSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x272 | Ordinal: 627
        void _wRadioSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WRADIOSEEKER_HPP
