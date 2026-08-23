#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wRadarSensorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadarSensorBase
{
public:

    // RVA: 0x4E0 | Ordinal: 1249
        void __getInputPorts(void);

    // RVA: 0x579 | Ordinal: 1402
        void __getOutputPorts(void);

    // RVA: 0x605 | Ordinal: 1542
        void calcMLCSignal(struct wRadarSensorBase::ClutterSignal &);

    // RVA: 0x622 | Ordinal: 1571
        void calcRCSVar(double);

    // RVA: 0x637 | Ordinal: 1592
        void calcTargetSignal(struct wRadarSensorBase::TargetSignal &, unsigned int);

    // RVA: 0x6E9 | Ordinal: 1770
        void doFilterBankSearch(void);

    // RVA: 0x6EA | Ordinal: 1771
        void doFilterBankTracking(void);

    // RVA: 0x6EB | Ordinal: 1772
        void doIlluminatorTargetSearch(void);

    // RVA: 0x6EC | Ordinal: 1773
        void doRangeSearch(double);

    // RVA: 0x6ED | Ordinal: 1774
        void doRangeTracking(double);

    // RVA: 0x6EE | Ordinal: 1775
        void doSpeedGateSearch(void);

    // RVA: 0x6EF | Ordinal: 1776
        void doSpeedGateTracking(void);

    // RVA: 0x6F1 | Ordinal: 1778
        void doVelocitySearch(double);

    // RVA: 0x6F2 | Ordinal: 1779
        void doVelocityTracking(double);

    // RVA: 0x808 | Ordinal: 2057
        void getDesc_(void);

    // RVA: 0x8BB | Ordinal: 2236
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x93B | Ordinal: 2364
        void getObjectReflection(class MovingObject *, class osg::Vec3f);

    // RVA: 0x9B8 | Ordinal: 2489
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA31 | Ordinal: 2610
        void getRadarAimError(void);

    // RVA: 0xA34 | Ordinal: 2613
        void getRangeGateSize(void);

    // RVA: 0xA53 | Ordinal: 2644
        void getThresholdSens(bool);

    // RVA: 0xA59 | Ordinal: 2650
        void getUnambiguousRange(void);

    // RVA: 0xAAA | Ordinal: 2731
        void isHRRModeActive(void);

    // RVA: 0xAB9 | Ordinal: 2746
        void isSignalOutsideOfMLC(struct wRadarSensorBase::TargetSignal const &, struct wRadarSensorBase::ClutterSignal const &);

    // RVA: 0xABA | Ordinal: 2747
        void isSignalRangeVisible(struct wRadarSensorBase::TargetSignal const &);

    // RVA: 0xABB | Ordinal: 2748
        void isSignalVelocityVisible(struct wRadarSensorBase::TargetSignal const &);

    // RVA: 0xABD | Ordinal: 2750
        void isTargetIlluminated(class osg::Vec3f const &);

    // RVA: 0xB46 | Ordinal: 2887
        void readInputData(void);

    // RVA: 0xBBA | Ordinal: 3003
        void registerStateData(void);

    // RVA: 0xC4E | Ordinal: 3151
        void setCenerVel(double const &);

    // RVA: 0xC70 | Ordinal: 3185
        void setHRRModeActive(bool const &);

    // RVA: 0xCA2 | Ordinal: 3235
        void setPAPRatio(double);

    // RVA: 0xCB3 | Ordinal: 3252
        void setRangeGatePos(double const &);

    // RVA: 0xDCD | Ordinal: 3534
        void updateOutputs(void);

    // RVA: 0x184 | Ordinal: 389
        void wRadarSensorBase(class wRadarSensorBase const &);

    // RVA: 0x185 | Ordinal: 390
        void wRadarSensorBase(class wRadarSensorBaseDescriptor const *, class wSimulationSystem *, enum RadarType);

    // RVA: 0x271 | Ordinal: 626
        void _wRadarSensorBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WRADARSENSORBASE_HPP
