#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSeeker
{
public:

    // RVA: 0x4EB | Ordinal: 1260
        void __getInputPorts(void);

    // RVA: 0x584 | Ordinal: 1413
        void __getOutputPorts(void);

    // RVA: 0x67A | Ordinal: 1659
        void checkSource(class viObject *);

    // RVA: 0x6E8 | Ordinal: 1769
        void discriminate(double);

    // RVA: 0x813 | Ordinal: 2068
        void getDesc_(void);

    // RVA: 0x834 | Ordinal: 2101
        void getGain(double);

    // RVA: 0x8C6 | Ordinal: 2247
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C3 | Ordinal: 2500
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA4F | Ordinal: 2640
        void getTargetLOS(class Math::Vector<3, double> &, double, unsigned char *);

    // RVA: 0xA60 | Ordinal: 2657
        void getWeighDirToSource(class viObject *, double, unsigned char *);

    // RVA: 0xAA4 | Ordinal: 2725
        void init_randoms(int);

    // RVA: 0xDC6 | Ordinal: 3527
        void update(double, unsigned char *);

    // RVA: 0xDDE | Ordinal: 3551
        void viObjectCheckHandler(class viObject *, class viSearch *, void *);

    // RVA: 0x1A0 | Ordinal: 417
        void wSeeker(class wSeeker &&);

    // RVA: 0x1A1 | Ordinal: 418
        void wSeeker(class wSeeker const &);

    // RVA: 0x1A2 | Ordinal: 419
        void wSeeker(class wSeekerDescriptor const *);

    // RVA: 0x27D | Ordinal: 638
        void _wSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSEEKER_HPP
