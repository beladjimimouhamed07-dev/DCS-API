#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6D8 | Ordinal: 1753
        void createEffect_(double);

    // RVA: 0x7B2 | Ordinal: 1971
        void getDesc_(void);

    // RVA: 0x866 | Ordinal: 2151
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x963 | Ordinal: 2404
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB9F | Ordinal: 2976
        void registerStateData(void);

    // RVA: 0xD58 | Ordinal: 3417
        void simulate(double);

    // RVA: 0xDE3 | Ordinal: 3556
        void switchState_(int);

    // RVA: 0x54 | Ordinal: 85
        void wAmmoBindEff(class wAmmoBindEff const &);

    // RVA: 0x55 | Ordinal: 86
        void wAmmoBindEff(class wAmmoBindEffDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1FF | Ordinal: 512
        void _wAmmoBindEff(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAMMOBINDEFF_HPP
