#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6A1 | Ordinal: 1698
        void controlGuidanceMode(double);

    // RVA: 0x6A7 | Ordinal: 1704
        void controlSeeker(double);

    // RVA: 0x7EB | Ordinal: 2028
        void getDesc_(void);

    // RVA: 0x89E | Ordinal: 2207
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99B | Ordinal: 2460
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBA3 | Ordinal: 2980
        void registerStateData(void);

    // RVA: 0xC52 | Ordinal: 3155
        void setClosingVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xC81 | Ordinal: 3202
        void setLOSAngularRate(class Math::Vector<3, double> const &);

    // RVA: 0xCB1 | Ordinal: 3250
        void setRangeAtLaunch(class Math::Vector<3, double> const &);

    // RVA: 0xD42 | Ordinal: 3395
        void simulate(double);

    // RVA: 0xDBA | Ordinal: 3515
        void tryConstLeadGuidance(void);

    // RVA: 0x12B | Ordinal: 300
        void wGP_R27T(class wGP_R27T const &);

    // RVA: 0x12C | Ordinal: 301
        void wGP_R27T(class wGP_R27T_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x250 | Ordinal: 593
        void _wGP_R27T(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGP_R27T_HPP
