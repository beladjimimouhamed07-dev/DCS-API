#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6A6 | Ordinal: 1703
        void controlGuidanceMode(double);

    // RVA: 0x6AC | Ordinal: 1709
        void controlSeeker(double);

    // RVA: 0x7F4 | Ordinal: 2037
        void getDesc_(void);

    // RVA: 0x8A8 | Ordinal: 2217
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A5 | Ordinal: 2470
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBCE | Ordinal: 3023
        void registerStateData(void);

    // RVA: 0xC9D | Ordinal: 3230
        void setClosingVelocity(double);

    // RVA: 0xCAB | Ordinal: 3244
        void setEnglishBias(class Math::Vector<3, double> const &);

    // RVA: 0xCC8 | Ordinal: 3273
        void setInertialVelocity(double);

    // RVA: 0xCD0 | Ordinal: 3281
        void setLaunchMode(int);

    // RVA: 0xCFC | Ordinal: 3325
        void setRangeAtLaunch(double);

    // RVA: 0xD8E | Ordinal: 3471
        void simulate(double);

    // RVA: 0x12D | Ordinal: 302
        void wGP_SPARROW(class wGP_SPARROW const &);

    // RVA: 0x12E | Ordinal: 303
        void wGP_SPARROW(class wGP_SPARROW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x251 | Ordinal: 594
        void _wGP_SPARROW(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_SPARROW_HPP
