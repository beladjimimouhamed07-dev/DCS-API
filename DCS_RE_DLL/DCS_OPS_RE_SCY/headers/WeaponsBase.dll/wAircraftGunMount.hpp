#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAircraftGunMount
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAircraftGunMount
{
public:

    // RVA: 0xDA | Ordinal: 219
        void beginBurst(class Mail::Stream &);

    // RVA: 0xEF | Ordinal: 240
        void canBeDefenciveTurret(void) const;

    // RVA: 0x10F | Ordinal: 272
        void discharge(void);

    // RVA: 0x111 | Ordinal: 274
        void dismount(bool);

    // RVA: 0x112 | Ordinal: 275
        void dismounted(void) const;

    // RVA: 0x113 | Ordinal: 276
        void endBurst(class Mail::Stream &);

    // RVA: 0x121 | Ordinal: 290
        void getAftGunMount(void) const;

    // RVA: 0x127 | Ordinal: 296
        void getAmmoRoundsCount(void) const;

    // RVA: 0x128 | Ordinal: 297
        void getAmmoRoundsInitialCount(void) const;

    // RVA: 0x129 | Ordinal: 298
        void getAmmoSupply(void);

    // RVA: 0x12B | Ordinal: 300
        void getAmmoSupplyMass(void) const;

    // RVA: 0x12C | Ordinal: 301
        void getAmmoSupplyMassEmpty(void) const;

    // RVA: 0x12D | Ordinal: 302
        void getAmmoSupplyMassInitial(void) const;

    // RVA: 0x12E | Ordinal: 303
        void getAmmoSupplyPosition(void) const;

    // RVA: 0x130 | Ordinal: 305
        void getAmmoType(void) const;

    // RVA: 0x136 | Ordinal: 311
        void getAzimuth(void) const;

    // RVA: 0x13D | Ordinal: 318
        void getBurstIsMaster(void) const;

    // RVA: 0x13F | Ordinal: 320
        void getBurstLength(void) const;

    // RVA: 0x143 | Ordinal: 324
        void getCarriage(void) const;

    // RVA: 0x14C | Ordinal: 333
        void getCrewMemberInCommandIdx(void) const;

    // RVA: 0x156 | Ordinal: 343
        void getDefenciveTurret(void);

    // RVA: 0x158 | Ordinal: 345
        void getDefenciveTurretParams(int &, int &, float &, float &, float &, float &, float &, float &) const;

    // RVA: 0x15D | Ordinal: 350
        void getDisplayName(void) const;

    // RVA: 0x15F | Ordinal: 352
        void getDoorArg(void) const;

    // RVA: 0x161 | Ordinal: 354
        void getDropCartridge(void) const;

    // RVA: 0x163 | Ordinal: 356
        void getEffectiveFireDistance(void) const;

    // RVA: 0x167 | Ordinal: 360
        void getEjectorDir(void) const;

    // RVA: 0x169 | Ordinal: 362
        void getEjectorPosition(void) const;

    // RVA: 0x16B | Ordinal: 364
        void getElevation(void) const;

    // RVA: 0x175 | Ordinal: 374
        void getFailure(void) const;

    // RVA: 0x17E | Ordinal: 383
        void getGun(void) const;

    // RVA: 0x19F | Ordinal: 416
        void getMuzzlePosition(void) const;

    // RVA: 0x1A1 | Ordinal: 418
        void getMuzzlePositionBoreSight(void) const;

    // RVA: 0x1A2 | Ordinal: 419
        void getMuzzlePositionLocal(void) const;

    // RVA: 0x1A4 | Ordinal: 421
        void getName(void) const;

    // RVA: 0x1A6 | Ordinal: 423
        void getNetState(void);

    // RVA: 0x1A8 | Ordinal: 425
        void getParkingArg(void) const;

    // RVA: 0x1B7 | Ordinal: 440
        void getShortName(void) const;

    // RVA: 0x1DD | Ordinal: 478
        void get_descriptor(void) const;

    // RVA: 0x1F8 | Ordinal: 505
        void initialize(class Lua::Loader *);

    // RVA: 0x1FF | Ordinal: 512
        void isActive(void) const;

    // RVA: 0x201 | Ordinal: 514
        void isDefenciveTurret(void) const;

    // RVA: 0x202 | Ordinal: 515
        void isEmpty(void) const;

    // RVA: 0x204 | Ordinal: 517
        void isFiring(void) const;

    // RVA: 0x208 | Ordinal: 521
        void isReadyToFire(void) const;

    // RVA: 0x20A | Ordinal: 523
        void isReloading(void) const;

    // RVA: 0x229 | Ordinal: 554
        void onJump(class IwoLA *);

    // RVA: 0x23B | Ordinal: 572
        void resetAmmo(float);

    // RVA: 0x243 | Ordinal: 580
        void setAmmoType(unsigned int);

    // RVA: 0x248 | Ordinal: 585
        void setAzimuth(double);

    // RVA: 0x24A | Ordinal: 587
        void setBurstIsMaster(bool);

    // RVA: 0x256 | Ordinal: 599
        void setDefenciveTurretFlag(bool);

    // RVA: 0x25B | Ordinal: 604
        void setElevation(double);

    // RVA: 0x25F | Ordinal: 608
        void setFailure(int, bool, float, float);

    // RVA: 0x271 | Ordinal: 626
        void setNetState(struct wAircraftGunMountNetState const &);

    // RVA: 0x296 | Ordinal: 663
        void simulate(double);

    // RVA: 0x2A5 | Ordinal: 678
        void sync_T(class Mail::Stream &);

    // RVA: 0x2A7 | Ordinal: 680
        void sync_T_active(void) const;

    // RVA: 0x2AA | Ordinal: 683
        void targetInAngles(class wPosition3<float>);

    // RVA: 0x2AD | Ordinal: 686
        void updateDefenciveTurret(float, int, bool &, int);

    // RVA: 0x2AE | Ordinal: 687
        void updateEffectsArgs(double);

    // RVA: 0xD | Ordinal: 14
        void wAircraftGunMount(class wAircraftGunMount const &);

    // RVA: 0xE | Ordinal: 15
        void wAircraftGunMount(class IwoLA *, signed char, class wAircraftGunMountDescriptor const *, class Lua::Loader *);

    // RVA: 0xF | Ordinal: 16
        void wAircraftGunMount(class IwoLA *, class IwoAIPilon *, signed char, class wAircraftGunMountDescriptor const *, class Lua::Loader *);

    // RVA: 0x4D | Ordinal: 78
        void _wAircraftGunMount(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAIRCRAFTGUNMOUNT_HPP
