#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAP_GBU39
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_GBU39
{
public:

    // RVA: 0x47C | Ordinal: 1149
        void __getInputPorts(void);

    // RVA: 0x515 | Ordinal: 1302
        void __getOutputPorts(void);

    // RVA: 0x617 | Ordinal: 1560
        void calcPitchYawCmd(class Math::Vector<3, double> const &);

    // RVA: 0x629 | Ordinal: 1578
        void calcRollCmd(double);

    // RVA: 0x7AC | Ordinal: 1965
        void getDesc_(void);

    // RVA: 0x860 | Ordinal: 2145
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95D | Ordinal: 2398
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB99 | Ordinal: 2970
        void registerStateData(void);

    // RVA: 0xD53 | Ordinal: 3412
        void simulate(double);

    // RVA: 0x42 | Ordinal: 67
        void wAP_GBU39(class wAP_GBU39 &&);

    // RVA: 0x43 | Ordinal: 68
        void wAP_GBU39(class wAP_GBU39 const &);

    // RVA: 0x44 | Ordinal: 69
        void wAP_GBU39(class wAP_GBU39_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F9 | Ordinal: 506
        void _wAP_GBU39(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_GBU39_HPP
