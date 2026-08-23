#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSN_ARG
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSN_ARG
{
public:

    // RVA: 0x4E5 | Ordinal: 1254
        void __getInputPorts(void);

    // RVA: 0x57E | Ordinal: 1407
        void __getOutputPorts(void);

    // RVA: 0x658 | Ordinal: 1625
        void changeAirTarget(void);

    // RVA: 0x65B | Ordinal: 1628
        void changeSensorMode(void);

    // RVA: 0x65E | Ordinal: 1631
        void changeSensorModeNet(void);

    // RVA: 0x80D | Ordinal: 2062
        void getDesc_(void);

    // RVA: 0x8C0 | Ordinal: 2241
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x93C | Ordinal: 2365
        void getObjectReflection(class MovingObject *, class osg::Vec3f);

    // RVA: 0x9BD | Ordinal: 2494
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA32 | Ordinal: 2611
        void getRadarAimError(void);

    // RVA: 0xAD1 | Ordinal: 2770
        void isTargetVisible(unsigned int const &, struct wRadarSensorBase::TargetSignal &);

    // RVA: 0xB48 | Ordinal: 2889
        void readInputData(void);

    // RVA: 0xBBF | Ordinal: 3008
        void registerStateData(void);

    // RVA: 0xC22 | Ordinal: 3107
        void sendWarningToTarget(void);

    // RVA: 0xC6F | Ordinal: 3184
        void setHRRMode(bool);

    // RVA: 0xD63 | Ordinal: 3428
        void simulate(double);

    // RVA: 0xDCF | Ordinal: 3536
        void updateOutputs(void);

    // RVA: 0xDDC | Ordinal: 3549
        void updateTgtData(void);

    // RVA: 0x192 | Ordinal: 403
        void wSN_ARG(class wSN_ARG const &);

    // RVA: 0x193 | Ordinal: 404
        void wSN_ARG(class wSN_ARG_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x277 | Ordinal: 632
        void _wSN_ARG(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSN_ARG_HPP
