#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7C9 | Ordinal: 1994
        void getDesc_(void);

    // RVA: 0x87D | Ordinal: 2174
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97A | Ordinal: 2427
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAE8 | Ordinal: 2793
        void isTargetLocked(unsigned int);

    // RVA: 0xBA9 | Ordinal: 2986
        void registerStateData(void);

    // RVA: 0xCB8 | Ordinal: 3257
        void setGroupTarget(bool);

    // RVA: 0xD6C | Ordinal: 3437
        void simulate(double);

    // RVA: 0xDF2 | Ordinal: 3571
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDACVSEEKERASHP_HPP
