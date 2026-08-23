#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Gear
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Gear
{
public:

    // RVA: 0x32B | Ordinal: 812
        void AmortizatersLengthCorrection(void);

    // RVA: 0x356 | Ordinal: 855
        void Construct(void);

    // RVA: 0x3B2 | Ordinal: 947
        void Create(void);

    // RVA: 0x5D | Ordinal: 94
        void Gear(class AFM::Gear &&);

    // RVA: 0x5E | Ordinal: 95
        void Gear(class AFM::Gear const &);

    // RVA: 0x5F | Ordinal: 96
        void Gear(void);

    // RVA: 0x42E | Ordinal: 1071
        void GearPostsSimulation(double);

    // RVA: 0x43B | Ordinal: 1084
        void InitInTheFlight(void);

    // RVA: 0x443 | Ordinal: 1092
        void InitOnTheGround(void);

    // RVA: 0x46E | Ordinal: 1135
        void LockControlRudder(class AFM::ControlRudder *);

    // RVA: 0x476 | Ordinal: 1143
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x485 | Ordinal: 1158
        void LockElectroSystem(class AFM::ElectroSystem *);

    // RVA: 0x48F | Ordinal: 1168
        void LockHydroSystem(class AFM::HydroSystem *);

    // RVA: 0x4DF | Ordinal: 1248
        void Simulation(double);

    // RVA: 0x58D | Ordinal: 1422
        void getBreakSwitch(int *);

    // RVA: 0x5FB | Ordinal: 1532
        void getIPointerGearDownWire(class AFM::Wire **);

    // RVA: 0x5FE | Ordinal: 1535
        void getIPointerGearUpDownSelector(class AFM::Selector **);

    // RVA: 0x5FF | Ordinal: 1536
        void getIPointerGearUpWire(class AFM::Wire **);

    // RVA: 0x622 | Ordinal: 1571
        void getIPointerLeftGear(class AFM::GearPost **);

    // RVA: 0x624 | Ordinal: 1573
        void getIPointerLeftGearStructureMember(class AFM::StructureMember **);

    // RVA: 0x63D | Ordinal: 1598
        void getIPointerNoseGear(class AFM::GearPost **);

    // RVA: 0x63F | Ordinal: 1600
        void getIPointerNoseGearStructureMember(class AFM::StructureMember **);

    // RVA: 0x65C | Ordinal: 1629
        void getIPointerRightGear(class AFM::GearPost **);

    // RVA: 0x65E | Ordinal: 1631
        void getIPointerRightGearStructureMember(class AFM::StructureMember **);

    // RVA: 0x6A9 | Ordinal: 1706
        void getLeftGearUpDownFailureFactor(double *);

    // RVA: 0x6AA | Ordinal: 1707
        void getLeftGearUpDownPhase(double *);

    // RVA: 0x6B3 | Ordinal: 1716
        void getLeftWheelBrakeFailureFactor(double *);

    // RVA: 0x6EE | Ordinal: 1775
        void getNoseGearUpDownFailureFactor(double *);

    // RVA: 0x6EF | Ordinal: 1776
        void getNoseGearUpDownPhase(double *);

    // RVA: 0x6F0 | Ordinal: 1777
        void getNoseWheelControlFailureFactor(double *);

    // RVA: 0x6F1 | Ordinal: 1778
        void getNoseWheelNormalControlAngle(double *);

    // RVA: 0x706 | Ordinal: 1799
        void getRightGearUpDownFailureFactor(double *);

    // RVA: 0x707 | Ordinal: 1800
        void getRightGearUpDownPhase(double *);

    // RVA: 0x710 | Ordinal: 1809
        void getRightWheelBrakeFailureFactor(double *);

    // RVA: 0x794 | Ordinal: 1941
        void setBreakSwitchOff(void);

    // RVA: 0x795 | Ordinal: 1942
        void setBreakSwitchOn(void);

    // RVA: 0x7F2 | Ordinal: 2035
        void setLeftGearUpDownFailureFactor(double);

    // RVA: 0x7F3 | Ordinal: 2036
        void setLeftGearUpDownPhase(double);

    // RVA: 0x7FD | Ordinal: 2046
        void setLeftWheelBrakeFailureFactor(double);

    // RVA: 0x836 | Ordinal: 2103
        void setNoseGearUpDownFailureFactor(double);

    // RVA: 0x837 | Ordinal: 2104
        void setNoseGearUpDownPhase(double);

    // RVA: 0x838 | Ordinal: 2105
        void setNoseWheelControlFailureFactor(double);

    // RVA: 0x847 | Ordinal: 2120
        void setPointerToObjectDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double, double *), void *);

    // RVA: 0x84C | Ordinal: 2125
        void setPointerToSurfaceDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double *), void *);

    // RVA: 0x851 | Ordinal: 2130
        void setPointerToSurfaceHeightFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x856 | Ordinal: 2135
        void setPointerToSurfaceHeightNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x85B | Ordinal: 2140
        void setPointerToSurfaceLevelFunction(void (__cdecl *)(void *, double *, double, double *), void *);

    // RVA: 0x860 | Ordinal: 2145
        void setPointerToSurfaceNormalFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x865 | Ordinal: 2150
        void setPointerToSurfaceNormalNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x86A | Ordinal: 2155
        void setPointerToSurfaceSpeedFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x86F | Ordinal: 2160
        void setPointerToSurfaceTypeFunction(void (__cdecl *)(void *, double *, unsigned int *), void *);

    // RVA: 0x880 | Ordinal: 2177
        void setRightGearUpDownFailureFactor(double);

    // RVA: 0x881 | Ordinal: 2178
        void setRightGearUpDownPhase(double);

    // RVA: 0x88D | Ordinal: 2190
        void setRightWheelBrakeFailureFactor(double);

    // RVA: 0x121 | Ordinal: 290
        void _Gear(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_GEAR_HPP
