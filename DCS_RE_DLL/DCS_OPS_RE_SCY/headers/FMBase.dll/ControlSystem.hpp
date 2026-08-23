#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ControlSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ControlSystem
{
public:

    // RVA: 0x5F | Ordinal: 96
        void ControlSystem(class EagleFM::ControlSystem const &);

    // RVA: 0x60 | Ordinal: 97
        void ControlSystem(void);

    // RVA: 0x481 | Ordinal: 1154
        void decreaseEngineRegime(int);

    // RVA: 0x4D4 | Ordinal: 1237
        void getAutopilotParam(int) const;

    // RVA: 0x527 | Ordinal: 1320
        void getDataTable(void);

    // RVA: 0x5A4 | Ordinal: 1445
        void getJoystickFFB_Factor(float *, float *);

    // RVA: 0x5A5 | Ordinal: 1446
        void getJoystickFFB_Neutral(float *, float *);

    // RVA: 0x5A6 | Ordinal: 1447
        void getJoystickFFB_ShakeX(float *, float *);

    // RVA: 0x5A7 | Ordinal: 1448
        void getJoystickFFB_ShakeY(float *, float *);

    // RVA: 0x5F8 | Ordinal: 1529
        void getParkingBrake(int) const;

    // RVA: 0x5FA | Ordinal: 1531
        void getPedals(void);

    // RVA: 0x5FB | Ordinal: 1532
        void getPedals(void) const;

    // RVA: 0x5FC | Ordinal: 1533
        void getPedalsFFB_Factor(void) const;

    // RVA: 0x5FD | Ordinal: 1534
        void getPedalsFFB_Friction(void) const;

    // RVA: 0x5FE | Ordinal: 1535
        void getPedalsFFB_Neutral(void) const;

    // RVA: 0x697 | Ordinal: 1688
        void getStick(void);

    // RVA: 0x698 | Ordinal: 1689
        void getStick(void) const;

    // RVA: 0x6AF | Ordinal: 1712
        void getThrottleControl(int) const;

    // RVA: 0x6B0 | Ordinal: 1713
        void getThrottlePos(int) const;

    // RVA: 0x6EB | Ordinal: 1772
        void getWheelBrakePos(int) const;

    // RVA: 0x70B | Ordinal: 1804
        void increaseEngineRegime(int);

    // RVA: 0x7EF | Ordinal: 2032
        void resetTrimmer(void);

    // RVA: 0x809 | Ordinal: 2058
        void setAutopilotMode(int);

    // RVA: 0x80A | Ordinal: 2059
        void setAutopilotParam(int, double);

    // RVA: 0x82A | Ordinal: 2091
        void setControlAxisDir(enum ControlAxisDir, bool);

    // RVA: 0x84F | Ordinal: 2128
        void setEngineStop(bool, int);

    // RVA: 0x889 | Ordinal: 2186
        void setJoystickFFB(bool);

    // RVA: 0x8BC | Ordinal: 2237
        void setParkingBrake(bool, int);

    // RVA: 0x8C0 | Ordinal: 2241
        void setPedalsFFB(bool);

    // RVA: 0x90B | Ordinal: 2316
        void setThrottle(double, enum EagleFM::EngineIDs);

    // RVA: 0x90C | Ordinal: 2317
        void setThrottleDir(int, int);

    // RVA: 0x910 | Ordinal: 2321
        void setTrimmer(enum ControlAxisDir);

    // RVA: 0x911 | Ordinal: 2322
        void setTrimmer(bool);

    // RVA: 0x92E | Ordinal: 2351
        void setWheelBrake(double, int);

    // RVA: 0x92F | Ordinal: 2352
        void setWheelBrake(bool, int);

    // RVA: 0x196 | Ordinal: 407
        void _ControlSystem(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONTROLSYSTEM_HPP
