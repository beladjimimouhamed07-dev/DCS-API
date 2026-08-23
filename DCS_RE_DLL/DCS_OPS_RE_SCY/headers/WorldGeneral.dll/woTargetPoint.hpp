#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woTargetPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woTargetPoint
{
public:

    // RVA: 0x556 | Ordinal: 1367
        void Create(class osg::Vec3f const &, unsigned int, enum wcCoalitionName, unsigned int, float, unsigned int, unsigned int, int, int, bool, int, bool);

    // RVA: 0x59D | Ordinal: 1438
        void IncCountShell(void);

    // RVA: 0x5AA | Ordinal: 1451
        void Is_Target(void);

    // RVA: 0x5FC | Ordinal: 1533
        void VectorVelocity(void) const;

    // RVA: 0x651 | Ordinal: 1618
        void checkLinkPtr(void);

    // RVA: 0x6DB | Ordinal: 1756
        void columnId(void) const;

    // RVA: 0x6E4 | Ordinal: 1765
        void controlPoint(double &);

    // RVA: 0x7A3 | Ordinal: 1956
        void fillInitData(struct InitNetPoint &) const;

    // RVA: 0x7C9 | Ordinal: 1994
        void getAimPoint(void);

    // RVA: 0x7D3 | Ordinal: 2004
        void getCFFTarget(void) const;

    // RVA: 0x81A | Ordinal: 2075
        void getColorAttack(void);

    // RVA: 0x81E | Ordinal: 2079
        void getCountShell(void) const;

    // RVA: 0x83A | Ordinal: 2107
        void getIndexTarget(void) const;

    // RVA: 0x857 | Ordinal: 2136
        void getLinkId(void);

    // RVA: 0x99D | Ordinal: 2462
        void isActive(void) const;

    // RVA: 0x9B9 | Ordinal: 2490
        void isOutMessage(void) const;

    // RVA: 0xA6C | Ordinal: 2669
        void netChangeIndex(int);

    // RVA: 0xA6F | Ordinal: 2672
        void netChangeStatus(struct StatusNetPoint const &);

    // RVA: 0xB37 | Ordinal: 2872
        void quantity(void) const;

    // RVA: 0xB3A | Ordinal: 2875
        void radius(void) const;

    // RVA: 0xB91 | Ordinal: 2962
        void sendUpdateIndex(int);

    // RVA: 0xB92 | Ordinal: 2963
        void sendUpdateMsg(void);

    // RVA: 0xB99 | Ordinal: 2970
        void setActive(bool);

    // RVA: 0xB9B | Ordinal: 2972
        void setCFFTarget(bool);

    // RVA: 0xB9E | Ordinal: 2975
        void setColorAttack(unsigned int);

    // RVA: 0xBA1 | Ordinal: 2978
        void setCountShell(int);

    // RVA: 0xBAB | Ordinal: 2988
        void setIndexTarget(unsigned int);

    // RVA: 0xBB2 | Ordinal: 2995
        void setLinkId(unsigned int);

    // RVA: 0xBBE | Ordinal: 3007
        void setOutMessage(bool);

    // RVA: 0xBC3 | Ordinal: 3012
        void setPosition(class osg::Vec3f const &);

    // RVA: 0xBC5 | Ordinal: 3014
        void setQuantity(int, int);

    // RVA: 0xBC6 | Ordinal: 3015
        void setRadius(float);

    // RVA: 0xC33 | Ordinal: 3124
        void type(void) const;

    // RVA: 0xC4F | Ordinal: 3152
        void updateState(void);

    // RVA: 0x21C | Ordinal: 541
        void woTargetPoint(void);

    // RVA: 0x2ED | Ordinal: 750
        void _woTargetPoint(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOTARGETPOINT_HPP
