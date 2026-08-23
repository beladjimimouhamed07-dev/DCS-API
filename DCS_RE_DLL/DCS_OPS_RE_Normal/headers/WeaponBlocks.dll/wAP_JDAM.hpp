#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x71F | Ordinal: 1824
        void getAvailableAccel(double, double);

    // RVA: 0x78B | Ordinal: 1932
        void getCx0(double);

    // RVA: 0x7AD | Ordinal: 1966
        void getDesc_(void);

    // RVA: 0x861 | Ordinal: 2146
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x91C | Ordinal: 2333
        void getK1(double, double);

    // RVA: 0x921 | Ordinal: 2338
        void getK2(double, double);

    // RVA: 0x95E | Ordinal: 2399
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA44 | Ordinal: 2629
        void getRelativeDensity(double);

    // RVA: 0xB07 | Ordinal: 2824
        void limit(double, double, double);

    // RVA: 0xB55 | Ordinal: 2902
        void readInputData(double);

    // RVA: 0xB9A | Ordinal: 2971
        void registerStateData(void);

    // RVA: 0xCC4 | Ordinal: 3269
        void setImpactVec(void);

    // RVA: 0xD2E | Ordinal: 3375
        void setTermData(class Math::Vector<3, double> const &);

    // RVA: 0xD54 | Ordinal: 3413
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_JDAM_HPP
