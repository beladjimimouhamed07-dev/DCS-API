#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: JetEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class JetEngine
{
public:

    // RVA: 0x328 | Ordinal: 809
        void AccelerateTurboCompressorRPM(double);

    // RVA: 0x35F | Ordinal: 864
        void Construct(void);

    // RVA: 0x3BD | Ordinal: 958
        void Create(void);

    // RVA: 0x7E | Ordinal: 127
        void JetEngine(class AFM::JetEngine &&);

    // RVA: 0x7F | Ordinal: 128
        void JetEngine(class AFM::JetEngine const &);

    // RVA: 0x80 | Ordinal: 129
        void JetEngine(void);

    // RVA: 0x47A | Ordinal: 1147
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x537 | Ordinal: 1336
        void calcInputAtmosphereTemperatureAndPressureAndDensity(void);

    // RVA: 0x538 | Ordinal: 1337
        void calcInputAxialDynamicPressure(void);

    // RVA: 0x539 | Ordinal: 1338
        void calcInputAxialMach(void);

    // RVA: 0x53A | Ordinal: 1339
        void calcInputSpeed_ocs(void);

    // RVA: 0x549 | Ordinal: 1354
        void calcOwnJetEngineMoment_scs(void);

    // RVA: 0x562 | Ordinal: 1379
        void calcTurboCompressorRotateAccelerationByTurboCompressorMoment(void);

    // RVA: 0x5BC | Ordinal: 1469
        void getFuelConsumption(double *);

    // RVA: 0x5BD | Ordinal: 1470
        void getFuelFlag(int *);

    // RVA: 0x617 | Ordinal: 1560
        void getIPointerJetEngineOrientation(class AFM::Orientation **);

    // RVA: 0x618 | Ordinal: 1561
        void getIPointerJetEnginePosition(class AFM::Position **);

    // RVA: 0x682 | Ordinal: 1667
        void getIPointerStructureDynamicBody(class AFM::DynamicBody **);

    // RVA: 0x698 | Ordinal: 1689
        void getInletDuctPosition_scs(double *);

    // RVA: 0x699 | Ordinal: 1690
        void getInputAtmosphereDensity(double *);

    // RVA: 0x69A | Ordinal: 1691
        void getInputAtmospherePressure(double *);

    // RVA: 0x69B | Ordinal: 1692
        void getInputAtmosphereTemperature(double *);

    // RVA: 0x69C | Ordinal: 1693
        void getInputAxialDynamicPressure(double *);

    // RVA: 0x69D | Ordinal: 1694
        void getInputAxialMach(double *);

    // RVA: 0x6A0 | Ordinal: 1697
        void getInputSpeed_ocs(double *);

    // RVA: 0x6A5 | Ordinal: 1702
        void getJetPipeAzimuth_scs(double *);

    // RVA: 0x6A6 | Ordinal: 1703
        void getJetPipeElevation_scs(double *);

    // RVA: 0x6E3 | Ordinal: 1764
        void getMode(int *);

    // RVA: 0x6F5 | Ordinal: 1782
        void getOwnJetEngineMoment_scs(double *);

    // RVA: 0x728 | Ordinal: 1833
        void getRotationPhase(double *);

    // RVA: 0x749 | Ordinal: 1866
        void getTemperatureAfterTurbine(double *);

    // RVA: 0x74A | Ordinal: 1867
        void getThrottle(double *);

    // RVA: 0x74B | Ordinal: 1868
        void getThrust(double *);

    // RVA: 0x74C | Ordinal: 1869
        void getThrustPosition_scs(double *);

    // RVA: 0x74D | Ordinal: 1870
        void getThrust_scs(double *);

    // RVA: 0x755 | Ordinal: 1878
        void getTurboCompressorInertia(double *);

    // RVA: 0x756 | Ordinal: 1879
        void getTurboCompressorMoment(double *);

    // RVA: 0x757 | Ordinal: 1880
        void getTurboCompressorRPM(double *);

    // RVA: 0x758 | Ordinal: 1881
        void getTurboCompressorRotateAcceleration(double *);

    // RVA: 0x7C4 | Ordinal: 1989
        void setFuelConsumption(double);

    // RVA: 0x7C5 | Ordinal: 1990
        void setFuelOff(void);

    // RVA: 0x7C6 | Ordinal: 1991
        void setFuelOn(void);

    // RVA: 0x7E1 | Ordinal: 2018
        void setInletDuctPosition_scs(double *);

    // RVA: 0x7E2 | Ordinal: 2019
        void setInputAtmosphereDensity(double);

    // RVA: 0x7E3 | Ordinal: 2020
        void setInputAtmospherePressure(double);

    // RVA: 0x7E4 | Ordinal: 2021
        void setInputAtmosphereTemperature(double);

    // RVA: 0x7E5 | Ordinal: 2022
        void setInputAxialDynamicPressure(double);

    // RVA: 0x7E6 | Ordinal: 2023
        void setInputAxialMach(double);

    // RVA: 0x7E9 | Ordinal: 2026
        void setInputSpeed_ocs(double *);

    // RVA: 0x7ED | Ordinal: 2030
        void setJetPipeAzimuth_scs(double);

    // RVA: 0x7EE | Ordinal: 2031
        void setJetPipeElevation_scs(double);

    // RVA: 0x82C | Ordinal: 2093
        void setMode(int);

    // RVA: 0x83B | Ordinal: 2108
        void setOwnJetEngineMoment_scs(double *);

    // RVA: 0x88B | Ordinal: 2188
        void setRightRotation(void);

    // RVA: 0x8CF | Ordinal: 2256
        void setTemperatureAfterTurbine(double);

    // RVA: 0x8D0 | Ordinal: 2257
        void setThrottle(double);

    // RVA: 0x8D1 | Ordinal: 2258
        void setThrust(double);

    // RVA: 0x8D2 | Ordinal: 2259
        void setThrustPosition_scs(double *);

    // RVA: 0x8D3 | Ordinal: 2260
        void setThrust_scs(double *);

    // RVA: 0x8DC | Ordinal: 2269
        void setTurboCompressorInertia(double);

    // RVA: 0x8DD | Ordinal: 2270
        void setTurboCompressorMoment(double);

    // RVA: 0x8DE | Ordinal: 2271
        void setTurboCompressorRPM(double);

    // RVA: 0x8DF | Ordinal: 2272
        void setTurboCompressorRotateAcceleration(double);

    // RVA: 0x12C | Ordinal: 301
        void _JetEngine(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_JETENGINE_HPP
