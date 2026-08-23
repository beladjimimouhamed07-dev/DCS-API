#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_AMRAAM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_AMRAAM
{
public:

    // RVA: 0x478 | Ordinal: 1145
        void __getInputPorts(void);

    // RVA: 0x511 | Ordinal: 1298
        void __getOutputPorts(void);

    // RVA: 0x5E8 | Ordinal: 1513
        void calcGuidanceCmd(double);

    // RVA: 0x614 | Ordinal: 1557
        void calcPitchYawCmd(double);

    // RVA: 0x626 | Ordinal: 1575
        void calcRollCmd(double);

    // RVA: 0x70F | Ordinal: 1808
        void getAccelLimit(double, double);

    // RVA: 0x7A0 | Ordinal: 1953
        void getDesc_(void);

    // RVA: 0x853 | Ordinal: 2132
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x911 | Ordinal: 2322
        void getK1(double, double);

    // RVA: 0x917 | Ordinal: 2328
        void getK2(double, double);

    // RVA: 0x950 | Ordinal: 2385
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA38 | Ordinal: 2617
        void getRelativeDensity(double);

    // RVA: 0xA4B | Ordinal: 2636
        void getT1(double, double);

    // RVA: 0xADE | Ordinal: 2783
        void limit(double, double, double);

    // RVA: 0xB28 | Ordinal: 2857
        void readInputData(double);

    // RVA: 0xB6B | Ordinal: 2924
        void registerStateData(void);

    // RVA: 0xC8A | Ordinal: 3211
        void setLoft(int);

    // RVA: 0xD04 | Ordinal: 3333
        void simulate(double);

    // RVA: 0x36 | Ordinal: 55
        void wAP_AMRAAM(class wAP_AMRAAM &&);

    // RVA: 0x37 | Ordinal: 56
        void wAP_AMRAAM(class wAP_AMRAAM const &);

    // RVA: 0x38 | Ordinal: 57
        void wAP_AMRAAM(class wAP_AMRAAM_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F5 | Ordinal: 502
        void _wAP_AMRAAM(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_AMRAAM_HPP
