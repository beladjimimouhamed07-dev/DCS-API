#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGP_R27R
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGP_R27R
{
public:

    // RVA: 0x4C2 | Ordinal: 1219
        void __getInputPorts(void);

    // RVA: 0x55B | Ordinal: 1372
        void __getOutputPorts(void);

    // RVA: 0x5F9 | Ordinal: 1530
        void calcInertialGuidance(double);

    // RVA: 0x639 | Ordinal: 1594
        void calcTerminalGuidance(double);

    // RVA: 0x6A0 | Ordinal: 1697
        void controlGuidanceMode(double);

    // RVA: 0x6A6 | Ordinal: 1703
        void controlSeeker(double);

    // RVA: 0x7EA | Ordinal: 2027
        void getDesc_(void);

    // RVA: 0x89D | Ordinal: 2206
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x929 | Ordinal: 2346
        void getLockRange(void);

    // RVA: 0x99A | Ordinal: 2459
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA67 | Ordinal: 2664
        void handleDataLinkMsg(struct INS::DataLinkMessage<3, double> *);

    // RVA: 0xBA2 | Ordinal: 2979
        void registerStateData(void);

    // RVA: 0xC51 | Ordinal: 3154
        void setClosingVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCB0 | Ordinal: 3249
        void setRangeAtLaunch(class Math::Vector<3, double> const &);

    // RVA: 0xD41 | Ordinal: 3394
        void simulate(double);

    // RVA: 0xDB9 | Ordinal: 3514
        void tryConstLeadGuidance(void);

    // RVA: 0x129 | Ordinal: 298
        void wGP_R27R(class wGP_R27R const &);

    // RVA: 0x12A | Ordinal: 299
        void wGP_R27R(class wGP_R27R_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24F | Ordinal: 592
        void _wGP_R27R(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGP_R27R_HPP
