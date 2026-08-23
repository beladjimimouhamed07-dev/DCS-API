#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6FD | Ordinal: 1790
        void fillVecFromDesc(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> *);

    // RVA: 0x78A | Ordinal: 1931
        void getDatCoeff(double, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> const &);

    // RVA: 0x81C | Ordinal: 2077
        void getDesc_(void);

    // RVA: 0x8CF | Ordinal: 2256
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CC | Ordinal: 2509
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBCB | Ordinal: 3020
        void registerStateData(void);

    // RVA: 0xD6D | Ordinal: 3438
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WVSTARTAUTOPILOT_HPP
