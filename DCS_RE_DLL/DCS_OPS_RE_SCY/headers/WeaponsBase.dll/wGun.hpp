#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wGun
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace weapons_gun {

class wGun
{
public:

    // RVA: 0xDB | Ordinal: 220
        void beginBurst(class Mail::Stream &);

    // RVA: 0x114 | Ordinal: 277
        void endBurst(void);

    // RVA: 0x118 | Ordinal: 281
        void fill_shell_coeffs(void);

    // RVA: 0x13E | Ordinal: 319
        void getBurstIsMaster(void) const;

    // RVA: 0x140 | Ordinal: 321
        void getBurstLength(void) const;

    // RVA: 0x177 | Ordinal: 376
        void getFireRate(void) const;

    // RVA: 0x179 | Ordinal: 378
        void getFireRateIndex(void) const;

    // RVA: 0x1DE | Ordinal: 479
        void get_descriptor(void) const;

    // RVA: 0x1DF | Ordinal: 480
        void get_flags(void) const;

    // RVA: 0x1E2 | Ordinal: 483
        void get_property_table(void);

    // RVA: 0x1E3 | Ordinal: 484
        void get_shell_wakeup_time(void) const;

    // RVA: 0x1E4 | Ordinal: 485
        void get_this_burst_shells_fired(void) const;

    // RVA: 0x200 | Ordinal: 513
        void isActive(void) const;

    // RVA: 0x205 | Ordinal: 518
        void isFiring(void) const;

    // RVA: 0x209 | Ordinal: 522
        void isReadyToFire(void) const;

    // RVA: 0x22B | Ordinal: 556
        void on_fire_start(void);

    // RVA: 0x22C | Ordinal: 557
        void on_fire_stop(void);

    // RVA: 0x22D | Ordinal: 558
        void on_shot(class wShell const *);

    // RVA: 0x22E | Ordinal: 559
        void open_fire(void);

    // RVA: 0x23D | Ordinal: 574
        void restoreBurstMaster(void);

    // RVA: 0x23F | Ordinal: 576
        void selectFireRateIndex(int);

    // RVA: 0x24B | Ordinal: 588
        void setBurstIsMaster(bool);

    // RVA: 0x24C | Ordinal: 589
        void setBurstLength(int, bool);

    // RVA: 0x260 | Ordinal: 609
        void setFireRate(double);

    // RVA: 0x290 | Ordinal: 657
        void set_fire_stop_hndl(class std::function<void __cdecl(void)> const &);

    // RVA: 0x291 | Ordinal: 658
        void set_flag(unsigned char, bool);

    // RVA: 0x292 | Ordinal: 659
        void set_on_shot_hndl(class std::function<void __cdecl(class wShell const *)> const &);

    // RVA: 0x2A3 | Ordinal: 676
        void stop_fire(void);

    // RVA: 0x2A6 | Ordinal: 679
        void sync_T(class Mail::Stream &);

    // RVA: 0x24 | Ordinal: 37
        void wGun(class weapons_gun::wGun const &);

    // RVA: 0x25 | Ordinal: 38
        void wGun(class weapons_gun::wGunDescriptor const &, class wIGunCarriage *, class wAmmoSupply *, bool);

    // RVA: 0x5A | Ordinal: 91
        void _wGun(void);
};

} // namespace weapons_gun

// DCS_OPS_RE_WEAPONSBASE.DLL_WGUN_HPP
