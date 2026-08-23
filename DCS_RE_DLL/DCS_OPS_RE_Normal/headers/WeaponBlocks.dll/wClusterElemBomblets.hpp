#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x664 | Ordinal: 1637
        void checkBombCollision(double);

    // RVA: 0x667 | Ordinal: 1640
        void checkClusterCollision(double);

    // RVA: 0x676 | Ordinal: 1655
        void checkIsDead(void);

    // RVA: 0x6BE | Ordinal: 1727
        void countAliveParts_(void);

    // RVA: 0x701 | Ordinal: 1794
        void explodeSnd(double, double, double, int);

    // RVA: 0x7BE | Ordinal: 1983
        void getDesc_(void);

    // RVA: 0x872 | Ordinal: 2163
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96F | Ordinal: 2416
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA77 | Ordinal: 2680
        void handleExpl_(class Math::Vector<3, double> const &);

    // RVA: 0xA8B | Ordinal: 2700
        void initEffects(void);

    // RVA: 0xBA5 | Ordinal: 2982
        void registerStateData(void);

    // RVA: 0xD62 | Ordinal: 3427
        void simulate(double);

    // RVA: 0xDF9 | Ordinal: 3578
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x76 | Ordinal: 119
        void wClusterElemBomblets(class wClusterElemBomblets const &);

    // RVA: 0x77 | Ordinal: 120
        void wClusterElemBomblets(class wClusterElemBombletsDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x20C | Ordinal: 525
        void _wClusterElemBomblets(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEMBOMBLETS_HPP
