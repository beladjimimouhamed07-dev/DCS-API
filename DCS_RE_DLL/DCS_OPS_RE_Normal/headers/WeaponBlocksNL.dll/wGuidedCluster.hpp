#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x676 | Ordinal: 1655
        void checkIsDead(void);

    // RVA: 0x685 | Ordinal: 1670
        void clearParts(void);

    // RVA: 0x790 | Ordinal: 1937
        void getDesc(void) const;

    // RVA: 0x7EF | Ordinal: 2032
        void getDesc_(void);

    // RVA: 0x8A2 | Ordinal: 2211
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99F | Ordinal: 2464
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA25 | Ordinal: 2598
        void getParent(void);

    // RVA: 0xAA8 | Ordinal: 2729
        void isBLU108Alive(void);

    // RVA: 0xD46 | Ordinal: 3399
        void simulate(double);

    // RVA: 0xD8F | Ordinal: 3472
        void spawnOpenedDispenser_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xD90 | Ordinal: 3473
        void spawnPanels(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xD91 | Ordinal: 3474
        void spawnSkeets_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xD92 | Ordinal: 3475
        void spawnSubmunitions_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDB1 | Ordinal: 3506
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, enum TYPE_OF_CLUSTER_BOMB_PART);

    // RVA: 0x135 | Ordinal: 310
        void wGuidedCluster(class wGuidedCluster const &);

    // RVA: 0x136 | Ordinal: 311
        void wGuidedCluster(class wGuidedClusterDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x254 | Ordinal: 597
        void _wGuidedCluster(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGUIDEDCLUSTER_HPP
