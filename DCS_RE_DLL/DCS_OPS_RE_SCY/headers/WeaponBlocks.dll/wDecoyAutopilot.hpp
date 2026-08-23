#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7D6 | Ordinal: 2007
        void getDesc_(void);

    // RVA: 0x843 | Ordinal: 2116
        void getHorControlVal(double, class Math::Vector<3, double>);

    // RVA: 0x88A | Ordinal: 2187
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x947 | Ordinal: 2376
        void getOmegaLOSVal(double);

    // RVA: 0x987 | Ordinal: 2440
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA41 | Ordinal: 2626
        void getRealH(void);

    // RVA: 0xA6C | Ordinal: 2669
        void getVertControlVal(double, class Math::Vector<3, double>);

    // RVA: 0xABA | Ordinal: 2747
        void init_randoms(int);

    // RVA: 0xBB6 | Ordinal: 2999
        void registerStateData(void);

    // RVA: 0xD3C | Ordinal: 3389
        void set_point(class Math::Vector<3, double> const &);

    // RVA: 0xD78 | Ordinal: 3449
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDECOYAUTOPILOT_HPP
