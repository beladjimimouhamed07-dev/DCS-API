#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGP_GBU39
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_GBU39
{
public:

    // RVA: 0x4C0 | Ordinal: 1217
        void __getInputPorts(void);

    // RVA: 0x559 | Ordinal: 1370
        void __getOutputPorts(void);

    // RVA: 0x5BA | Ordinal: 1467
        void calcAccelCmd(class Math::Vector<3, double> const &);

    // RVA: 0x5C0 | Ordinal: 1473
        void calcBombPath(void);

    // RVA: 0x78D | Ordinal: 1934
        void getCx0(double);

    // RVA: 0x7F0 | Ordinal: 2033
        void getDesc_(void);

    // RVA: 0x8A4 | Ordinal: 2213
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A1 | Ordinal: 2466
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA45 | Ordinal: 2630
        void getRelativeDensity(double);

    // RVA: 0xAB0 | Ordinal: 2737
        void initWaypoints(void);

    // RVA: 0xBCA | Ordinal: 3019
        void registerStateData(void);

    // RVA: 0xC9E | Ordinal: 3231
        void setCurrentWaypoint(void);

    // RVA: 0xCC2 | Ordinal: 3267
        void setIinitialCondition(double);

    // RVA: 0xCC5 | Ordinal: 3270
        void setImpactVec(void);

    // RVA: 0xD2F | Ordinal: 3376
        void setTermData(class Math::Vector<3, double> const &);

    // RVA: 0xD8A | Ordinal: 3467
        void simulate(double);

    // RVA: 0x125 | Ordinal: 294
        void wGP_GBU39(class wGP_GBU39 const &);

    // RVA: 0x126 | Ordinal: 295
        void wGP_GBU39(class wGP_GBU39_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24D | Ordinal: 590
        void _wGP_GBU39(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_GBU39_HPP
