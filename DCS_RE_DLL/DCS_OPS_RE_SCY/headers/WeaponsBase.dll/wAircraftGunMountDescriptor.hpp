#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAircraftGunMountDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAircraftGunMountDescriptor
{
public:

    // RVA: 0x101 | Ordinal: 258
        void create(class IwoLA *, signed char, class Lua::Loader *) const;

    // RVA: 0x102 | Ordinal: 259
        void create(class IwoLA *, class IwoAIPilon *, signed char, class Lua::Loader *) const;

    // RVA: 0x122 | Ordinal: 291
        void getAftGunMount(void) const;

    // RVA: 0x12A | Ordinal: 299
        void getAmmoSupplyDescriptor(void) const;

    // RVA: 0x12F | Ordinal: 304
        void getAmmoSupplyPosition(void) const;

    // RVA: 0x137 | Ordinal: 312
        void getAzimuthInitial(void) const;

    // RVA: 0x138 | Ordinal: 313
        void getBarrelCircularError(void) const;

    // RVA: 0x14B | Ordinal: 332
        void getConnectorName(void) const;

    // RVA: 0x157 | Ordinal: 344
        void getDefenciveTurret(void) const;

    // RVA: 0x15E | Ordinal: 351
        void getDisplayName(void) const;

    // RVA: 0x162 | Ordinal: 355
        void getDropCartridge(void) const;

    // RVA: 0x164 | Ordinal: 357
        void getEffectiveFireDistance(void) const;

    // RVA: 0x166 | Ordinal: 359
        void getEjectorConnectorName(void) const;

    // RVA: 0x168 | Ordinal: 361
        void getEjectorDir(void) const;

    // RVA: 0x16A | Ordinal: 363
        void getEjectorPosition(void) const;

    // RVA: 0x16C | Ordinal: 365
        void getElevationInitial(void) const;

    // RVA: 0x17F | Ordinal: 384
        void getGunDescriptor(void) const;

    // RVA: 0x1A0 | Ordinal: 417
        void getMuzzlePosition(void) const;

    // RVA: 0x1B8 | Ordinal: 441
        void getShortName(void) const;

    // RVA: 0x20D | Ordinal: 526
        void load(class wDatabaseLoader *);

    // RVA: 0x10 | Ordinal: 17
        void wAircraftGunMountDescriptor(class wAircraftGunMountDescriptor const &);

    // RVA: 0x11 | Ordinal: 18
        void wAircraftGunMountDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x4E | Ordinal: 79
        void _wAircraftGunMountDescriptor(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAIRCRAFTGUNMOUNTDESCRIPTOR_HPP
