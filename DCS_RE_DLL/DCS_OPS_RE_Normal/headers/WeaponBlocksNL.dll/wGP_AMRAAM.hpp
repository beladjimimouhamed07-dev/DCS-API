#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x69F | Ordinal: 1696
        void controlGuidanceMode(double);

    // RVA: 0x6A4 | Ordinal: 1701
        void controlSeeker(double);

    // RVA: 0x7E7 | Ordinal: 2024
        void getDesc_(void);

    // RVA: 0x89A | Ordinal: 2203
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x997 | Ordinal: 2456
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB3A | Ordinal: 2875
        void readInputData(double);

    // RVA: 0xB9F | Ordinal: 2976
        void registerStateData(void);

    // RVA: 0xC85 | Ordinal: 3206
        void setLaunchMode(int);

    // RVA: 0xD3E | Ordinal: 3391
        void simulate(double);

    // RVA: 0x123 | Ordinal: 292
        void wGP_AMRAAM(class wGP_AMRAAM const &);

    // RVA: 0x124 | Ordinal: 293
        void wGP_AMRAAM(class wGP_AMRAAM_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24C | Ordinal: 589
        void _wGP_AMRAAM(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGP_AMRAAM_HPP
