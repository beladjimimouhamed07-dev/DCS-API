#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAP_SPARROW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_SPARROW
{
public:

    // RVA: 0x47F | Ordinal: 1152
        void __getInputPorts(void);

    // RVA: 0x518 | Ordinal: 1305
        void __getOutputPorts(void);

    // RVA: 0x7A7 | Ordinal: 1960
        void getDesc_(void);

    // RVA: 0x85A | Ordinal: 2139
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x914 | Ordinal: 2325
        void getK1(double, double);

    // RVA: 0x919 | Ordinal: 2330
        void getK2(double, double);

    // RVA: 0x91B | Ordinal: 2332
        void getK3(double, double);

    // RVA: 0x957 | Ordinal: 2392
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA56 | Ordinal: 2647
        void getTm(double, double);

    // RVA: 0xA6A | Ordinal: 2667
        void handleInputData(double, double);

    // RVA: 0xB72 | Ordinal: 2931
        void registerStateData(void);

    // RVA: 0xC43 | Ordinal: 3140
        void setAltitudeBand(int);

    // RVA: 0xCB4 | Ordinal: 3253
        void setRollCommand(double);

    // RVA: 0x4B | Ordinal: 76
        void wAP_SPARROW(class wAP_SPARROW &&);

    // RVA: 0x4C | Ordinal: 77
        void wAP_SPARROW(class wAP_SPARROW const &);

    // RVA: 0x4D | Ordinal: 78
        void wAP_SPARROW(class wAP_SPARROW_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1FC | Ordinal: 509
        void _wAP_SPARROW(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_SPARROW_HPP
