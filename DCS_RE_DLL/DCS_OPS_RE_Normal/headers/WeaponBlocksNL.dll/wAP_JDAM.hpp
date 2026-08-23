#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_JDAM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_JDAM
{
public:

    // RVA: 0x47D | Ordinal: 1150
        void __getInputPorts(void);

    // RVA: 0x516 | Ordinal: 1303
        void __getOutputPorts(void);

    // RVA: 0x5BF | Ordinal: 1472
        void calcBombPath(double);

    // RVA: 0x5EB | Ordinal: 1516
        void calcGuidanceCmd(double);

    // RVA: 0x618 | Ordinal: 1561
        void calcPitchYawCmd(double);

    // RVA: 0x62A | Ordinal: 1579
        void calcRollCmd(double);

    // RVA: 0x718 | Ordinal: 1817
        void getAvailableAccel(double, double);

    // RVA: 0x783 | Ordinal: 1924
        void getCx0(double);

    // RVA: 0x7A5 | Ordinal: 1958
        void getDesc_(void);

    // RVA: 0x858 | Ordinal: 2137
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x913 | Ordinal: 2324
        void getK1(double, double);

    // RVA: 0x918 | Ordinal: 2329
        void getK2(double, double);

    // RVA: 0x955 | Ordinal: 2390
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA39 | Ordinal: 2618
        void getRelativeDensity(double);

    // RVA: 0xAE0 | Ordinal: 2785
        void limit(double, double, double);

    // RVA: 0xB2B | Ordinal: 2860
        void readInputData(double);

    // RVA: 0xB70 | Ordinal: 2929
        void registerStateData(void);

    // RVA: 0xC7A | Ordinal: 3195
        void setImpactVec(void);

    // RVA: 0xCE3 | Ordinal: 3300
        void setTermData(class Math::Vector<3, double> const &);

    // RVA: 0xD09 | Ordinal: 3338
        void simulate(double);

    // RVA: 0x45 | Ordinal: 70
        void wAP_JDAM(class wAP_JDAM &&);

    // RVA: 0x46 | Ordinal: 71
        void wAP_JDAM(class wAP_JDAM const &);

    // RVA: 0x47 | Ordinal: 72
        void wAP_JDAM(class wAP_JDAM_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1FA | Ordinal: 507
        void _wAP_JDAM(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_JDAM_HPP
