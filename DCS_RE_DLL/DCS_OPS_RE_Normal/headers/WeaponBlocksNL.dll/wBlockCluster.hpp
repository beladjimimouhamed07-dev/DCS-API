#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x78D | Ordinal: 1934
        void getDesc(void) const;

    // RVA: 0x7AF | Ordinal: 1968
        void getDesc_(void);

    // RVA: 0x862 | Ordinal: 2147
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95F | Ordinal: 2400
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA22 | Ordinal: 2595
        void getParent(void);

    // RVA: 0xD11 | Ordinal: 3346
        void simulate(double);

    // RVA: 0xD8D | Ordinal: 3470
        void spawnBomblets_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const *);

    // RVA: 0xDAC | Ordinal: 3501
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x64 | Ordinal: 101
        void wBlockCluster(class wBlockCluster const &);

    // RVA: 0x65 | Ordinal: 102
        void wBlockCluster(class wBlockClusterDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x205 | Ordinal: 518
        void _wBlockCluster(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WBLOCKCLUSTER_HPP
