#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wBlockCluster
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBlockCluster
{
public:

    // RVA: 0x487 | Ordinal: 1160
        void __getInputPorts(void);

    // RVA: 0x520 | Ordinal: 1313
        void __getOutputPorts(void);

    // RVA: 0x700 | Ordinal: 1793
        void explodeSnd(double, double, double, int);

    // RVA: 0x795 | Ordinal: 1942
        void getDesc(void) const;

    // RVA: 0x7B7 | Ordinal: 1976
        void getDesc_(void);

    // RVA: 0x86B | Ordinal: 2156
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x968 | Ordinal: 2409
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2B | Ordinal: 2604
        void getParent(void);

    // RVA: 0xA3D | Ordinal: 2622
        void getRandom(void);

    // RVA: 0xAB3 | Ordinal: 2740
        void init_randoms(int);

    // RVA: 0xD5C | Ordinal: 3421
        void simulate(double);

    // RVA: 0xDD8 | Ordinal: 3545
        void spawnBomblets_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDF7 | Ordinal: 3576
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x64 | Ordinal: 101
        void wBlockCluster(class wBlockCluster const &);

    // RVA: 0x65 | Ordinal: 102
        void wBlockCluster(class wBlockClusterDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x205 | Ordinal: 518
        void _wBlockCluster(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WBLOCKCLUSTER_HPP
