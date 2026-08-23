#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqR60
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqR60
{
public:

    // RVA: 0x7DE | Ordinal: 2015
        void IsHeadReady(void) const;

    // RVA: 0x8DE | Ordinal: 2271
        void Type(void) const;

    // RVA: 0x257 | Ordinal: 600
        void eqR60(class cockpit::eqR60 const &);

    // RVA: 0x258 | Ordinal: 601
        void eqR60(class wsType const &);

    // RVA: 0xD20 | Ordinal: 3361
        void getIsSlave(void) const;

    // RVA: 0xD5A | Ordinal: 3419
        void getMode(void) const;

    // RVA: 0xDD5 | Ordinal: 3542
        void getSeeker(void);

    // RVA: 0xDD6 | Ordinal: 3543
        void getSeeker(void) const;

    // RVA: 0xE0E | Ordinal: 3599
        void getStatus(void) const;

    // RVA: 0x121F | Ordinal: 4640
        void initialize(void);

    // RVA: 0x128B | Ordinal: 4748
        void isTrainingWeapon(void) const;

    // RVA: 0x1383 | Ordinal: 4996
        void launch(class IwHumanPlane *);

    // RVA: 0x16FC | Ordinal: 5885
        void setElecPower(bool);

    // RVA: 0x173C | Ordinal: 5949
        void setIsSlave(bool);

    // RVA: 0x17BD | Ordinal: 6078
        void setStatus(unsigned int);

    // RVA: 0x1935 | Ordinal: 6454
        void set_station(int, int);

    // RVA: 0x19A1 | Ordinal: 6562
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x1AFC | Ordinal: 6909
        void update(double);

    // RVA: 0x3AA | Ordinal: 939
        void _eqR60(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQR60_HPP
