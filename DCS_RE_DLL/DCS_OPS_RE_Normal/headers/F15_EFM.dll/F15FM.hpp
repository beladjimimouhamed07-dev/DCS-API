#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: F15_EFM.dll
// Class: F15FM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ExternalFM {
namespace F15 {

class F15FM
{
public:

    // RVA: 0x0 | Ordinal: 1
        void F15FM(void);

    // RVA: 0x1B | Ordinal: 28
        void changeMass(double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x1C | Ordinal: 29
        void configure(char const *, char const *);

    // RVA: 0x1D | Ordinal: 30
        void deleteInstance(void);

    // RVA: 0x1E | Ordinal: 31
        void fillMatrices(void);

    // RVA: 0x31 | Ordinal: 50
        void getAerodynamics(void);

    // RVA: 0x32 | Ordinal: 51
        void getCommon_data(void);

    // RVA: 0x33 | Ordinal: 52
        void getControlSystem(void);

    // RVA: 0x34 | Ordinal: 53
        void getEngineLeft(void);

    // RVA: 0x35 | Ordinal: 54
        void getEngineRight(void);

    // RVA: 0x36 | Ordinal: 55
        void getExternalFuel(void);

    // RVA: 0x37 | Ordinal: 56
        void getFuelSystem(void);

    // RVA: 0x38 | Ordinal: 57
        void getGearSystem(void);

    // RVA: 0x39 | Ordinal: 58
        void getInput(void);

    // RVA: 0x3A | Ordinal: 59
        void getInstance(void);

    // RVA: 0x3B | Ordinal: 60
        void getInternalFuel(void);

    // RVA: 0x3C | Ordinal: 61
        void getMiscSystem(void);

    // RVA: 0x3D | Ordinal: 62
        void getOutput(void);

    // RVA: 0x3E | Ordinal: 63
        void getParam(unsigned int);

    // RVA: 0x3F | Ordinal: 64
        void getShakeAmplitude(void);

    // RVA: 0x40 | Ordinal: 65
        void initialize(bool, bool);

    // RVA: 0x41 | Ordinal: 66
        void inputData(void);

    // RVA: 0x42 | Ordinal: 67
        void makeBalance(double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x43 | Ordinal: 68
        void needToBeRepaired(void) const;

    // RVA: 0x44 | Ordinal: 69
        void onDamage(int, double);

    // RVA: 0x45 | Ordinal: 70
        void onPlannedFailure(char const *);

    // RVA: 0x46 | Ordinal: 71
        void outputData(void);

    // RVA: 0x47 | Ordinal: 72
        void popSimulationEvent(struct ed_fm_simulation_event &);

    // RVA: 0x48 | Ordinal: 73
        void refuelingAddFuel(double);

    // RVA: 0x49 | Ordinal: 74
        void repair(void);

    // RVA: 0x4A | Ordinal: 75
        void restrictedPayloadCalculateDrag(void);

    // RVA: 0x4B | Ordinal: 76
        void restrictedPayloadFeedback(int, struct EagleFM::Payload const *);

    // RVA: 0x4C | Ordinal: 77
        void restrictredSetPointerToSelf(class EagleFM::AerodyneFM *);

    // RVA: 0x4E | Ordinal: 79
        void setAtmosphere(double, double, double, double, double, class Math::Vector<3, double> const &);

    // RVA: 0x4F | Ordinal: 80
        void setCommand(int, double);

    // RVA: 0x50 | Ordinal: 81
        void setCurrentMassState(double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x51 | Ordinal: 82
        void setCurrentState(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, double, double, double);

    // RVA: 0x52 | Ordinal: 83
        void setCurrentStateBodyAxis(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, double, double, double, double, double);

    // RVA: 0x53 | Ordinal: 84
        void setDrawArgs(float *, unsigned __int64);

    // RVA: 0x54 | Ordinal: 85
        void setExternalFuel(int, double, double, double, double);

    // RVA: 0x55 | Ordinal: 86
        void setFc3CockpitDrawArgs(float *, unsigned __int64);

    // RVA: 0x56 | Ordinal: 87
        void setInternalFuel(double);

    // RVA: 0x57 | Ordinal: 88
        void setSurface(double, double, unsigned int, class Math::Vector<3, double> const &);

    // RVA: 0x58 | Ordinal: 89
        void simulate(double);

    // RVA: 0x59 | Ordinal: 90
        void unlimitedFuel(bool);

    // RVA: 0x1 | Ordinal: 2
        void _F15FM(void);
};

} // namespace F15
} // namespace ExternalFM

// DCS_OPS_RE_F15_EFM.DLL_F15FM_HPP
