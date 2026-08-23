#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x665 | Ordinal: 1638
        void checkBombCollision(double);

    // RVA: 0x668 | Ordinal: 1641
        void checkClusterCollision(double);

    // RVA: 0x677 | Ordinal: 1656
        void checkIsDead(void);

    // RVA: 0x7BF | Ordinal: 1984
        void getDesc_(void);

    // RVA: 0x873 | Ordinal: 2164
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x970 | Ordinal: 2417
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xD63 | Ordinal: 3428
        void simulate(double);

    // RVA: 0xDFA | Ordinal: 3579
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMBOMBLETSHF_HPP
