#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7D5 | Ordinal: 2006
        void getDesc_(void);

    // RVA: 0x889 | Ordinal: 2186
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x986 | Ordinal: 2439
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAB9 | Ordinal: 2746
        void init_randoms(int);

    // RVA: 0xBB5 | Ordinal: 2998
        void registerStateData(void);

    // RVA: 0xD77 | Ordinal: 3448
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDBGPATH_HPP
