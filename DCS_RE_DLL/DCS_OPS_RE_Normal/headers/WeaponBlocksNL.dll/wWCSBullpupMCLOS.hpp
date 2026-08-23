#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wWCSBullpupMCLOS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSBullpupMCLOS
{
public:

    // RVA: 0x4F5 | Ordinal: 1270
        void __getInputPorts(void);

    // RVA: 0x58E | Ordinal: 1423
        void __getOutputPorts(void);

    // RVA: 0x81D | Ordinal: 2078
        void getDesc_(void);

    // RVA: 0x8D0 | Ordinal: 2257
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CD | Ordinal: 2510
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA83 | Ordinal: 2692
        void initManualControl(bool);

    // RVA: 0xA8A | Ordinal: 2699
        void initPilotInput(class Math::Vector<3, double> const &);

    // RVA: 0xBCC | Ordinal: 3021
        void registerStateData(void);

    // RVA: 0xD6E | Ordinal: 3439
        void simulate(double);

    // RVA: 0xD96 | Ordinal: 3479
        void squareToCircle(class Math::Vector<3, double> const &, class Math::Vector<3, double> &);

    // RVA: 0x1BF | Ordinal: 448
        void wWCSBullpupMCLOS(class wWCSBullpupMCLOS const &);

    // RVA: 0x1C0 | Ordinal: 449
        void wWCSBullpupMCLOS(class wWCSBullpupMCLOSDescriptor const *, class wSimulationSystem *);

    // RVA: 0x288 | Ordinal: 649
        void _wWCSBullpupMCLOS(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WWCSBULLPUPMCLOS_HPP
