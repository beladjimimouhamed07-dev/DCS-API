#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x67D | Ordinal: 1662
        void checkSource(class viObject *);

    // RVA: 0x6EC | Ordinal: 1773
        void discriminate(double);

    // RVA: 0x81B | Ordinal: 2076
        void getDesc_(void);

    // RVA: 0x83C | Ordinal: 2109
        void getGain(double);

    // RVA: 0x8CF | Ordinal: 2256
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CC | Ordinal: 2509
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA5E | Ordinal: 2655
        void getTargetLOS(class Math::Vector<3, double> &, double, unsigned char *);

    // RVA: 0xA6F | Ordinal: 2672
        void getWeighDirToSource(class viObject *, double, unsigned char *);

    // RVA: 0xAC9 | Ordinal: 2762
        void init_randoms(int);

    // RVA: 0xE15 | Ordinal: 3606
        void update(double, unsigned char *);

    // RVA: 0xE2D | Ordinal: 3630
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSEEKER_HPP
