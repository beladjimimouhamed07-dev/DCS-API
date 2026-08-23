#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wClusterElemDispenser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemDispenser
{
public:

    // RVA: 0x491 | Ordinal: 1170
        void __getInputPorts(void);

    // RVA: 0x52A | Ordinal: 1323
        void __getOutputPorts(void);

    // RVA: 0x678 | Ordinal: 1657
        void checkIsDead(void);

    // RVA: 0x687 | Ordinal: 1672
        void clearParts(void);

    // RVA: 0x6DF | Ordinal: 1760
        void createPartsElem(void);

    // RVA: 0x7C1 | Ordinal: 1986
        void getDesc_(void);

    // RVA: 0x875 | Ordinal: 2166
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x972 | Ordinal: 2419
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA8C | Ordinal: 2701
        void initEffects(void);

    // RVA: 0xD64 | Ordinal: 3429
        void simulate(double);

    // RVA: 0xDD9 | Ordinal: 3546
        void spawnBy(class wDispenserElem *);

    // RVA: 0x7E | Ordinal: 127
        void wClusterElemDispenser(class wClusterElemDispenser const &);

    // RVA: 0x7F | Ordinal: 128
        void wClusterElemDispenser(class wClusterElemDispenserDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20F | Ordinal: 528
        void _wClusterElemDispenser(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMDISPENSER_HPP
