#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wWCSE_9M127
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWCSE_9M127
{
public:

    // RVA: 0x4F6 | Ordinal: 1271
        void __getInputPorts(void);

    // RVA: 0x58F | Ordinal: 1424
        void __getOutputPorts(void);

    // RVA: 0x826 | Ordinal: 2087
        void getDesc_(void);

    // RVA: 0x8DA | Ordinal: 2267
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9D7 | Ordinal: 2520
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xBF7 | Ordinal: 3064
        void registerStateData(void);

    // RVA: 0xDBA | Ordinal: 3515
        void simulate(double);

    // RVA: 0x1C1 | Ordinal: 450
        void wWCSE_9M127(class wWCSE_9M127 &&);

    // RVA: 0x1C2 | Ordinal: 451
        void wWCSE_9M127(class wWCSE_9M127 const &);

    // RVA: 0x1C3 | Ordinal: 452
        void wWCSE_9M127(class wWCSE_9M127_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x289 | Ordinal: 650
        void _wWCSE_9M127(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WWCSE_9M127_HPP
