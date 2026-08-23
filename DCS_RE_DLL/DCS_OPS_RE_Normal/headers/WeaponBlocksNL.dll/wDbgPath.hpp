#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wDbgPath
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDbgPath
{
public:

    // RVA: 0x4A5 | Ordinal: 1190
        void __getInputPorts(void);

    // RVA: 0x53E | Ordinal: 1343
        void __getOutputPorts(void);

    // RVA: 0x7CD | Ordinal: 1998
        void getDesc_(void);

    // RVA: 0x880 | Ordinal: 2177
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x97D | Ordinal: 2430
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA9E | Ordinal: 2719
        void init_randoms(int);

    // RVA: 0xB8B | Ordinal: 2956
        void registerStateData(void);

    // RVA: 0xD2C | Ordinal: 3373
        void simulate(double);

    // RVA: 0xBB | Ordinal: 188
        void wDbgPath(class wDbgPath &&);

    // RVA: 0xBC | Ordinal: 189
        void wDbgPath(class wDbgPath const &);

    // RVA: 0xBD | Ordinal: 190
        void wDbgPath(class wDbgPathDescriptor const *, class wSimulationSystem *);

    // RVA: 0x225 | Ordinal: 550
        void _wDbgPath(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDBGPATH_HPP
