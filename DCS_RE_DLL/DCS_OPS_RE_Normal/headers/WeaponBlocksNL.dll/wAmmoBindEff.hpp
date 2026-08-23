#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAmmoBindEff
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmoBindEff
{
public:

    // RVA: 0x482 | Ordinal: 1155
        void __getInputPorts(void);

    // RVA: 0x51B | Ordinal: 1308
        void __getOutputPorts(void);

    // RVA: 0x6D4 | Ordinal: 1749
        void createEffect_(double);

    // RVA: 0x7AA | Ordinal: 1963
        void getDesc_(void);

    // RVA: 0x85D | Ordinal: 2142
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95A | Ordinal: 2395
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB75 | Ordinal: 2934
        void registerStateData(void);

    // RVA: 0xD0D | Ordinal: 3342
        void simulate(double);

    // RVA: 0xD98 | Ordinal: 3481
        void switchState_(int);

    // RVA: 0x54 | Ordinal: 85
        void wAmmoBindEff(class wAmmoBindEff const &);

    // RVA: 0x55 | Ordinal: 86
        void wAmmoBindEff(class wAmmoBindEffDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1FF | Ordinal: 512
        void _wAmmoBindEff(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAMMOBINDEFF_HPP
