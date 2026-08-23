#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: HumanSideArm
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HumanSideArm
{
public:

    // RVA: 0x169 | Ordinal: 362
        void Class(void) const;

    // RVA: 0x16D | Ordinal: 366
        void CommandSet(int);

    // RVA: 0x195 | Ordinal: 406
        void GetDrawArguments(void);

    // RVA: 0x1A5 | Ordinal: 422
        void GetPoint(double);

    // RVA: 0x1A6 | Ordinal: 423
        void GetPoint(void);

    // RVA: 0x1A9 | Ordinal: 426
        void GetPosition(void);

    // RVA: 0x1B | Ordinal: 28
        void HumanSideArm(void);

    // RVA: 0x1E9 | Ordinal: 490
        void Position(double);

    // RVA: 0x1EA | Ordinal: 491
        void Position(void);

    // RVA: 0x212 | Ordinal: 531
        void TestVolume(class ClipVolume const &);

    // RVA: 0x21E | Ordinal: 543
        void activateAnimation(bool, class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x25B | Ordinal: 604
        void attach(class MovingObject *, bool);

    // RVA: 0x2A4 | Ordinal: 677
        void change_parent(class MovingObject *);

    // RVA: 0x2F9 | Ordinal: 762
        void drop(void);

    // RVA: 0x2FA | Ordinal: 763
        void dynamic_update(double &);

    // RVA: 0x317 | Ordinal: 792
        void flush(void);

    // RVA: 0x325 | Ordinal: 806
        void getActiveBarrelType(void) const;

    // RVA: 0x32D | Ordinal: 814
        void getAmmoCount(void) const;

    // RVA: 0x32F | Ordinal: 816
        void getAmmoDescription(void) const;

    // RVA: 0x33C | Ordinal: 829
        void getAnimation(unsigned int const &);

    // RVA: 0x352 | Ordinal: 851
        void getBarrelCount(void) const;

    // RVA: 0x354 | Ordinal: 853
        void getBarrelInfo(unsigned int, struct HandWeaponInfo &) const;

    // RVA: 0x38C | Ordinal: 909
        void getDisplayName(void) const;

    // RVA: 0x422 | Ordinal: 1059
        void getSigthPluginName(void) const;

    // RVA: 0x42A | Ordinal: 1067
        void getSumAmmoCount(void) const;

    // RVA: 0x443 | Ordinal: 1092
        void getType(void) const;

    // RVA: 0x44F | Ordinal: 1104
        void get_attach_pos(void) const;

    // RVA: 0x48C | Ordinal: 1165
        void init(struct SideArmInit const &);

    // RVA: 0x49A | Ordinal: 1179
        void init_activity(unsigned int);

    // RVA: 0x49C | Ordinal: 1181
        void init_update_activity(void);

    // RVA: 0x49D | Ordinal: 1182
        void init_wait_activity(void);

    // RVA: 0x4C1 | Ordinal: 1218
        void isReload(void) const;

    // RVA: 0x4C6 | Ordinal: 1223
        void isSilencer(void) const;

    // RVA: 0x4E4 | Ordinal: 1253
        void load(class ed::basic_string<char> const &);

    // RVA: 0x51F | Ordinal: 1312
        void netDestroy(void);

    // RVA: 0x521 | Ordinal: 1314
        void netDiscard(void);

    // RVA: 0x522 | Ordinal: 1315
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x52F | Ordinal: 1328
        void netInit(struct NetSideArmInit const &);

    // RVA: 0x530 | Ordinal: 1329
        void netInputArguments(void);

    // RVA: 0x532 | Ordinal: 1331
        void netInputFire(unsigned int, unsigned char, bool);

    // RVA: 0x534 | Ordinal: 1333
        void netInputReload(unsigned int);

    // RVA: 0x535 | Ordinal: 1334
        void netInputStatus(struct SideArmStatus const &);

    // RVA: 0x53F | Ordinal: 1344
        void netSendUpdate(int, int, int &);

    // RVA: 0x546 | Ordinal: 1351
        void netWeaponTakeControl(bool, int);

    // RVA: 0x552 | Ordinal: 1363
        void net_find_owner(double &);

    // RVA: 0x68C | Ordinal: 1677
        void update(double &);

    // RVA: 0x6A4 | Ordinal: 1701
        void wait_update(double &);

    // RVA: 0x60 | Ordinal: 97
        void _HumanSideArm(void);
};

// DCS_OPS_RE_WEAPONS.DLL_HUMANSIDEARM_HPP
