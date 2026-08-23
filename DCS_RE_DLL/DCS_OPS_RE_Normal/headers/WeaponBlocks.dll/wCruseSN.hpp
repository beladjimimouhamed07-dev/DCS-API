#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wCruseSN
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCruseSN
{
public:

    // RVA: 0x497 | Ordinal: 1176
        void __getInputPorts(void);

    // RVA: 0x530 | Ordinal: 1329
        void __getOutputPorts(void);

    // RVA: 0x62F | Ordinal: 1584
        void calcStartCEP(void);

    // RVA: 0x70F | Ordinal: 1808
        void genError(void);

    // RVA: 0x7C7 | Ordinal: 1992
        void getDesc_(void);

    // RVA: 0x87B | Ordinal: 2172
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x978 | Ordinal: 2425
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAB6 | Ordinal: 2743
        void init_randoms(int);

    // RVA: 0xB1E | Ordinal: 2847
        void onSyncErr(class Math::Vector<3, double> const &);

    // RVA: 0xB59 | Ordinal: 2906
        void readInputData(void);

    // RVA: 0xBA7 | Ordinal: 2984
        void registerStateData(void);

    // RVA: 0xD6A | Ordinal: 3435
        void simulate(double);

    // RVA: 0x93 | Ordinal: 148
        void wCruseSN(class wCruseSN &&);

    // RVA: 0x94 | Ordinal: 149
        void wCruseSN(class wCruseSN const &);

    // RVA: 0x95 | Ordinal: 150
        void wCruseSN(class wCruseSNDescriptor const *, class wSimulationSystem *);

    // RVA: 0x217 | Ordinal: 536
        void _wCruseSN(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCRUSESN_HPP
