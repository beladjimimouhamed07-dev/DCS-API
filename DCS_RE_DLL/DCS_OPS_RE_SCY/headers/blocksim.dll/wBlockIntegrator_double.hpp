#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wBlockIntegrator<double>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockIntegrator_double_
{
public:

    // RVA: 0x277 | Ordinal: 632
        void __getInputPorts(void);

    // RVA: 0x27F | Ordinal: 640
        void __getOutputPorts(void);

    // RVA: 0x290 | Ordinal: 657
        void calculate_dy(double, unsigned char *, unsigned char *);

    // RVA: 0x3EA | Ordinal: 1003
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x470 | Ordinal: 1137
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0x8B | Ordinal: 140
        void wBlockIntegrator_double_(class wBlockIntegrator<double> &&);

    // RVA: 0x8C | Ordinal: 141
        void wBlockIntegrator_double_(class wBlockIntegrator<double> const &);

    // RVA: 0x8D | Ordinal: 142
        void wBlockIntegrator_double_(class wBlockIntegratorDescriptor<double> const *);

    // RVA: 0x13C | Ordinal: 317
        void _wBlockIntegrator_double_(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WBLOCKINTEGRATOR_DOUBLE_HPP
