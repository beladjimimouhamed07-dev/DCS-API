#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wLOSSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wLOSSelector
{
public:

    // RVA: 0x4D0 | Ordinal: 1233
        void __getInputPorts(void);

    // RVA: 0x569 | Ordinal: 1386
        void __getOutputPorts(void);

    // RVA: 0x800 | Ordinal: 2049
        void getDesc_(void);

    // RVA: 0x8B4 | Ordinal: 2229
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B1 | Ordinal: 2482
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAA8 | Ordinal: 2729
        void initTargetLocked(bool);

    // RVA: 0xAAD | Ordinal: 2734
        void initUseINS(bool);

    // RVA: 0xBD7 | Ordinal: 3032
        void registerStateData(void);

    // RVA: 0xD9B | Ordinal: 3484
        void simulate(double);

    // RVA: 0x155 | Ordinal: 342
        void wLOSSelector(class wLOSSelector &&);

    // RVA: 0x156 | Ordinal: 343
        void wLOSSelector(class wLOSSelector const &);

    // RVA: 0x157 | Ordinal: 344
        void wLOSSelector(class wLOSSelectorDescriptor const *, class wSimulationSystem *);

    // RVA: 0x260 | Ordinal: 609
        void _wLOSSelector(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WLOSSELECTOR_HPP
