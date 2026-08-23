#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x716 | Ordinal: 1815
        void getAccelLimit(double, double);

    // RVA: 0x7A8 | Ordinal: 1961
        void getDesc_(void);

    // RVA: 0x85C | Ordinal: 2141
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x91A | Ordinal: 2331
        void getK1(double, double);

    // RVA: 0x920 | Ordinal: 2337
        void getK2(double, double);

    // RVA: 0x959 | Ordinal: 2394
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA43 | Ordinal: 2628
        void getRelativeDensity(double);

    // RVA: 0xA5A | Ordinal: 2651
        void getT1(double, double);

    // RVA: 0xB05 | Ordinal: 2822
        void limit(double, double, double);

    // RVA: 0xB52 | Ordinal: 2899
        void readInputData(double);

    // RVA: 0xB95 | Ordinal: 2966
        void registerStateData(void);

    // RVA: 0xCD4 | Ordinal: 3285
        void setLoft(int);

    // RVA: 0xD4F | Ordinal: 3408
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_AMRAAM_HPP
