#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7AF | Ordinal: 1968
        void getDesc_(void);

    // RVA: 0x863 | Ordinal: 2148
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x91D | Ordinal: 2334
        void getK1(double, double);

    // RVA: 0x922 | Ordinal: 2339
        void getK2(double, double);

    // RVA: 0x924 | Ordinal: 2341
        void getK3(double, double);

    // RVA: 0x960 | Ordinal: 2401
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA65 | Ordinal: 2662
        void getTm(double, double);

    // RVA: 0xA79 | Ordinal: 2682
        void handleInputData(double, double);

    // RVA: 0xB9C | Ordinal: 2973
        void registerStateData(void);

    // RVA: 0xC8D | Ordinal: 3214
        void setAltitudeBand(int);

    // RVA: 0xCFE | Ordinal: 3327
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_SPARROW_HPP
