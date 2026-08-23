#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x709 | Ordinal: 1802
        void genError(void);

    // RVA: 0x7BF | Ordinal: 1984
        void getDesc_(void);

    // RVA: 0x872 | Ordinal: 2163
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96F | Ordinal: 2416
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA9C | Ordinal: 2717
        void init_randoms(int);

    // RVA: 0xAF6 | Ordinal: 2807
        void onSyncErr(class Math::Vector<3, double> const &);

    // RVA: 0xB2F | Ordinal: 2864
        void readInputData(void);

    // RVA: 0xB7D | Ordinal: 2942
        void registerStateData(void);

    // RVA: 0xD1F | Ordinal: 3360
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCRUSESN_HPP
