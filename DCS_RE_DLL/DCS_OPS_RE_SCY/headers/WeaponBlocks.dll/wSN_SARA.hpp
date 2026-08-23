#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x65B | Ordinal: 1628
        void changeAirTarget(void);

    // RVA: 0x65E | Ordinal: 1631
        void changeSensorMode(void);

    // RVA: 0x661 | Ordinal: 1634
        void changeSensorModeNet(void);

    // RVA: 0x818 | Ordinal: 2073
        void getDesc_(void);

    // RVA: 0x8CC | Ordinal: 2253
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C9 | Ordinal: 2506
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAFA | Ordinal: 2811
        void isTargetVisible(unsigned int, struct wRadarSensorBase::TargetSignal &);

    // RVA: 0xB73 | Ordinal: 2932
        void readInputData(void);

    // RVA: 0xBEC | Ordinal: 3053
        void registerStateData(void);

    // RVA: 0xC6B | Ordinal: 3180
        void sendWarningToTarget(void);

    // RVA: 0xDB1 | Ordinal: 3506
        void simulate(double);

    // RVA: 0xE1F | Ordinal: 3616
        void updateOutputs(void);

    // RVA: 0xE2C | Ordinal: 3629
        void updateTgtData(void);

    // RVA: 0x199 | Ordinal: 410
        void wSN_SARA(class wSN_SARA const &);

    // RVA: 0x19A | Ordinal: 411
        void wSN_SARA(class wSN_SARA_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x27A | Ordinal: 635
        void _wSN_SARA(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSN_SARA_HPP
