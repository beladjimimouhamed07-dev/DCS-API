#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7F8 | Ordinal: 2041
        void getDesc_(void);

    // RVA: 0x8AB | Ordinal: 2220
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A8 | Ordinal: 2473
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA92 | Ordinal: 2707
        void initTargetLocked(bool);

    // RVA: 0xA97 | Ordinal: 2712
        void initUseINS(bool);

    // RVA: 0xBAD | Ordinal: 2990
        void registerStateData(void);

    // RVA: 0xD50 | Ordinal: 3409
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WLOSSELECTOR_HPP
