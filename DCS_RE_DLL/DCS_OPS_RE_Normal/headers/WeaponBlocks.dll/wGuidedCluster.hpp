#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGuidedCluster
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGuidedCluster
{
public:

    // RVA: 0x4C7 | Ordinal: 1224
        void __getInputPorts(void);

    // RVA: 0x560 | Ordinal: 1377
        void __getOutputPorts(void);

    // RVA: 0x679 | Ordinal: 1658
        void checkIsDead(void);

    // RVA: 0x688 | Ordinal: 1673
        void clearParts(void);

    // RVA: 0x798 | Ordinal: 1945
        void getDesc(void) const;

    // RVA: 0x7F7 | Ordinal: 2040
        void getDesc_(void);

    // RVA: 0x8AB | Ordinal: 2220
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A8 | Ordinal: 2473
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2E | Ordinal: 2607
        void getParent(void);

    // RVA: 0xA3E | Ordinal: 2623
        void getRandom(void);

    // RVA: 0xABE | Ordinal: 2751
        void init_randoms(int);

    // RVA: 0xACE | Ordinal: 2767
        void isBLU108Alive(void);

    // RVA: 0xD91 | Ordinal: 3474
        void simulate(double);

    // RVA: 0xDDA | Ordinal: 3547
        void spawnOpenedDispenser_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDDB | Ordinal: 3548
        void spawnPanels(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDDC | Ordinal: 3549
        void spawnSkeets_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDDD | Ordinal: 3550
        void spawnSubmunitions_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDFC | Ordinal: 3581
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, enum TYPE_OF_CLUSTER_BOMB_PART);

    // RVA: 0x135 | Ordinal: 310
        void wGuidedCluster(class wGuidedCluster const &);

    // RVA: 0x136 | Ordinal: 311
        void wGuidedCluster(class wGuidedClusterDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x254 | Ordinal: 597
        void _wGuidedCluster(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGUIDEDCLUSTER_HPP
