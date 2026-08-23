#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wClusterElem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wClusterElem
{
public:

    // RVA: 0x48B | Ordinal: 1164
        void __getInputPorts(void);

    // RVA: 0x524 | Ordinal: 1317
        void __getOutputPorts(void);

    // RVA: 0x5A3 | Ordinal: 1444
        void add_num(bool);

    // RVA: 0x5A4 | Ordinal: 1445
        void add_omega(class Math::Vector<3, double> const &);

    // RVA: 0x5A5 | Ordinal: 1446
        void add_param(int);

    // RVA: 0x5A7 | Ordinal: 1448
        void add_pos(class Math::Vector<3, double> const &);

    // RVA: 0x5A9 | Ordinal: 1450
        void add_rot(struct Math::Rotation3<double> const &);

    // RVA: 0x5AB | Ordinal: 1452
        void add_vel(class Math::Vector<3, double> const &);

    // RVA: 0x664 | Ordinal: 1637
        void checkClusterCollision(double);

    // RVA: 0x672 | Ordinal: 1651
        void checkIsDead(void);

    // RVA: 0x683 | Ordinal: 1668
        void clearParts(void);

    // RVA: 0x6B9 | Ordinal: 1722
        void countAliveParts_(void);

    // RVA: 0x6D5 | Ordinal: 1750
        void createElements(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, int, class wBombElem *);

    // RVA: 0x6D8 | Ordinal: 1753
        void createPartsElem(void);

    // RVA: 0x78E | Ordinal: 1935
        void getDesc(void) const;

    // RVA: 0x7B3 | Ordinal: 1972
        void getDesc_(void);

    // RVA: 0x866 | Ordinal: 2151
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x963 | Ordinal: 2404
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA23 | Ordinal: 2596
        void getParent(void);

    // RVA: 0xAFD | Ordinal: 2814
        void prepareInitData(void);

    // RVA: 0xBDF | Ordinal: 3040
        void rndNPure(void);

    // RVA: 0xBE0 | Ordinal: 3041
        void rnd_01(void);

    // RVA: 0xBE1 | Ordinal: 3042
        void rnd_m1p1(void);

    // RVA: 0xD14 | Ordinal: 3349
        void simulate(double);

    // RVA: 0xDAD | Ordinal: 3502
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool);

    // RVA: 0x6E | Ordinal: 111
        void wClusterElem(class wClusterElem const &);

    // RVA: 0x6F | Ordinal: 112
        void wClusterElem(class wClusterElemDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x209 | Ordinal: 522
        void _wClusterElem(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCLUSTERELEM_HPP
