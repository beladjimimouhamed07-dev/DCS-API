#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x674 | Ordinal: 1653
        void checkIsBlinded(void);

    // RVA: 0x67B | Ordinal: 1660
        void checkSearchProgramCondition(void);

    // RVA: 0x683 | Ordinal: 1668
        void checkTargetType(class MovingObject *);

    // RVA: 0x685 | Ordinal: 1670
        void checkWorkMode(void);

    // RVA: 0x711 | Ordinal: 1810
        void genUpdatePeriod(void);

    // RVA: 0x786 | Ordinal: 1927
        void getCurrentTargetCoords(class Math::Vector<3, double> *);

    // RVA: 0x7CC | Ordinal: 1997
        void getDesc_(void);

    // RVA: 0x833 | Ordinal: 2100
        void getDistToCurrentTarget(void);

    // RVA: 0x880 | Ordinal: 2177
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x914 | Ordinal: 2325
        void getIntermTargetPoint(void);

    // RVA: 0x942 | Ordinal: 2371
        void getNewLockedPos(void);

    // RVA: 0x97D | Ordinal: 2430
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA39 | Ordinal: 2618
        void getRadValue(class MovingObject *);

    // RVA: 0xA57 | Ordinal: 2648
        void getStoredPriority(class MovingObject *);

    // RVA: 0xA7D | Ordinal: 2686
        void headingLessThan(double);

    // RVA: 0xA7E | Ordinal: 2687
        void inRadDist(void);

    // RVA: 0xAD1 | Ordinal: 2770
        void isIgnoredUnitType(class MovingObject *);

    // RVA: 0xADB | Ordinal: 2780
        void isRadByCurrentTarget(void);

    // RVA: 0xAEC | Ordinal: 2797
        void isTargetLocked(void);

    // RVA: 0xAFD | Ordinal: 2814
        void isThisMissileRadiatedByTargetRadar(class MovingObject *);

    // RVA: 0xB5B | Ordinal: 2908
        void readInputData(void);

    // RVA: 0xB7B | Ordinal: 2940
        void receiveFOV(double);

    // RVA: 0xB7C | Ordinal: 2941
        void receiveFootprint(int);

    // RVA: 0xB7D | Ordinal: 2942
        void receiveGSMode(int);

    // RVA: 0xB7E | Ordinal: 2943
        void receiveGlide(bool);

    // RVA: 0xB7F | Ordinal: 2944
        void receiveSearchDelay(double);

    // RVA: 0xB80 | Ordinal: 2945
        void receiveSearchDelayMode(int);

    // RVA: 0xB81 | Ordinal: 2946
        void receiveTargetNum(int);

    // RVA: 0xB82 | Ordinal: 2947
        void receiveTargetTypeLvl(int);

    // RVA: 0xB83 | Ordinal: 2948
        void receiveTargetTypeValue(int);

    // RVA: 0xBAC | Ordinal: 2989
        void registerStateData(void);

    // RVA: 0xC33 | Ordinal: 3124
        void seekerBlockProc(void);

    // RVA: 0xC3D | Ordinal: 3134
        void selectTarget(unsigned int *, class Math::Vector<3, double> *);

    // RVA: 0xC3E | Ordinal: 3135
        void selectTargetRadarPoint(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *);

    // RVA: 0xC6C | Ordinal: 3181
        void sensTarget(unsigned int *, class Math::Vector<3, double> *);

    // RVA: 0xC6D | Ordinal: 3182
        void sensView(struct radTargetsInFOV *);

    // RVA: 0xCBC | Ordinal: 3261
        void setHeadingCmd(double);

    // RVA: 0xD0D | Ordinal: 3342
        void setSensorOn(void);

    // RVA: 0xD29 | Ordinal: 3370
        void setTargetInfoNullExceptType(void);

    // RVA: 0xD6F | Ordinal: 3440
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDRADIOSEEKER_HPP
