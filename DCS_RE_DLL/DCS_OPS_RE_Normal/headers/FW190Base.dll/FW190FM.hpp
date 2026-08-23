#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190FM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190FM
{
public:

    // RVA: 0x8 | Ordinal: 9
        void FW190FM(class IwoLA *);

    // RVA: 0x4B | Ordinal: 76
        void addFuel(double);

    // RVA: 0x4D | Ordinal: 78
        void arcadeSimulate(double);

    // RVA: 0x51 | Ordinal: 82
        void calcPayloadDrag(void);

    // RVA: 0x59 | Ordinal: 90
        void getAirRush(int, class osg::Vec3d const &, struct WorldGeneral::VRHeadsetAudibilitySetup::EarAirRush &) const;

    // RVA: 0x5A | Ordinal: 91
        void getAnyData(class ed::basic_string<char> const &, void *) const;

    // RVA: 0x5D | Ordinal: 94
        void getBoostMixt(void) const;

    // RVA: 0x60 | Ordinal: 97
        void getConsumablesList(class ed::vector<enum WorldGeneral::StockpileResources, class ed::allocator<enum WorldGeneral::StockpileResources>> *) const;

    // RVA: 0x62 | Ordinal: 99
        void getControlSystem(void);

    // RVA: 0x68 | Ordinal: 105
        void getElectricSystem(void);

    // RVA: 0x69 | Ordinal: 106
        void getEngineParam(enum EagleFM::EngineIDs, int) const;

    // RVA: 0x6A | Ordinal: 107
        void getEngineRelativeRPM(enum EagleFM::EngineIDs, bool) const;

    // RVA: 0x6B | Ordinal: 108
        void getEngineRelativeThrust(enum EagleFM::EngineIDs) const;

    // RVA: 0x6D | Ordinal: 110
        void getExternalFuel(void) const;

    // RVA: 0x6F | Ordinal: 112
        void getFlowVelocity(int) const;

    // RVA: 0x71 | Ordinal: 114
        void getFuselageControlState(enum WorldGeneral::FuselageControlSurfaces) const;

    // RVA: 0x72 | Ordinal: 115
        void getGear(void);

    // RVA: 0x73 | Ordinal: 116
        void getGearPostState(int) const;

    // RVA: 0x75 | Ordinal: 118
        void getInternalFuel(void) const;

    // RVA: 0x79 | Ordinal: 122
        void getLoadMoment(void) const;

    // RVA: 0x7B | Ordinal: 124
        void getNoseGearPostYaw(void) const;

    // RVA: 0x7D | Ordinal: 126
        void getOxygenSystem(void);

    // RVA: 0x7E | Ordinal: 127
        void getRefuelFlow(bool, double *) const;

    // RVA: 0x81 | Ordinal: 130
        void getSectorAudibility(int, float, class osg::Vec3d const &, struct WorldGeneral::VRHeadsetAudibilitySetup &) const;

    // RVA: 0x85 | Ordinal: 134
        void getSensorsSystem(void);

    // RVA: 0x86 | Ordinal: 135
        void getStabilizerControlState(enum WorldGeneral::StabilizerControlSurfaces) const;

    // RVA: 0x88 | Ordinal: 137
        void getStrutCompression(int) const;

    // RVA: 0x89 | Ordinal: 138
        void getSurfaceNormalGearCoeff(int) const;

    // RVA: 0x8A | Ordinal: 139
        void getTailControlState(enum WorldGeneral::KeelControlSurfaces) const;

    // RVA: 0x8F | Ordinal: 144
        void getWheelRotationPhase(int) const;

    // RVA: 0x90 | Ordinal: 145
        void getWingControlState(enum WorldGeneral::WingControlSurfaces) const;

    // RVA: 0x9B | Ordinal: 156
        void initAirStart(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0xA0 | Ordinal: 161
        void initColdStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0xA6 | Ordinal: 167
        void initHotStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0xAA | Ordinal: 171
        void initMotor(class EagleFM::PistonEngine *);

    // RVA: 0xAD | Ordinal: 174
        void initPreStart(void);

    // RVA: 0xB3 | Ordinal: 180
        void isSystemsDamaged(void) const;

    // RVA: 0xB9 | Ordinal: 186
        void repair(void);

    // RVA: 0xCC | Ordinal: 205
        void setAnyData(class ed::basic_string<char> const &, void *);

    // RVA: 0xCD | Ordinal: 206
        void setArcadeFlight(bool);

    // RVA: 0xCF | Ordinal: 208
        void setBoostMixt(double);

    // RVA: 0xD1 | Ordinal: 210
        void setCellIF(int, float, float);

    // RVA: 0xD9 | Ordinal: 218
        void setFuel(double);

    // RVA: 0xDA | Ordinal: 219
        void setGearContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0xDB | Ordinal: 220
        void setImmortal(bool);

    // RVA: 0xE1 | Ordinal: 226
        void setPayload(int, struct EagleFM::Payload const &);

    // RVA: 0xE3 | Ordinal: 228
        void setRefuelFlow(bool, double);

    // RVA: 0xE5 | Ordinal: 230
        void setRigidContact(class ed::basic_string<char> const &, int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0xEA | Ordinal: 235
        void setUnderlyingSurface(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0xEC | Ordinal: 237
        void setUnlimitedFuel(bool);

    // RVA: 0xF2 | Ordinal: 243
        void simulate(double);

    // RVA: 0xF5 | Ordinal: 246
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x1A | Ordinal: 27
        void _FW190FM(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190FM_HPP
