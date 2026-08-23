#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDecoyAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDecoyAutopilot
{
public:

    // RVA: 0x4A6 | Ordinal: 1191
        void __getInputPorts(void);

    // RVA: 0x53F | Ordinal: 1344
        void __getOutputPorts(void);

    // RVA: 0x7CE | Ordinal: 1999
        void getDesc_(void);

    // RVA: 0x83B | Ordinal: 2108
        void getHorControlVal(double, class Math::Vector<3, double>);

    // RVA: 0x881 | Ordinal: 2178
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x93E | Ordinal: 2367
        void getOmegaLOSVal(double);

    // RVA: 0x97E | Ordinal: 2431
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA36 | Ordinal: 2615
        void getRealH(void);

    // RVA: 0xA5D | Ordinal: 2654
        void getVertControlVal(double, class Math::Vector<3, double>);

    // RVA: 0xB8C | Ordinal: 2957
        void registerStateData(void);

    // RVA: 0xCF1 | Ordinal: 3314
        void set_point(class Math::Vector<3, double> const &);

    // RVA: 0xD2D | Ordinal: 3374
        void simulate(double);

    // RVA: 0xBE | Ordinal: 191
        void wDecoyAutopilot(class wDecoyAutopilot &&);

    // RVA: 0xBF | Ordinal: 192
        void wDecoyAutopilot(class wDecoyAutopilot const &);

    // RVA: 0xC0 | Ordinal: 193
        void wDecoyAutopilot(class wDecoyAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x226 | Ordinal: 551
        void _wDecoyAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDECOYAUTOPILOT_HPP
