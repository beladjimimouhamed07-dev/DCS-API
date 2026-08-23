#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionBallute
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionBallute
{
public:

    // RVA: 0x1E3 | Ordinal: 484
        void OnNetworkMessage(struct BalluteNetMessage const &);

    // RVA: 0x1FE | Ordinal: 511
        void SetBalluteSuppress(bool);

    // RVA: 0x27F | Ordinal: 640
        void canBeImpostor(void) const;

    // RVA: 0x335 | Ordinal: 822
        void getAmmunitionBalluteHotJoinData(struct AmmunitionBalluteHotJoinData &) const;

    // RVA: 0x491 | Ordinal: 1170
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x51A | Ordinal: 1307
        void netCreate(struct AmmunitionBalluteHotJoinData const &);

    // RVA: 0x524 | Ordinal: 1317
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x5E4 | Ordinal: 1509
        void setAmmunitionBalluteHotJoinData(struct AmmunitionBalluteHotJoinData const *);

    // RVA: 0x38 | Ordinal: 57
        void wAmmunitionBallute(void);

    // RVA: 0x6F | Ordinal: 112
        void _wAmmunitionBallute(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONBALLUTE_HPP
