#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: LandVehicle.dll
// Class: Car
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace LandVehicle {

class Car
{
public:

    // RVA: 0x0 | Ordinal: 1
        void Car(class EagleFM::LandVehicle::Car const &);

    // RVA: 0x1 | Ordinal: 2
        void Car(double);

    // RVA: 0x11 | Ordinal: 18
        void DrawDebugGeometry(void) const;

    // RVA: 0x12 | Ordinal: 19
        void NextGear(void);

    // RVA: 0x14 | Ordinal: 21
        void PrevGear(void);

    // RVA: 0x15 | Ordinal: 22
        void adjustSpecificCarParams(void);

    // RVA: 0x16 | Ordinal: 23
        void adjustToNewDynamicBody(struct EagleFM::DynamicState const &, struct Vehicle_Descriptor const *, float);

    // RVA: 0x19 | Ordinal: 26
        void engineStartStop(bool);

    // RVA: 0x1A | Ordinal: 27
        void engineToggle(void);

    // RVA: 0x1B | Ordinal: 28
        void getClutchK(void) const;

    // RVA: 0x1F | Ordinal: 32
        void getEngineRPM(void) const;

    // RVA: 0x20 | Ordinal: 33
        void getEngineState(void) const;

    // RVA: 0x21 | Ordinal: 34
        void getFuel(void) const;

    // RVA: 0x22 | Ordinal: 35
        void getGearNum(void) const;

    // RVA: 0x23 | Ordinal: 36
        void getMassPosW(void) const;

    // RVA: 0x25 | Ordinal: 38
        void getNextGearNum(void) const;

    // RVA: 0x26 | Ordinal: 39
        void getNoseWheelsYaw(void) const;

    // RVA: 0x28 | Ordinal: 41
        void getPedalBrakeAxis(void) const;

    // RVA: 0x29 | Ordinal: 42
        void getPedalGasAxis(void) const;

    // RVA: 0x2C | Ordinal: 45
        void getRigidContactInitial(int) const;

    // RVA: 0x30 | Ordinal: 49
        void getRudderAxis(void) const;

    // RVA: 0x32 | Ordinal: 51
        void getStrutCompression(int) const;

    // RVA: 0x33 | Ordinal: 52
        void getStrutCompressionAbsolute(int) const;

    // RVA: 0x34 | Ordinal: 53
        void getSuspensionPitchHeaveRollParams(float &, float &, float &) const;

    // RVA: 0x38 | Ordinal: 57
        void getWheelContactInitial(int) const;

    // RVA: 0x39 | Ordinal: 58
        void getWheelRotationPhase(int) const;

    // RVA: 0x3A | Ordinal: 59
        void getWheelsNum(void) const;

    // RVA: 0x3C | Ordinal: 61
        void get_G_factor(void) const;

    // RVA: 0x3D | Ordinal: 62
        void init(struct EagleFM::LandVehicle::CarInit const &);

    // RVA: 0x3F | Ordinal: 64
        void isAccelerating(void) const;

    // RVA: 0x40 | Ordinal: 65
        void isBraking(void) const;

    // RVA: 0x41 | Ordinal: 66
        void isCaterpillar(void) const;

    // RVA: 0x42 | Ordinal: 67
        void isChangingGear(void) const;

    // RVA: 0x43 | Ordinal: 68
        void isReversedDirection(void);

    // RVA: 0x47 | Ordinal: 72
        void setFuel(double);

    // RVA: 0x48 | Ordinal: 73
        void setMaxSpeed(float);

    // RVA: 0x49 | Ordinal: 74
        void setNeutralGear(void);

    // RVA: 0x4B | Ordinal: 76
        void setPayload(double, class Math::Vector<3, double> const &);

    // RVA: 0x4C | Ordinal: 77
        void setPedalBrakeAxis(float);

    // RVA: 0x4D | Ordinal: 78
        void setPedalBrakeAxis_delta(float);

    // RVA: 0x4E | Ordinal: 79
        void setPedalClutchAxis(float);

    // RVA: 0x4F | Ordinal: 80
        void setPedalGasAxis(float);

    // RVA: 0x50 | Ordinal: 81
        void setPedalGasAxis_delta(float);

    // RVA: 0x52 | Ordinal: 83
        void setRigidContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x54 | Ordinal: 85
        void setRigidContactInitial(int &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x55 | Ordinal: 86
        void setRigidContactInitial(int &, float, float, float);

    // RVA: 0x56 | Ordinal: 87
        void setRigidContactInitial(int &, float, float, float, char, float);

    // RVA: 0x57 | Ordinal: 88
        void setRudderAxis(float);

    // RVA: 0x58 | Ordinal: 89
        void setRudderAxis_delta(float);

    // RVA: 0x59 | Ordinal: 90
        void setStructureIF(int, double);

    // RVA: 0x5B | Ordinal: 92
        void setWheelContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x5C | Ordinal: 93
        void setWheelContactInitial(int, float, float, float, bool, float, float);

    // RVA: 0x5D | Ordinal: 94
        void simulate(double);

    // RVA: 0x5F | Ordinal: 96
        void simulateAutoClutch(float, float, float, float, double);

    // RVA: 0x60 | Ordinal: 97
        void simulateAutomaticTransmission(float, float, float, float, double);

    // RVA: 0x61 | Ordinal: 98
        void simulateCruiseControl(double);

    // RVA: 0x62 | Ordinal: 99
        void simulateGearChange(void);

    // RVA: 0x63 | Ordinal: 100
        void tryNextGear(void);

    // RVA: 0x64 | Ordinal: 101
        void tryPrevGear(void);

    // RVA: 0x5 | Ordinal: 6
        void _Car(void);
};

} // namespace LandVehicle
} // namespace EagleFM

// DCS_OPS_RE_LANDVEHICLE.DLL_CAR_HPP
