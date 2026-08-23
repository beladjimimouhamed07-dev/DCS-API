#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wStowage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wStowage
{
public:

    // RVA: 0x327 | Ordinal: 808
        void getActualAmmoCapacity(void) const;

    // RVA: 0x333 | Ordinal: 820
        void getAmmoWsType(void) const;

    // RVA: 0x339 | Ordinal: 826
        void getAmmunitionTypeName(void) const;

    // RVA: 0x36F | Ordinal: 880
        void getCurrentAmmunition(class wShellDescriptor **, class wAmmunitionDescriptor **, class wsType &, class ed::basic_string<char> &);

    // RVA: 0x387 | Ordinal: 904
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x3C7 | Ordinal: 968
        void getID(void);

    // RVA: 0x3F2 | Ordinal: 1011
        void getMyFeedSlotID(void) const;

    // RVA: 0x402 | Ordinal: 1027
        void getPortionAmmoCapacity(void) const;

    // RVA: 0x403 | Ordinal: 1028
        void getPortionRearmFinishTime(void) const;

    // RVA: 0x42B | Ordinal: 1068
        void getSwitchOnDelay(void) const;

    // RVA: 0x440 | Ordinal: 1089
        void getTotalAmmoCapacity(void) const;

    // RVA: 0x461 | Ordinal: 1122
        void get_current_shell(void) const;

    // RVA: 0x46D | Ordinal: 1134
        void get_shot_delay(void) const;

    // RVA: 0x473 | Ordinal: 1140
        void get_time_rearm(void) const;

    // RVA: 0x47D | Ordinal: 1150
        void hasAutomaticLoader(void);

    // RVA: 0x4D0 | Ordinal: 1233
        void is_available(void) const;

    // RVA: 0x4D2 | Ordinal: 1235
        void is_empty(void) const;

    // RVA: 0x4FE | Ordinal: 1279
        void maintain(void);

    // RVA: 0x55D | Ordinal: 1374
        void net_setActualAmmoCapacity(int);

    // RVA: 0x58E | Ordinal: 1423
        void preInit(class cLauncher *, class Lua::Config &, int, bool);

    // RVA: 0x594 | Ordinal: 1429
        void prepareRearming(void);

    // RVA: 0x5A2 | Ordinal: 1443
        void rearm_all(void);

    // RVA: 0x5BA | Ordinal: 1467
        void remove_round(void);

    // RVA: 0x5C0 | Ordinal: 1473
        void resetAmmo(void);

    // RVA: 0x5FD | Ordinal: 1534
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x625 | Ordinal: 1574
        void setPortionRearmFinishTime(void);

    // RVA: 0x661 | Ordinal: 1634
        void startRearm(void);

    // RVA: 0x671 | Ordinal: 1650
        void stopRearm(void);

    // RVA: 0x4F | Ordinal: 80
        void wStowage(class wStowage const &);

    // RVA: 0x50 | Ordinal: 81
        void wStowage(void);

    // RVA: 0x7E | Ordinal: 127
        void _wStowage(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WSTOWAGE_HPP
