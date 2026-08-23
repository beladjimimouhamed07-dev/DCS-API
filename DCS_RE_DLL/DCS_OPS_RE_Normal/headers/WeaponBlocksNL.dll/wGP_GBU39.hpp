#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x785 | Ordinal: 1926
        void getCx0(double);

    // RVA: 0x7E8 | Ordinal: 2025
        void getDesc_(void);

    // RVA: 0x89B | Ordinal: 2204
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x998 | Ordinal: 2457
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA3A | Ordinal: 2619
        void getRelativeDensity(double);

    // RVA: 0xA9A | Ordinal: 2715
        void initWaypoints(void);

    // RVA: 0xBA0 | Ordinal: 2977
        void registerStateData(void);

    // RVA: 0xC54 | Ordinal: 3157
        void setCurrentWaypoint(void);

    // RVA: 0xC78 | Ordinal: 3193
        void setIinitialCondition(double);

    // RVA: 0xC7B | Ordinal: 3196
        void setImpactVec(void);

    // RVA: 0xCE4 | Ordinal: 3301
        void setTermData(class Math::Vector<3, double> const &);

    // RVA: 0xD3F | Ordinal: 3392
        void simulate(double);

    // RVA: 0x125 | Ordinal: 294
        void wGP_GBU39(class wGP_GBU39 const &);

    // RVA: 0x126 | Ordinal: 295
        void wGP_GBU39(class wGP_GBU39_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24D | Ordinal: 590
        void _wGP_GBU39(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGP_GBU39_HPP
