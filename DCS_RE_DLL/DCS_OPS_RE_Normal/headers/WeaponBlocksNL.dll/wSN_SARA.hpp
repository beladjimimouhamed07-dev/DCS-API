#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSN_SARA
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSN_SARA
{
public:

    // RVA: 0x4E8 | Ordinal: 1257
        void __getInputPorts(void);

    // RVA: 0x581 | Ordinal: 1410
        void __getOutputPorts(void);

    // RVA: 0x659 | Ordinal: 1626
        void changeAirTarget(void);

    // RVA: 0x65C | Ordinal: 1629
        void changeSensorMode(void);

    // RVA: 0x65F | Ordinal: 1632
        void changeSensorModeNet(void);

    // RVA: 0x810 | Ordinal: 2065
        void getDesc_(void);

    // RVA: 0x8C3 | Ordinal: 2244
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C0 | Ordinal: 2497
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAD3 | Ordinal: 2772
        void isTargetVisible(unsigned int, struct wRadarSensorBase::TargetSignal &);

    // RVA: 0xB49 | Ordinal: 2890
        void readInputData(void);

    // RVA: 0xBC2 | Ordinal: 3011
        void registerStateData(void);

    // RVA: 0xC24 | Ordinal: 3109
        void sendWarningToTarget(void);

    // RVA: 0xD66 | Ordinal: 3431
        void simulate(double);

    // RVA: 0xDD0 | Ordinal: 3537
        void updateOutputs(void);

    // RVA: 0xDDD | Ordinal: 3550
        void updateTgtData(void);

    // RVA: 0x199 | Ordinal: 410
        void wSN_SARA(class wSN_SARA const &);

    // RVA: 0x19A | Ordinal: 411
        void wSN_SARA(class wSN_SARA_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x27A | Ordinal: 635
        void _wSN_SARA(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSN_SARA_HPP
