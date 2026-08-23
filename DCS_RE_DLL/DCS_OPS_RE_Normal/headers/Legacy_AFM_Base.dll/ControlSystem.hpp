#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ControlSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ControlSystem
{
public:

    // RVA: 0x325 | Ordinal: 806
        void ACSFailure(void);

    // RVA: 0x32C | Ordinal: 813
        void AutopilotFailure(void);

    // RVA: 0x34F | Ordinal: 848
        void Construct(void);

    // RVA: 0x3F | Ordinal: 64
        void ControlSystem(class AFM::ControlSystem &&);

    // RVA: 0x40 | Ordinal: 65
        void ControlSystem(class AFM::ControlSystem const &);

    // RVA: 0x41 | Ordinal: 66
        void ControlSystem(void);

    // RVA: 0x3A8 | Ordinal: 937
        void Create(void);

    // RVA: 0x439 | Ordinal: 1082
        void InitInTheFlight(void);

    // RVA: 0x444 | Ordinal: 1093
        void InitOnTheParking(void);

    // RVA: 0x44B | Ordinal: 1100
        void InitOnTheRunway(void);

    // RVA: 0x474 | Ordinal: 1141
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x484 | Ordinal: 1157
        void LockElectroSystem(class AFM::ElectroSystem *);

    // RVA: 0x48E | Ordinal: 1167
        void LockHydroSystem(class AFM::HydroSystem *);

    // RVA: 0x492 | Ordinal: 1171
        void LockIndicationSystem(class AFM::Indicator *, class AFM::Indicator *);

    // RVA: 0x49B | Ordinal: 1180
        void LockLeftStabilizer(class AFM::StructureMember *);

    // RVA: 0x49E | Ordinal: 1183
        void LockLeftWing(class AFM::StructureMember *);

    // RVA: 0x4A8 | Ordinal: 1193
        void LockRightStabilizer(class AFM::StructureMember *);

    // RVA: 0x4AB | Ordinal: 1196
        void LockRightWing(class AFM::StructureMember *);

    // RVA: 0x4AF | Ordinal: 1200
        void LockSensorsSystem(class AFM::SensorsSystem *);

    // RVA: 0x4B2 | Ordinal: 1203
        void LockTail(class AFM::StructureMember *);

    // RVA: 0x4DB | Ordinal: 1244
        void Simulation(double);

    // RVA: 0x5CC | Ordinal: 1485
        void getIPointerAirBrakesSwitch(class AFM::Switch **);

    // RVA: 0x5DE | Ordinal: 1503
        void getIPointerConfigurationSelector(class AFM::Selector **);

    // RVA: 0x5DF | Ordinal: 1504
        void getIPointerControlRudder(class AFM::ControlRudder **);

    // RVA: 0x5E0 | Ordinal: 1505
        void getIPointerControlRudderTrimmerSelector(class AFM::Selector **);

    // RVA: 0x5E1 | Ordinal: 1506
        void getIPointerControlStick(class AFM::ControlStick **);

    // RVA: 0x5E2 | Ordinal: 1507
        void getIPointerControlStickTrimmerSelector(class AFM::Selector **);

    // RVA: 0x61C | Ordinal: 1565
        void getIPointerLeftAileron(class AFM::ControlSurface **);

    // RVA: 0x61D | Ordinal: 1566
        void getIPointerLeftAirBrake(class AFM::ControlSurface **);

    // RVA: 0x61F | Ordinal: 1568
        void getIPointerLeftElevator(class AFM::ControlSurface **);

    // RVA: 0x629 | Ordinal: 1578
        void getIPointerLeftInnerFlap(class AFM::ControlSurface **);

    // RVA: 0x632 | Ordinal: 1587
        void getIPointerLeftOuterFlap(class AFM::ControlSurface **);

    // RVA: 0x634 | Ordinal: 1589
        void getIPointerLeftSlat(class AFM::ControlSurface **);

    // RVA: 0x656 | Ordinal: 1623
        void getIPointerRightAileron(class AFM::ControlSurface **);

    // RVA: 0x657 | Ordinal: 1624
        void getIPointerRightAirBrake(class AFM::ControlSurface **);

    // RVA: 0x659 | Ordinal: 1626
        void getIPointerRightElevator(class AFM::ControlSurface **);

    // RVA: 0x663 | Ordinal: 1636
        void getIPointerRightInnerFlap(class AFM::ControlSurface **);

    // RVA: 0x66C | Ordinal: 1645
        void getIPointerRightOuterFlap(class AFM::ControlSurface **);

    // RVA: 0x66E | Ordinal: 1647
        void getIPointerRightSlat(class AFM::ControlSurface **);

    // RVA: 0x689 | Ordinal: 1674
        void getIPointerTailRudder(class AFM::ControlSurface **);

    // RVA: 0x693 | Ordinal: 1684
        void getIPointerYawDamper(class AFM::ControlSurface **);

    // RVA: 0x6A8 | Ordinal: 1705
        void getLeftAirBrakeOnOffFailureFactor(double *);

    // RVA: 0x6AD | Ordinal: 1710
        void getLeftInnerFlapUpDownFailureFactor(double *);

    // RVA: 0x6B0 | Ordinal: 1713
        void getLeftOuterFlapUpDownFailureFactor(double *);

    // RVA: 0x6B2 | Ordinal: 1715
        void getLeftSlatUpDownFailureFactor(double *);

    // RVA: 0x705 | Ordinal: 1798
        void getRightAirBrakeOnOffFailureFactor(double *);

    // RVA: 0x70A | Ordinal: 1803
        void getRightInnerFlapUpDownFailureFactor(double *);

    // RVA: 0x70D | Ordinal: 1806
        void getRightOuterFlapUpDownFailureFactor(double *);

    // RVA: 0x70F | Ordinal: 1808
        void getRightSlatUpDownFailureFactor(double *);

    // RVA: 0x742 | Ordinal: 1859
        void getStabilizerAngle(double *);

    // RVA: 0x781 | Ordinal: 1922
        void setAutopilotPitchMode(int);

    // RVA: 0x782 | Ordinal: 1923
        void setAutopilotPresetBarometricalAltitude(double);

    // RVA: 0x783 | Ordinal: 1924
        void setAutopilotPresetPitch(double);

    // RVA: 0x784 | Ordinal: 1925
        void setAutopilotPresetRadarAltitude(double);

    // RVA: 0x785 | Ordinal: 1926
        void setAutopilotPresetRoll(double);

    // RVA: 0x786 | Ordinal: 1927
        void setAutopilotPresetYaw(double);

    // RVA: 0x787 | Ordinal: 1928
        void setAutopilotRollMode(int);

    // RVA: 0x7A5 | Ordinal: 1958
        void setFFBOff(void);

    // RVA: 0x7A6 | Ordinal: 1959
        void setFFBOn(void);

    // RVA: 0x7D1 | Ordinal: 2002
        void setIPointerLeftAileron(class AFM::ControlSurface *);

    // RVA: 0x7D2 | Ordinal: 2003
        void setIPointerLeftAirBrake(class AFM::ControlSurface *);

    // RVA: 0x7D3 | Ordinal: 2004
        void setIPointerLeftElevator(class AFM::ControlSurface *);

    // RVA: 0x7D4 | Ordinal: 2005
        void setIPointerLeftInnerFlap(class AFM::ControlSurface *);

    // RVA: 0x7D5 | Ordinal: 2006
        void setIPointerLeftOuterFlap(class AFM::ControlSurface *);

    // RVA: 0x7D6 | Ordinal: 2007
        void setIPointerLeftSlat(class AFM::ControlSurface *);

    // RVA: 0x7D7 | Ordinal: 2008
        void setIPointerRightAileron(class AFM::ControlSurface *);

    // RVA: 0x7D8 | Ordinal: 2009
        void setIPointerRightAirBrake(class AFM::ControlSurface *);

    // RVA: 0x7D9 | Ordinal: 2010
        void setIPointerRightElevator(class AFM::ControlSurface *);

    // RVA: 0x7DA | Ordinal: 2011
        void setIPointerRightInnerFlap(class AFM::ControlSurface *);

    // RVA: 0x7DB | Ordinal: 2012
        void setIPointerRightOuterFlap(class AFM::ControlSurface *);

    // RVA: 0x7DC | Ordinal: 2013
        void setIPointerRightSlat(class AFM::ControlSurface *);

    // RVA: 0x7DD | Ordinal: 2014
        void setIPointerTailRudder(class AFM::ControlSurface *);

    // RVA: 0x7DE | Ordinal: 2015
        void setIPointerYawDamper(class AFM::ControlSurface *);

    // RVA: 0x7F1 | Ordinal: 2034
        void setLeftAirBrakeOnOffFailureFactor(double);

    // RVA: 0x7F7 | Ordinal: 2040
        void setLeftInnerFlapUpDownFailureFactor(double);

    // RVA: 0x7FA | Ordinal: 2043
        void setLeftOuterFlapUpDownFailureFactor(double);

    // RVA: 0x7FC | Ordinal: 2045
        void setLeftSlatUpDownFailureFactor(double);

    // RVA: 0x87F | Ordinal: 2176
        void setRightAirBrakeOnOffFailureFactor(double);

    // RVA: 0x885 | Ordinal: 2182
        void setRightInnerFlapUpDownFailureFactor(double);

    // RVA: 0x888 | Ordinal: 2185
        void setRightOuterFlapUpDownFailureFactor(double);

    // RVA: 0x88C | Ordinal: 2189
        void setRightSlatUpDownFailureFactor(double);

    // RVA: 0x8C3 | Ordinal: 2244
        void setStabilizerOrientation(void);

    // RVA: 0x117 | Ordinal: 280
        void _ControlSystem(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_CONTROLSYSTEM_HPP
