#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemBombletsHF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemBombletsHF
{
public:

    // RVA: 0x48F | Ordinal: 1168
        void __getInputPorts(void);

    // RVA: 0x528 | Ordinal: 1321
        void __getOutputPorts(void);

    // RVA: 0x663 | Ordinal: 1636
        void checkBombCollision(double);

    // RVA: 0x666 | Ordinal: 1639
        void checkClusterCollision(double);

    // RVA: 0x674 | Ordinal: 1653
        void checkIsDead(void);

    // RVA: 0x7B7 | Ordinal: 1976
        void getDesc_(void);

    // RVA: 0x86A | Ordinal: 2155
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x967 | Ordinal: 2408
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD18 | Ordinal: 3353
        void simulate(double);

    // RVA: 0xDAF | Ordinal: 3504
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x78 | Ordinal: 121
        void wClusterElemBombletsHF(class wClusterElemBombletsHF &&);

    // RVA: 0x79 | Ordinal: 122
        void wClusterElemBombletsHF(class wClusterElemBombletsHF const &);

    // RVA: 0x7A | Ordinal: 123
        void wClusterElemBombletsHF(class wClusterElemBombletsHFDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20D | Ordinal: 526
        void _wClusterElemBombletsHF(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMBOMBLETSHF_HPP
