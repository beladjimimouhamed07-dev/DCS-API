#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x675 | Ordinal: 1654
        void checkIsDead(void);

    // RVA: 0x684 | Ordinal: 1669
        void clearParts(void);

    // RVA: 0x6DB | Ordinal: 1756
        void createPartsElem(void);

    // RVA: 0x7B9 | Ordinal: 1978
        void getDesc_(void);

    // RVA: 0x86C | Ordinal: 2157
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x969 | Ordinal: 2410
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD19 | Ordinal: 3354
        void simulate(double);

    // RVA: 0xD8E | Ordinal: 3471
        void spawnBy(class wDispenserElem *);

    // RVA: 0x7E | Ordinal: 127
        void wClusterElemDispenser(class wClusterElemDispenser const &);

    // RVA: 0x7F | Ordinal: 128
        void wClusterElemDispenser(class wClusterElemDispenserDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20F | Ordinal: 528
        void _wClusterElemDispenser(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMDISPENSER_HPP
