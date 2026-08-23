#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x666 | Ordinal: 1639
        void checkClusterCollision(double);

    // RVA: 0x675 | Ordinal: 1654
        void checkIsDead(void);

    // RVA: 0x686 | Ordinal: 1671
        void clearParts(void);

    // RVA: 0x6BD | Ordinal: 1726
        void countAliveParts_(void);

    // RVA: 0x6D9 | Ordinal: 1754
        void createElements(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &, class Math::Vector<3, double> const &, int, class wBombElem *);

    // RVA: 0x6DC | Ordinal: 1757
        void createPartsElem(void);

    // RVA: 0x796 | Ordinal: 1943
        void getDesc(void) const;

    // RVA: 0x7BB | Ordinal: 1980
        void getDesc_(void);

    // RVA: 0x86F | Ordinal: 2160
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x96C | Ordinal: 2413
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2C | Ordinal: 2605
        void getParent(void);

    // RVA: 0xAB4 | Ordinal: 2741
        void init_randoms(int);

    // RVA: 0xB25 | Ordinal: 2854
        void prepareInitData(void);

    // RVA: 0xC0E | Ordinal: 3087
        void rndNPure(void);

    // RVA: 0xC1F | Ordinal: 3104
        void rnd_01(void);

    // RVA: 0xC20 | Ordinal: 3105
        void rnd_m1p1(void);

    // RVA: 0xD5F | Ordinal: 3424
        void simulate(double);

    // RVA: 0xDF8 | Ordinal: 3577
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool);

    // RVA: 0x6E | Ordinal: 111
        void wClusterElem(class wClusterElem const &);

    // RVA: 0x6F | Ordinal: 112
        void wClusterElem(class wClusterElemDescriptor const *, class wSimulationSystem *, class Lua::Loader *);

    // RVA: 0x209 | Ordinal: 522
        void _wClusterElem(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCLUSTERELEM_HPP
