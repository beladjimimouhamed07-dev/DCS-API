#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAP_AGM130
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_AGM130
{
public:

    // RVA: 0x476 | Ordinal: 1143
        void __getInputPorts(void);

    // RVA: 0x50F | Ordinal: 1296
        void __getOutputPorts(void);

    // RVA: 0x5D6 | Ordinal: 1495
        void calcFinCmdRot(void);

    // RVA: 0x610 | Ordinal: 1553
        void calcPitchCommand(double);

    // RVA: 0x619 | Ordinal: 1562
        void calcPitchYawCmdRot(class Math::Vector<3, double> const &);

    // RVA: 0x653 | Ordinal: 1620
        void calcYawCommand(double);

    // RVA: 0x7A6 | Ordinal: 1959
        void getDesc_(void);

    // RVA: 0x85A | Ordinal: 2139
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x957 | Ordinal: 2392
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB93 | Ordinal: 2964
        void registerStateData(void);

    // RVA: 0xD4D | Ordinal: 3406
        void simulate(double);

    // RVA: 0x31 | Ordinal: 50
        void wAP_AGM130(class wAP_AGM130 &&);

    // RVA: 0x32 | Ordinal: 51
        void wAP_AGM130(class wAP_AGM130 const &);

    // RVA: 0x33 | Ordinal: 52
        void wAP_AGM130(class wAP_AGM130_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1F3 | Ordinal: 500
        void _wAP_AGM130(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_AGM130_HPP
