#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x65A | Ordinal: 1627
        void changeAirTarget(void);

    // RVA: 0x65D | Ordinal: 1630
        void changeSensorMode(void);

    // RVA: 0x660 | Ordinal: 1633
        void changeSensorModeNet(void);

    // RVA: 0x815 | Ordinal: 2070
        void getDesc_(void);

    // RVA: 0x8C9 | Ordinal: 2250
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x945 | Ordinal: 2374
        void getObjectReflection(class MovingObject *, class osg::Vec3f);

    // RVA: 0x9C6 | Ordinal: 2503
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3B | Ordinal: 2620
        void getRadarAimError(void);

    // RVA: 0xAF8 | Ordinal: 2809
        void isTargetVisible(unsigned int const &, struct wRadarSensorBase::TargetSignal &);

    // RVA: 0xB72 | Ordinal: 2931
        void readInputData(void);

    // RVA: 0xBE9 | Ordinal: 3050
        void registerStateData(void);

    // RVA: 0xC69 | Ordinal: 3178
        void sendWarningToTarget(void);

    // RVA: 0xCB9 | Ordinal: 3258
        void setHRRMode(bool);

    // RVA: 0xDAE | Ordinal: 3503
        void simulate(double);

    // RVA: 0xE1E | Ordinal: 3615
        void updateOutputs(void);

    // RVA: 0xE2B | Ordinal: 3628
        void updateTgtData(void);

    // RVA: 0x192 | Ordinal: 403
        void wSN_ARG(class wSN_ARG const &);

    // RVA: 0x193 | Ordinal: 404
        void wSN_ARG(class wSN_ARG_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x277 | Ordinal: 632
        void _wSN_ARG(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSN_ARG_HPP
