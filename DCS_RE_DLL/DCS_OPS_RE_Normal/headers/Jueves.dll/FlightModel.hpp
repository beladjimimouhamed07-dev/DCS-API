#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: FlightModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {

class FlightModel
{
public:

    // RVA: 0x28 | Ordinal: 41
        void FlightModel(class IwoLA *);

    // RVA: 0x2CA | Ordinal: 715
        void addBoostMixt(double);

    // RVA: 0x2CD | Ordinal: 718
        void addFuel(double);

    // RVA: 0x2D9 | Ordinal: 730
        void calcPayloadDrag(void);

    // RVA: 0x318 | Ordinal: 793
        void doProcessOverspeed(double);

    // RVA: 0x319 | Ordinal: 794
        void doProcessSlipstream(double &, double &, int &);

    // RVA: 0x31C | Ordinal: 797
        void doReduceIF(class EagleFM::ADElement *, float, float);

    // RVA: 0x31D | Ordinal: 798
        void doReduceIF(class EagleFM::ControlSurface *, float);

    // RVA: 0x31E | Ordinal: 799
        void doReduceIF(class EagleFM::ControlSurface *, class EagleFM::ControlSurfaceAD const *, class EagleFM::ADElement *, float);

    // RVA: 0x31F | Ordinal: 800
        void doSetArcadeFlight(bool);

    // RVA: 0x33A | Ordinal: 827
        void doSetImmortal(bool);

    // RVA: 0x33D | Ordinal: 830
        void doSetUnlimitedFuel(bool);

    // RVA: 0x350 | Ordinal: 849
        void doUpdateBuffetingAmplitudes(void);

    // RVA: 0x35A | Ordinal: 859
        void getAnyData(class ed::basic_string<char> const &, void *) const;

    // RVA: 0x35D | Ordinal: 862
        void getBoostMixt(void) const;

    // RVA: 0x35F | Ordinal: 864
        void getConsumablesList(class ed::vector<enum WorldGeneral::StockpileResources, class ed::allocator<enum WorldGeneral::StockpileResources>> *) const;

    // RVA: 0x364 | Ordinal: 869
        void getControlSystem(void);

    // RVA: 0x36B | Ordinal: 876
        void getDrawArgumentValue(int) const;

    // RVA: 0x36C | Ordinal: 877
        void getElectricSystem(void);

    // RVA: 0x36E | Ordinal: 879
        void getEngineParam(enum EagleFM::EngineIDs, int) const;

    // RVA: 0x36F | Ordinal: 880
        void getEngineRelativeRPM(enum EagleFM::EngineIDs, bool) const;

    // RVA: 0x370 | Ordinal: 881
        void getEngineRelativeThrust(enum EagleFM::EngineIDs) const;

    // RVA: 0x372 | Ordinal: 883
        void getExternalFuel(void) const;

    // RVA: 0x375 | Ordinal: 886
        void getFlowVelocity(int) const;

    // RVA: 0x37A | Ordinal: 891
        void getFuselageControlState(enum WorldGeneral::FuselageControlSurfaces) const;

    // RVA: 0x37B | Ordinal: 892
        void getGearDoorState(int) const;

    // RVA: 0x37C | Ordinal: 893
        void getGearPostState(int) const;

    // RVA: 0x383 | Ordinal: 900
        void getInternalFuel(void) const;

    // RVA: 0x38C | Ordinal: 909
        void getNextRandomDispersedValue(double) const;

    // RVA: 0x38D | Ordinal: 910
        void getNextRandomResult(float, double, double) const;

    // RVA: 0x38E | Ordinal: 911
        void getNextRandomResult(double) const;

    // RVA: 0x38F | Ordinal: 912
        void getNextRandomValue(void) const;

    // RVA: 0x390 | Ordinal: 913
        void getNoseGearPostYaw(void) const;

    // RVA: 0x3B2 | Ordinal: 947
        void getRigidBody(void) const;

    // RVA: 0x3B4 | Ordinal: 949
        void getSensorsSystem(void);

    // RVA: 0x3B6 | Ordinal: 951
        void getSlipstreamSetup(void) const;

    // RVA: 0x3B7 | Ordinal: 952
        void getStabilizerControlState(enum WorldGeneral::StabilizerControlSurfaces) const;

    // RVA: 0x3BC | Ordinal: 957
        void getStrutCompression(int) const;

    // RVA: 0x3BD | Ordinal: 958
        void getSurfaceNormalGearCoeff(int) const;

    // RVA: 0x3C7 | Ordinal: 968
        void getTailControlState(enum WorldGeneral::KeelControlSurfaces) const;

    // RVA: 0x3CB | Ordinal: 972
        void getTireCompression(int) const;

    // RVA: 0x3DB | Ordinal: 988
        void getWheelRotationPhase(int) const;

    // RVA: 0x3DC | Ordinal: 989
        void getWingControlState(enum WorldGeneral::WingControlSurfaces) const;

    // RVA: 0x3ED | Ordinal: 1006
        void initAirStart(void);

    // RVA: 0x3EE | Ordinal: 1007
        void initAirStart(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0x3F5 | Ordinal: 1014
        void initColdStart(void);

    // RVA: 0x3F6 | Ordinal: 1015
        void initColdStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0x3FD | Ordinal: 1022
        void initHotStart(void);

    // RVA: 0x3FE | Ordinal: 1023
        void initHotStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0x407 | Ordinal: 1032
        void initPreStart(void);

    // RVA: 0x441 | Ordinal: 1090
        void isSystemsDamaged(void) const;

    // RVA: 0x456 | Ordinal: 1111
        void netCompleteStateStream(class Mail::Stream &);

    // RVA: 0x4D2 | Ordinal: 1235
        void pushSoundEffect(int, int, double, double, double, double, double);

    // RVA: 0x4D3 | Ordinal: 1236
        void pushSoundEffect(int, double);

    // RVA: 0x4D6 | Ordinal: 1239
        void pushVisualEffect(enum WorldGeneral::EffectType);

    // RVA: 0x4D7 | Ordinal: 1240
        void pushVisualEffect(enum WorldGeneral::EffectType, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0x4D8 | Ordinal: 1241
        void pushVisualEffect(enum WorldGeneral::EffectType, int, double, double, double, double);

    // RVA: 0x4E2 | Ordinal: 1251
        void reduceIF(int, float, float);

    // RVA: 0x4FC | Ordinal: 1277
        void repair(void);

    // RVA: 0x52F | Ordinal: 1328
        void setAnyData(class ed::basic_string<char> const &, void *);

    // RVA: 0x530 | Ordinal: 1329
        void setArcadeFlight(bool);

    // RVA: 0x534 | Ordinal: 1333
        void setBoostMixt(double);

    // RVA: 0x536 | Ordinal: 1335
        void setCellIF(int, float, float);

    // RVA: 0x53B | Ordinal: 1340
        void setCommand(int, float);

    // RVA: 0x544 | Ordinal: 1349
        void setDrawArgumentValue(int, float);

    // RVA: 0x550 | Ordinal: 1361
        void setFuel(double);

    // RVA: 0x553 | Ordinal: 1364
        void setGearContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x558 | Ordinal: 1369
        void setImmortal(bool);

    // RVA: 0x570 | Ordinal: 1393
        void setPayload(int, struct EagleFM::Payload const &);

    // RVA: 0x57D | Ordinal: 1406
        void setRigidContact(class ed::basic_string<char> const &, int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x59C | Ordinal: 1437
        void setUnderlyingSurface(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x59D | Ordinal: 1438
        void setUnlimitedFuel(bool);

    // RVA: 0x5D5 | Ordinal: 1494
        void simulate(double);

    // RVA: 0x5FA | Ordinal: 1531
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0xF2 | Ordinal: 243
        void _FlightModel(void);
};

} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_FLIGHTMODEL_HPP
