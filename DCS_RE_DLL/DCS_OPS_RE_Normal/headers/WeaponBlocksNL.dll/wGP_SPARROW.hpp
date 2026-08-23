#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGP_SPARROW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_SPARROW
{
public:

    // RVA: 0x4C4 | Ordinal: 1221
        void __getInputPorts(void);

    // RVA: 0x55D | Ordinal: 1374
        void __getOutputPorts(void);

    // RVA: 0x5D4 | Ordinal: 1493
        void calcEngBiasGuidance(double);

    // RVA: 0x63A | Ordinal: 1595
        void calcTerminalGuidance(double);

    // RVA: 0x6A2 | Ordinal: 1699
        void controlGuidanceMode(double);

    // RVA: 0x6A8 | Ordinal: 1705
        void controlSeeker(double);

    // RVA: 0x7EC | Ordinal: 2029
        void getDesc_(void);

    // RVA: 0x89F | Ordinal: 2208
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99C | Ordinal: 2461
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBA4 | Ordinal: 2981
        void registerStateData(void);

    // RVA: 0xC53 | Ordinal: 3156
        void setClosingVelocity(double);

    // RVA: 0xC61 | Ordinal: 3170
        void setEnglishBias(class Math::Vector<3, double> const &);

    // RVA: 0xC7E | Ordinal: 3199
        void setInertialVelocity(double);

    // RVA: 0xC86 | Ordinal: 3207
        void setLaunchMode(int);

    // RVA: 0xCB2 | Ordinal: 3251
        void setRangeAtLaunch(double);

    // RVA: 0xD43 | Ordinal: 3396
        void simulate(double);

    // RVA: 0x12D | Ordinal: 302
        void wGP_SPARROW(class wGP_SPARROW const &);

    // RVA: 0x12E | Ordinal: 303
        void wGP_SPARROW(class wGP_SPARROW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x251 | Ordinal: 594
        void _wGP_SPARROW(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGP_SPARROW_HPP
