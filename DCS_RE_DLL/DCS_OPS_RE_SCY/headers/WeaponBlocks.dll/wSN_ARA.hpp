#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x659 | Ordinal: 1626
        void changeAirTarget(void);

    // RVA: 0x65C | Ordinal: 1629
        void changeSensorMode(void);

    // RVA: 0x65F | Ordinal: 1632
        void changeSensorModeNet(void);

    // RVA: 0x814 | Ordinal: 2069
        void getDesc_(void);

    // RVA: 0x8C8 | Ordinal: 2249
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C5 | Ordinal: 2502
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAF7 | Ordinal: 2808
        void isTargetVisible(unsigned int const &, struct wRadarSensorBase::TargetSignal &);

    // RVA: 0xB71 | Ordinal: 2930
        void readInputData(void);

    // RVA: 0xBE8 | Ordinal: 3049
        void registerStateData(void);

    // RVA: 0xC68 | Ordinal: 3177
        void sendWarningToTarget(void);

    // RVA: 0xDAD | Ordinal: 3502
        void simulate(double);

    // RVA: 0xE1D | Ordinal: 3614
        void updateOutputs(void);

    // RVA: 0xE2A | Ordinal: 3627
        void updateTgtData(void);

    // RVA: 0x190 | Ordinal: 401
        void wSN_ARA(class wSN_ARA const &);

    // RVA: 0x191 | Ordinal: 402
        void wSN_ARA(class wSN_ARA_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x276 | Ordinal: 631
        void _wSN_ARA(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSN_ARA_HPP
