#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x825 | Ordinal: 2086
        void getDesc_(void);

    // RVA: 0x8D9 | Ordinal: 2266
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D6 | Ordinal: 2519
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA99 | Ordinal: 2714
        void initManualControl(bool);

    // RVA: 0xAA0 | Ordinal: 2721
        void initPilotInput(class Math::Vector<3, double> const &);

    // RVA: 0xBF6 | Ordinal: 3063
        void registerStateData(void);

    // RVA: 0xDB9 | Ordinal: 3514
        void simulate(double);

    // RVA: 0xDE1 | Ordinal: 3554
        void squareToCircle(class Math::Vector<3, double> const &, class Math::Vector<3, double> &);

    // RVA: 0x1BF | Ordinal: 448
        void wWCSBullpupMCLOS(class wWCSBullpupMCLOS const &);

    // RVA: 0x1C0 | Ordinal: 449
        void wWCSBullpupMCLOS(class wWCSBullpupMCLOSDescriptor const *, class wSimulationSystem *);

    // RVA: 0x288 | Ordinal: 649
        void _wWCSBullpupMCLOS(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSBULLPUPMCLOS_HPP
