#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGP_R27T
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_R27T
{
public:

    // RVA: 0x4C3 | Ordinal: 1220
        void __getInputPorts(void);

    // RVA: 0x55C | Ordinal: 1373
        void __getOutputPorts(void);

    // RVA: 0x5EE | Ordinal: 1519
        void calcGuidanceCommand(double);

    // RVA: 0x6A5 | Ordinal: 1702
        void controlGuidanceMode(double);

    // RVA: 0x6AB | Ordinal: 1708
        void controlSeeker(double);

    // RVA: 0x7F3 | Ordinal: 2036
        void getDesc_(void);

    // RVA: 0x8A7 | Ordinal: 2216
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A4 | Ordinal: 2469
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBCD | Ordinal: 3022
        void registerStateData(void);

    // RVA: 0xC9C | Ordinal: 3229
        void setClosingVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCCB | Ordinal: 3276
        void setLOSAngularRate(class Math::Vector<3, double> const &);

    // RVA: 0xCFB | Ordinal: 3324
        void setRangeAtLaunch(class Math::Vector<3, double> const &);

    // RVA: 0xD8D | Ordinal: 3470
        void simulate(double);

    // RVA: 0xE05 | Ordinal: 3590
        void tryConstLeadGuidance(void);

    // RVA: 0x12B | Ordinal: 300
        void wGP_R27T(class wGP_R27T const &);

    // RVA: 0x12C | Ordinal: 301
        void wGP_R27T(class wGP_R27T_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x250 | Ordinal: 593
        void _wGP_R27T(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_R27T_HPP
