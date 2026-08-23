#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wVStartAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wVStartAutopilot
{
public:

    // RVA: 0x4F4 | Ordinal: 1269
        void __getInputPorts(void);

    // RVA: 0x58D | Ordinal: 1422
        void __getOutputPorts(void);

    // RVA: 0x703 | Ordinal: 1796
        void fillVecFromDesc(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> *);

    // RVA: 0x792 | Ordinal: 1939
        void getDatCoeff(double, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> const &);

    // RVA: 0x824 | Ordinal: 2085
        void getDesc_(void);

    // RVA: 0x8D8 | Ordinal: 2265
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D5 | Ordinal: 2518
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBF5 | Ordinal: 3062
        void registerStateData(void);

    // RVA: 0xDB8 | Ordinal: 3513
        void simulate(double);

    // RVA: 0x1BC | Ordinal: 445
        void wVStartAutopilot(class wVStartAutopilot &&);

    // RVA: 0x1BD | Ordinal: 446
        void wVStartAutopilot(class wVStartAutopilot const &);

    // RVA: 0x1BE | Ordinal: 447
        void wVStartAutopilot(class wVStartAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x287 | Ordinal: 648
        void _wVStartAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WVSTARTAUTOPILOT_HPP
