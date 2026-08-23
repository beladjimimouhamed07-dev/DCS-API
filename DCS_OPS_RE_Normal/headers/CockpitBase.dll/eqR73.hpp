#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqR73
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqR73
{
public:

    // RVA: 0x7DF | Ordinal: 2016
        void IsHeadReady(void) const;

    // RVA: 0x8DF | Ordinal: 2272
        void Type(void) const;

    // RVA: 0x259 | Ordinal: 602
        void eqR73(class cockpit::eqR73 const &);

    // RVA: 0x25A | Ordinal: 603
        void eqR73(class wsType const &);

    // RVA: 0xD21 | Ordinal: 3362
        void getIsSlave(void) const;

    // RVA: 0xD5B | Ordinal: 3420
        void getMode(void) const;

    // RVA: 0xDD7 | Ordinal: 3544
        void getSeeker(void);

    // RVA: 0xDD8 | Ordinal: 3545
        void getSeeker(void) const;

    // RVA: 0xE0F | Ordinal: 3600
        void getStatus(void) const;

    // RVA: 0x1220 | Ordinal: 4641
        void initialize(void);

    // RVA: 0x128C | Ordinal: 4749
        void isTrainingWeapon(void) const;

    // RVA: 0x1384 | Ordinal: 4997
        void launch(class IwHumanPlane *);

    // RVA: 0x16FD | Ordinal: 5886
        void setElecPower(bool);

    // RVA: 0x173D | Ordinal: 5950
        void setIsSlave(bool);

    // RVA: 0x17BE | Ordinal: 6079
        void setStatus(unsigned int);

    // RVA: 0x1936 | Ordinal: 6455
        void set_station(int, int);

    // RVA: 0x19A2 | Ordinal: 6563
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x1AFD | Ordinal: 6910
        void update(double);

    // RVA: 0x3AB | Ordinal: 940
        void _eqR73(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQR73_HPP
