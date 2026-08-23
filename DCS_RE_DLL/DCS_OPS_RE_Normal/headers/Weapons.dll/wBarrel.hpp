#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wBarrel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBarrel
{
public:

    // RVA: 0x1D5 | Ordinal: 470
        void IsReady(void) const;

    // RVA: 0x200 | Ordinal: 513
        void SetExternalMissile(void);

    // RVA: 0x27C | Ordinal: 637
        void calculateMountingPos(void);

    // RVA: 0x2EB | Ordinal: 748
        void createTorpedoLaunchEffect(void);

    // RVA: 0x2F5 | Ordinal: 758
        void disarmPrefireState(void);

    // RVA: 0x35D | Ordinal: 862
        void getCaseId(void) const;

    // RVA: 0x35E | Ordinal: 863
        void getCaseOrientation(void) const;

    // RVA: 0x36A | Ordinal: 875
        void getConnectorName(void) const;

    // RVA: 0x385 | Ordinal: 902
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x3AF | Ordinal: 944
        void getExtractionConnector(void) const;

    // RVA: 0x3B0 | Ordinal: 945
        void getExtractionDir(void) const;

    // RVA: 0x3C6 | Ordinal: 967
        void getID(void) const;

    // RVA: 0x3ED | Ordinal: 1006
        void getModelConnector(void) const;

    // RVA: 0x3F1 | Ordinal: 1010
        void getMuzzleBrakeType(void);

    // RVA: 0x405 | Ordinal: 1030
        void getPosBarrel(class wPosition3<double> &);

    // RVA: 0x408 | Ordinal: 1033
        void getPrefireState(void);

    // RVA: 0x41A | Ordinal: 1051
        void getRecoilT0(void) const;

    // RVA: 0x428 | Ordinal: 1065
        void getStartPos(class wPosition3<double> &, bool);

    // RVA: 0x43B | Ordinal: 1084
        void getTimeReady(void) const;

    // RVA: 0x45E | Ordinal: 1119
        void get_current_missile(class wsType &, class ed::basic_string<char> &) const;

    // RVA: 0x45F | Ordinal: 1120
        void get_current_rocket(void) const;

    // RVA: 0x460 | Ordinal: 1121
        void get_current_shell(void) const;

    // RVA: 0x462 | Ordinal: 1123
        void get_delay_to_ready(void) const;

    // RVA: 0x4D1 | Ordinal: 1234
        void is_empty(void) const;

    // RVA: 0x4E9 | Ordinal: 1258
        void load_byorder(class wStowage *, double);

    // RVA: 0x4FC | Ordinal: 1277
        void maintain(void);

    // RVA: 0x55F | Ordinal: 1376
        void net_setLoaded(unsigned char);

    // RVA: 0x58D | Ordinal: 1422
        void preInit(class cLauncher *, class MovingObject *, class Lua::Config &, int);

    // RVA: 0x592 | Ordinal: 1427
        void prefireState(void) const;

    // RVA: 0x59A | Ordinal: 1435
        void projectileTrayEjection(double &);

    // RVA: 0x5A5 | Ordinal: 1446
        void recoil(double &);

    // RVA: 0x5A6 | Ordinal: 1447
        void recoilAlternative(double &);

    // RVA: 0x5AE | Ordinal: 1455
        void reloading(double &);

    // RVA: 0x5AF | Ordinal: 1456
        void removeAmmunition(void);

    // RVA: 0x5FB | Ordinal: 1532
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x648 | Ordinal: 1609
        void shot(void);

    // RVA: 0x649 | Ordinal: 1610
        void shotEffectHeavy(class wPosition3<double> const &, float, float);

    // RVA: 0x662 | Ordinal: 1635
        void startRecoil(void);

    // RVA: 0x665 | Ordinal: 1638
        void startReloading(void);

    // RVA: 0x46 | Ordinal: 71
        void wBarrel(class wBarrel const &);

    // RVA: 0x47 | Ordinal: 72
        void wBarrel(void);

    // RVA: 0x79 | Ordinal: 122
        void _wBarrel(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WBARREL_HPP
