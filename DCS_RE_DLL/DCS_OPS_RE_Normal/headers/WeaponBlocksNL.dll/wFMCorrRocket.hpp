#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wFMCorrRocket
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMCorrRocket
{
public:

    // RVA: 0x4B9 | Ordinal: 1210
        void __getInputPorts(void);

    // RVA: 0x552 | Ordinal: 1363
        void __getOutputPorts(void);

    // RVA: 0x5E3 | Ordinal: 1508
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x643 | Ordinal: 1604
        void calcTorque_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x7E1 | Ordinal: 2018
        void getDesc_(void);

    // RVA: 0x894 | Ordinal: 2197
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x991 | Ordinal: 2450
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD87 | Ordinal: 3464
        void simulateFlight(double, double);

    // RVA: 0x109 | Ordinal: 266
        void wFMCorrRocket(class wFMCorrRocket &&);

    // RVA: 0x10A | Ordinal: 267
        void wFMCorrRocket(class wFMCorrRocket const &);

    // RVA: 0x10B | Ordinal: 268
        void wFMCorrRocket(class wFMCorrRocketDescriptor const *, class wSimulationSystem *);

    // RVA: 0x243 | Ordinal: 580
        void _wFMCorrRocket(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WFMCORRROCKET_HPP
