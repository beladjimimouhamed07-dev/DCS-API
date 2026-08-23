#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDACVSeekerAShp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDACVSeekerAShp
{
public:

    // RVA: 0x499 | Ordinal: 1178
        void __getInputPorts(void);

    // RVA: 0x532 | Ordinal: 1331
        void __getOutputPorts(void);

    // RVA: 0x7C1 | Ordinal: 1986
        void getDesc_(void);

    // RVA: 0x874 | Ordinal: 2165
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x971 | Ordinal: 2418
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC1 | Ordinal: 2754
        void isTargetLocked(unsigned int);

    // RVA: 0xB7F | Ordinal: 2944
        void registerStateData(void);

    // RVA: 0xC6E | Ordinal: 3183
        void setGroupTarget(bool);

    // RVA: 0xD21 | Ordinal: 3362
        void simulate(double);

    // RVA: 0xDA7 | Ordinal: 3496
        void targetSearchFOV(void);

    // RVA: 0x99 | Ordinal: 154
        void wDACVSeekerAShp(class wDACVSeekerAShp &&);

    // RVA: 0x9A | Ordinal: 155
        void wDACVSeekerAShp(class wDACVSeekerAShp const &);

    // RVA: 0x9B | Ordinal: 156
        void wDACVSeekerAShp(class wDACVSeekerAShpDescriptor const *, class wSimulationSystem *);

    // RVA: 0x219 | Ordinal: 538
        void _wDACVSeekerAShp(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDACVSEEKERASHP_HPP
