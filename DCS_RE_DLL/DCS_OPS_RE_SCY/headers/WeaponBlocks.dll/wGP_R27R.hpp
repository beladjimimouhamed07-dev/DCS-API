#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6A4 | Ordinal: 1701
        void controlGuidanceMode(double);

    // RVA: 0x6AA | Ordinal: 1707
        void controlSeeker(double);

    // RVA: 0x7F2 | Ordinal: 2035
        void getDesc_(void);

    // RVA: 0x8A6 | Ordinal: 2215
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x932 | Ordinal: 2355
        void getLockRange(void);

    // RVA: 0x9A3 | Ordinal: 2468
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA76 | Ordinal: 2679
        void handleDataLinkMsg(struct INS::DataLinkMessage<3, double> *);

    // RVA: 0xBCC | Ordinal: 3021
        void registerStateData(void);

    // RVA: 0xC9B | Ordinal: 3228
        void setClosingVelocity(class Math::Vector<3, double> const &);

    // RVA: 0xCFA | Ordinal: 3323
        void setRangeAtLaunch(class Math::Vector<3, double> const &);

    // RVA: 0xD8C | Ordinal: 3469
        void simulate(double);

    // RVA: 0xE04 | Ordinal: 3589
        void tryConstLeadGuidance(void);

    // RVA: 0x129 | Ordinal: 298
        void wGP_R27R(class wGP_R27R const &);

    // RVA: 0x12A | Ordinal: 299
        void wGP_R27R(class wGP_R27R_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24F | Ordinal: 592
        void _wGP_R27R(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGP_R27R_HPP
