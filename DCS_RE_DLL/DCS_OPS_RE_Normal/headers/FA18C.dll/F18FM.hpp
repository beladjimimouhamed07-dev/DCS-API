#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FA18C.dll
// Class: F18FM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ExternalFM {
namespace F18 {

class F18FM
{
public:

    // RVA: 0x0 | Ordinal: 1
        void F18FM(void);

    // RVA: 0x3 | Ordinal: 4
        void arcadeSimulate(double);

    // RVA: 0x4 | Ordinal: 5
        void calcCoG_X(double);

    // RVA: 0x5 | Ordinal: 6
        void calcCoG_X_Percent(double);

    // RVA: 0x6 | Ordinal: 7
        void changeMass(double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x7 | Ordinal: 8
        void changePylonsMass(struct ExternalFM::DeltaMass &);

    // RVA: 0x8 | Ordinal: 9
        void computeDeformations(double);

    // RVA: 0x9 | Ordinal: 10
        void configure(char const *, char const *);

    // RVA: 0xA | Ordinal: 11
        void deleteInstance(void);

    // RVA: 0xB | Ordinal: 12
        void findBalanceAOA(void);

    // RVA: 0xC | Ordinal: 13
        void findBalanceElevator(void);

    // RVA: 0xD | Ordinal: 14
        void getAerodynamics(void);

    // RVA: 0xE | Ordinal: 15
        void getAirSystem(void);

    // RVA: 0xF | Ordinal: 16
        void getAngularVelocity(void);

    // RVA: 0x10 | Ordinal: 17
        void getControlSystem(void);

    // RVA: 0x11 | Ordinal: 18
        void getElectricSystem(void);

    // RVA: 0x12 | Ordinal: 19
        void getExternalFuel(void);

    // RVA: 0x13 | Ordinal: 20
        void getFuelSystem(void);

    // RVA: 0x14 | Ordinal: 21
        void getGearSystem(void);

    // RVA: 0x15 | Ordinal: 22
        void getHydraulicSystem(void);

    // RVA: 0x16 | Ordinal: 23
        void getInstance(void);

    // RVA: 0x17 | Ordinal: 24
        void getInternalFuel(void);

    // RVA: 0x18 | Ordinal: 25
        void getOxygenSystem(void);

    // RVA: 0x19 | Ordinal: 26
        void getParam(unsigned int);

    // RVA: 0x1A | Ordinal: 27
        void getPlaneMass(void) const;

    // RVA: 0x1B | Ordinal: 28
        void getPowerPlant(void);

    // RVA: 0x1C | Ordinal: 29
        void getPylonMass(void) const;

    // RVA: 0x1D | Ordinal: 30
        void getSensorsSystem(void);

    // RVA: 0x1E | Ordinal: 31
        void getShakeAmplitude(void);

    // RVA: 0x1F | Ordinal: 32
        void getVelocity(void);

    // RVA: 0x20 | Ordinal: 33
        void getVortexLength(unsigned int, bool);

    // RVA: 0x21 | Ordinal: 34
        void getVortexOrigin(unsigned int, bool);

    // RVA: 0x22 | Ordinal: 35
        void getVortexRadius(unsigned int, bool);

    // RVA: 0x23 | Ordinal: 36
        void getVortexVec(unsigned int, bool);

    // RVA: 0x24 | Ordinal: 37
        void initialize(bool, bool);

    // RVA: 0x25 | Ordinal: 38
        void inputData(void);

    // RVA: 0x26 | Ordinal: 39
        void lerxVortexUpdate(unsigned int, struct LERX_vortex &);

    // RVA: 0x27 | Ordinal: 40
        void makeBalance(double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x28 | Ordinal: 41
        void onDamage(int, double);

    // RVA: 0x29 | Ordinal: 42
        void onPlannedFailure(char const *);

    // RVA: 0x2A | Ordinal: 43
        void outputData(void);

    // RVA: 0x2B | Ordinal: 44
        void popSimulationEvent(struct ed_fm_simulation_event &);

    // RVA: 0x2C | Ordinal: 45
        void pushSimulationEvent(struct ed_fm_simulation_event &);

    // RVA: 0x2D | Ordinal: 46
        void refuelingAddFuel(double);

    // RVA: 0x2E | Ordinal: 47
        void repair(void);

    // RVA: 0x2F | Ordinal: 48
        void restrictedPayloadCalculateDrag(void);

    // RVA: 0x30 | Ordinal: 49
        void restrictedPayloadFeedback(int, struct EagleFM::Payload const *);

    // RVA: 0x31 | Ordinal: 50
        void restrictredSetPointerToSelf(class EagleFM::AerodyneFM *);

    // RVA: 0x33 | Ordinal: 52
        void setCommand(int, double);

    // RVA: 0x34 | Ordinal: 53
        void setCurrentStateBodyAxis(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, double, double, double, double);

    // RVA: 0x35 | Ordinal: 54
        void setDrawArgs(float *, unsigned __int64);

    // RVA: 0x36 | Ordinal: 55
        void setExternalFuel(int, double, double, double, double);

    // RVA: 0x37 | Ordinal: 56
        void setInternalFuel(double);

    // RVA: 0x38 | Ordinal: 57
        void setPluginDataInstallPath(char const *);

    // RVA: 0x39 | Ordinal: 58
        void setSurface(double, double, unsigned int, class Math::Vector<3, double> const &);

    // RVA: 0x3A | Ordinal: 59
        void set_body_involvement(float);

    // RVA: 0x3B | Ordinal: 60
        void set_body_shift_arg_value(class osg::Vec3f const &);

    // RVA: 0x3C | Ordinal: 61
        void set_head_angle_arg_values(float, float);

    // RVA: 0x3D | Ordinal: 62
        void set_head_involvement(float);

    // RVA: 0x3E | Ordinal: 63
        void set_left_hand_involvement(float);

    // RVA: 0x3F | Ordinal: 64
        void set_right_hand_involvement(float);

    // RVA: 0x40 | Ordinal: 65
        void simulate(double);

    // RVA: 0x41 | Ordinal: 66
        void suspensionFeedback(int, struct ed_fm_suspension_info const *);

    // RVA: 0x43 | Ordinal: 68
        void unlimitedFuel(bool);

    // RVA: 0x44 | Ordinal: 69
        void update_head_tilt_by_horizon_line(double);

    // RVA: 0x45 | Ordinal: 70
        void windVectorFieldDone(void);

    // RVA: 0x46 | Ordinal: 71
        void windVectorFieldUpdateRequest(struct wind_vector_field &);

    // RVA: 0x1 | Ordinal: 2
        void _F18FM(void);
};

} // namespace F18
} // namespace ExternalFM

// DCS_OPS_RE_FA18C.DLL_F18FM_HPP
