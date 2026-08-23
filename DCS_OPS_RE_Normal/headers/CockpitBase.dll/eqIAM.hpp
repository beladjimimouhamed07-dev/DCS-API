#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqIAM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqIAM
{
public:

    // RVA: 0x7D2 | Ordinal: 2003
        void InitConstants(double, double, double, double);

    // RVA: 0x7E5 | Ordinal: 2022
        void IsReadyToFire(void) const;

    // RVA: 0x8DC | Ordinal: 2269
        void Type(void) const;

    // RVA: 0xB64 | Ordinal: 2917
        void define_current_status(void);

    // RVA: 0x251 | Ordinal: 594
        void eqIAM(class cockpit::eqIAM const &);

    // RVA: 0x252 | Ordinal: 595
        void eqIAM(class wsType const &, bool);

    // RVA: 0xC13 | Ordinal: 3092
        void forceTestStatus(unsigned int);

    // RVA: 0xC3C | Ordinal: 3133
        void getAlignStatus(void) const;

    // RVA: 0xCBC | Ordinal: 3261
        void getGPSReady(void) const;

    // RVA: 0xCBD | Ordinal: 3262
        void getGPSReadyFlag(void) const;

    // RVA: 0xD07 | Ordinal: 3336
        void getINS_avail(void) const;

    // RVA: 0xD90 | Ordinal: 3473
        void getPickleFlag(void) const;

    // RVA: 0xDA8 | Ordinal: 3497
        void getPrevStatus(void) const;

    // RVA: 0xE0B | Ordinal: 3596
        void getStatus(void) const;

    // RVA: 0xE20 | Ordinal: 3617
        void getTestStatus(void) const;

    // RVA: 0xFFB | Ordinal: 4092
        void get_pilon(void) const;

    // RVA: 0x121C | Ordinal: 4637
        void initialize(bool);

    // RVA: 0x128A | Ordinal: 4747
        void isTrainingWeapon(void) const;

    // RVA: 0x1381 | Ordinal: 4994
        void launch(class IwHumanPlane *);

    // RVA: 0x16AA | Ordinal: 5803
        void setCBUparams(class Math::Vector<3, double> const &, double, double, bool, bool);

    // RVA: 0x16DD | Ordinal: 5854
        void setEGI_FOM_degrated(bool);

    // RVA: 0x16F9 | Ordinal: 5882
        void setElecPower(bool);

    // RVA: 0x16FF | Ordinal: 5888
        void setElecPowerOnOff(void);

    // RVA: 0x1710 | Ordinal: 5905
        void setGPSReady(bool);

    // RVA: 0x1711 | Ordinal: 5906
        void setGPSReadyFlag(bool);

    // RVA: 0x172E | Ordinal: 5935
        void setINS_avail(bool);

    // RVA: 0x1785 | Ordinal: 6022
        void setPickleFlag(bool);

    // RVA: 0x179E | Ordinal: 6047
        void setRetryLaunchFlag(void);

    // RVA: 0x17BA | Ordinal: 6075
        void setStatus(unsigned int);

    // RVA: 0x17C6 | Ordinal: 6087
        void setTXA_quality(double);

    // RVA: 0x17D7 | Ordinal: 6104
        void setTestStatus(unsigned int);

    // RVA: 0x17D8 | Ordinal: 6105
        void setTgtLinCoords(class osg::Vec3f const &);

    // RVA: 0x1933 | Ordinal: 6452
        void set_station(int, int);

    // RVA: 0x19DA | Ordinal: 6619
        void startTest(void);

    // RVA: 0x1A32 | Ordinal: 6707
        void testIsAvail(void) const;

    // RVA: 0x1AF9 | Ordinal: 6906
        void update(double);

    // RVA: 0x3A7 | Ordinal: 936
        void _eqIAM(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQIAM_HPP
