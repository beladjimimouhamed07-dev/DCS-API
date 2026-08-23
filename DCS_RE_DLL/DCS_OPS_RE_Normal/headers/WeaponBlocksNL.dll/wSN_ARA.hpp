#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSN_ARA
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSN_ARA
{
public:

    // RVA: 0x4E4 | Ordinal: 1253
        void __getInputPorts(void);

    // RVA: 0x57D | Ordinal: 1406
        void __getOutputPorts(void);

    // RVA: 0x657 | Ordinal: 1624
        void changeAirTarget(void);

    // RVA: 0x65A | Ordinal: 1627
        void changeSensorMode(void);

    // RVA: 0x65D | Ordinal: 1630
        void changeSensorModeNet(void);

    // RVA: 0x80C | Ordinal: 2061
        void getDesc_(void);

    // RVA: 0x8BF | Ordinal: 2240
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BC | Ordinal: 2493
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAD0 | Ordinal: 2769
        void isTargetVisible(unsigned int const &, struct wRadarSensorBase::TargetSignal &);

    // RVA: 0xB47 | Ordinal: 2888
        void readInputData(void);

    // RVA: 0xBBE | Ordinal: 3007
        void registerStateData(void);

    // RVA: 0xC21 | Ordinal: 3106
        void sendWarningToTarget(void);

    // RVA: 0xD62 | Ordinal: 3427
        void simulate(double);

    // RVA: 0xDCE | Ordinal: 3535
        void updateOutputs(void);

    // RVA: 0xDDB | Ordinal: 3548
        void updateTgtData(void);

    // RVA: 0x190 | Ordinal: 401
        void wSN_ARA(class wSN_ARA const &);

    // RVA: 0x191 | Ordinal: 402
        void wSN_ARA(class wSN_ARA_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x276 | Ordinal: 631
        void _wSN_ARA(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSN_ARA_HPP
