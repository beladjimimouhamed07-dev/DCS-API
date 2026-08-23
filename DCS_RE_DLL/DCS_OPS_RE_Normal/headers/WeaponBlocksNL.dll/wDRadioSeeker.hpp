#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDRadioSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDRadioSeeker
{
public:

    // RVA: 0x49C | Ordinal: 1181
        void __getInputPorts(void);

    // RVA: 0x535 | Ordinal: 1334
        void __getOutputPorts(void);

    // RVA: 0x5CF | Ordinal: 1488
        void calcCurrentTgLOS(void);

    // RVA: 0x60C | Ordinal: 1549
        void calcOBA(void);

    // RVA: 0x61D | Ordinal: 1566
        void calcPointLos(class Math::Vector<3, double>);

    // RVA: 0x671 | Ordinal: 1650
        void checkIsBlinded(void);

    // RVA: 0x678 | Ordinal: 1657
        void checkSearchProgramCondition(void);

    // RVA: 0x680 | Ordinal: 1665
        void checkTargetType(class MovingObject *);

    // RVA: 0x682 | Ordinal: 1667
        void checkWorkMode(void);

    // RVA: 0x77E | Ordinal: 1919
        void getCurrentTargetCoords(class Math::Vector<3, double> *);

    // RVA: 0x7C4 | Ordinal: 1989
        void getDesc_(void);

    // RVA: 0x82B | Ordinal: 2092
        void getDistToCurrentTarget(void);

    // RVA: 0x877 | Ordinal: 2168
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x90B | Ordinal: 2316
        void getIntermTargetPoint(void);

    // RVA: 0x939 | Ordinal: 2362
        void getNewLockedPos(void);

    // RVA: 0x974 | Ordinal: 2421
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA30 | Ordinal: 2609
        void getRadValue(class MovingObject *);

    // RVA: 0xA48 | Ordinal: 2633
        void getStoredPriority(class MovingObject *);

    // RVA: 0xA6E | Ordinal: 2671
        void headingLessThan(double);

    // RVA: 0xA6F | Ordinal: 2672
        void inRadDist(void);

    // RVA: 0xAAB | Ordinal: 2732
        void isIgnoredUnitType(class MovingObject *);

    // RVA: 0xAC5 | Ordinal: 2758
        void isTargetLocked(void);

    // RVA: 0xAD6 | Ordinal: 2775
        void isThisMissileRadiatedByTargetRadar(class MovingObject *);

    // RVA: 0xB31 | Ordinal: 2866
        void readInputData(void);

    // RVA: 0xB51 | Ordinal: 2898
        void receiveFOV(double);

    // RVA: 0xB52 | Ordinal: 2899
        void receiveFootprint(int);

    // RVA: 0xB53 | Ordinal: 2900
        void receiveGSMode(int);

    // RVA: 0xB54 | Ordinal: 2901
        void receiveGlide(bool);

    // RVA: 0xB55 | Ordinal: 2902
        void receiveSearchDelay(double);

    // RVA: 0xB56 | Ordinal: 2903
        void receiveSearchDelayMode(int);

    // RVA: 0xB57 | Ordinal: 2904
        void receiveTargetNum(int);

    // RVA: 0xB58 | Ordinal: 2905
        void receiveTargetTypeLvl(int);

    // RVA: 0xB59 | Ordinal: 2906
        void receiveTargetTypeValue(int);

    // RVA: 0xB82 | Ordinal: 2947
        void registerStateData(void);

    // RVA: 0xBF2 | Ordinal: 3059
        void seekerBlockProc(void);

    // RVA: 0xBFC | Ordinal: 3069
        void selectTargetRadarPoint(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *);

    // RVA: 0xC72 | Ordinal: 3187
        void setHeadingCmd(double);

    // RVA: 0xCC3 | Ordinal: 3268
        void setSensorOn(void);

    // RVA: 0xCDE | Ordinal: 3295
        void setTargetInfoNullExceptType(void);

    // RVA: 0xD24 | Ordinal: 3365
        void simulate(double);

    // RVA: 0xA1 | Ordinal: 162
        void wDRadioSeeker(class wDRadioSeeker &&);

    // RVA: 0xA2 | Ordinal: 163
        void wDRadioSeeker(class wDRadioSeeker const &);

    // RVA: 0xA3 | Ordinal: 164
        void wDRadioSeeker(class wDRadioSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x21C | Ordinal: 541
        void _wDRadioSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDRADIOSEEKER_HPP
