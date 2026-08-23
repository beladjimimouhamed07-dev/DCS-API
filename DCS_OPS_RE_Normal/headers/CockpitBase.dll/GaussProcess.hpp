#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GaussProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class GaussProcess
{
public:

    // RVA: 0x47 | Ordinal: 72
        void GaussProcess(double, double);

    // RVA: 0x48 | Ordinal: 73
        void GaussProcess(void);

    // RVA: 0xAB1 | Ordinal: 2738
        void clear(void);

    // RVA: 0xC29 | Ordinal: 3114
        void gauss(void);

    // RVA: 0xC2B | Ordinal: 3116
        void get(void) const;

    // RVA: 0xE7F | Ordinal: 3712
        void get_Tx(void) const;

    // RVA: 0x10B4 | Ordinal: 4277
        void get_sx(void) const;

    // RVA: 0x1521 | Ordinal: 5410
        void process(double);

    // RVA: 0x1811 | Ordinal: 6162
        void set_Tx(double);

    // RVA: 0x1942 | Ordinal: 6467
        void set_sx(double);

    // RVA: 0x19CC | Ordinal: 6605
        void start(void);
};

// DCS_OPS_RE_COCKPITBASE.DLL_GAUSSPROCESS_HPP
