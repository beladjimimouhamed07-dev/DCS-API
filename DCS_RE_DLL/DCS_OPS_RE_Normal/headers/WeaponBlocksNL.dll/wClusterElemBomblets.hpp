#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElemBomblets
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElemBomblets
{
public:

    // RVA: 0x48E | Ordinal: 1167
        void __getInputPorts(void);

    // RVA: 0x527 | Ordinal: 1320
        void __getOutputPorts(void);

    // RVA: 0x662 | Ordinal: 1635
        void checkBombCollision(double);

    // RVA: 0x665 | Ordinal: 1638
        void checkClusterCollision(double);

    // RVA: 0x673 | Ordinal: 1652
        void checkIsDead(void);

    // RVA: 0x6BA | Ordinal: 1723
        void countAliveParts_(void);

    // RVA: 0x7B6 | Ordinal: 1975
        void getDesc_(void);

    // RVA: 0x869 | Ordinal: 2154
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x966 | Ordinal: 2407
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA68 | Ordinal: 2665
        void handleExpl_(class Math::Vector<3, double> const &);

    // RVA: 0xB7B | Ordinal: 2940
        void registerStateData(void);

    // RVA: 0xD17 | Ordinal: 3352
        void simulate(double);

    // RVA: 0xDAE | Ordinal: 3503
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x76 | Ordinal: 119
        void wClusterElemBomblets(class wClusterElemBomblets const &);

    // RVA: 0x77 | Ordinal: 120
        void wClusterElemBomblets(class wClusterElemBombletsDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20C | Ordinal: 525
        void _wClusterElemBomblets(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEMBOMBLETS_HPP
