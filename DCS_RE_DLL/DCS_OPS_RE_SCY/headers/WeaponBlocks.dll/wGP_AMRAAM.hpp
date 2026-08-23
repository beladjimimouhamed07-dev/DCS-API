#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGP_AMRAAM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_AMRAAM
{
public:

    // RVA: 0x4BF | Ordinal: 1216
        void __getInputPorts(void);

    // RVA: 0x558 | Ordinal: 1369
        void __getOutputPorts(void);

    // RVA: 0x5F8 | Ordinal: 1529
        void calcInertialGuidance(double);

    // RVA: 0x604 | Ordinal: 1541
        void calcLoftOmega(double);

    // RVA: 0x638 | Ordinal: 1593
        void calcTerminalGuidance(double);

    // RVA: 0x6A3 | Ordinal: 1700
        void controlGuidanceMode(double);

    // RVA: 0x6A8 | Ordinal: 1705
        void controlSeeker(double);

    // RVA: 0x7EF | Ordinal: 2032
        void getDesc_(void);

    // RVA: 0x8A3 | Ordinal: 2212
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A0 | Ordinal: 2465
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB64 | Ordinal: 2917
        void readInputData(double);

    // RVA: 0xBC9 | Ordinal: 3018
        void registerStateData(void);

    // RVA: 0xCCF | Ordinal: 3280
        void setLaunchMode(int);

    // RVA: 0xD89 | Ordinal: 3466
        void simulate(double);

    // RVA: 0x123 | Ordinal: 292
        void wGP_AMRAAM(class wGP_AMRAAM const &);

    // RVA: 0x124 | Ordinal: 293
        void wGP_AMRAAM(class wGP_AMRAAM_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24C | Ordinal: 589
        void _wGP_AMRAAM(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_AMRAAM_HPP
