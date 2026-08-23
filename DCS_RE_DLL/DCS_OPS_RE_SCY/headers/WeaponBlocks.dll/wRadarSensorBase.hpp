#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6ED | Ordinal: 1774
        void doFilterBankSearch(void);

    // RVA: 0x6EE | Ordinal: 1775
        void doFilterBankTracking(void);

    // RVA: 0x6EF | Ordinal: 1776
        void doIlluminatorTargetSearch(void);

    // RVA: 0x6F0 | Ordinal: 1777
        void doRangeSearch(double);

    // RVA: 0x6F1 | Ordinal: 1778
        void doRangeTracking(double);

    // RVA: 0x6F2 | Ordinal: 1779
        void doSpeedGateSearch(void);

    // RVA: 0x6F3 | Ordinal: 1780
        void doSpeedGateTracking(void);

    // RVA: 0x6F5 | Ordinal: 1782
        void doVelocitySearch(double);

    // RVA: 0x6F6 | Ordinal: 1783
        void doVelocityTracking(double);

    // RVA: 0x810 | Ordinal: 2065
        void getDesc_(void);

    // RVA: 0x8C4 | Ordinal: 2245
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x944 | Ordinal: 2373
        void getObjectReflection(class MovingObject *, class osg::Vec3f);

    // RVA: 0x9C1 | Ordinal: 2498
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3A | Ordinal: 2619
        void getRadarAimError(void);

    // RVA: 0xA3F | Ordinal: 2624
        void getRangeGateSize(void);

    // RVA: 0xA62 | Ordinal: 2659
        void getThresholdSens(bool);

    // RVA: 0xA68 | Ordinal: 2665
        void getUnambiguousRange(void);

    // RVA: 0xAD0 | Ordinal: 2769
        void isHRRModeActive(void);

    // RVA: 0xAE0 | Ordinal: 2785
        void isSignalOutsideOfMLC(struct wRadarSensorBase::TargetSignal const &, struct wRadarSensorBase::ClutterSignal const &);

    // RVA: 0xAE1 | Ordinal: 2786
        void isSignalRangeVisible(struct wRadarSensorBase::TargetSignal const &);

    // RVA: 0xAE2 | Ordinal: 2787
        void isSignalVelocityVisible(struct wRadarSensorBase::TargetSignal const &);

    // RVA: 0xAE4 | Ordinal: 2789
        void isTargetIlluminated(class osg::Vec3f const &);

    // RVA: 0xB70 | Ordinal: 2929
        void readInputData(void);

    // RVA: 0xBE4 | Ordinal: 3045
        void registerStateData(void);

    // RVA: 0xC98 | Ordinal: 3225
        void setCenerVel(double const &);

    // RVA: 0xCBA | Ordinal: 3259
        void setHRRModeActive(bool const &);

    // RVA: 0xCEC | Ordinal: 3309
        void setPAPRatio(double);

    // RVA: 0xCFD | Ordinal: 3326
        void setRangeGatePos(double const &);

    // RVA: 0xE1C | Ordinal: 3613
        void updateOutputs(void);

    // RVA: 0x184 | Ordinal: 389
        void wRadarSensorBase(class wRadarSensorBase const &);

    // RVA: 0x185 | Ordinal: 390
        void wRadarSensorBase(class wRadarSensorBaseDescriptor const *, class wSimulationSystem *, enum RadarType);

    // RVA: 0x271 | Ordinal: 626
        void _wRadarSensorBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WRADARSENSORBASE_HPP
