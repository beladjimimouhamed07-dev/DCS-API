#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionAntiShip
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionAntiShip
{
public:

    // RVA: 0x334 | Ordinal: 821
        void getAmmunitionAntiShipHotJoinData(struct AmmunitionAntiShipHotJoinData &) const;

    // RVA: 0x519 | Ordinal: 1306
        void netCreate(struct AmmunitionAntiShipHotJoinData const &);

    // RVA: 0x520 | Ordinal: 1313
        void netDestructRange(struct AmmunitionAntiShipDestructRangeMessage const &);

    // RVA: 0x523 | Ordinal: 1316
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x53C | Ordinal: 1341
        void netSearchRange(struct AmmunitionAntiShipSearchRangeMessage const &);

    // RVA: 0x53D | Ordinal: 1342
        void netSearchRangeToTarget(struct AmmunitionAntiShipSearchRangeToTargetMessage const &);

    // RVA: 0x5E3 | Ordinal: 1508
        void setAmmunitionAntiShipHotJoinData(struct AmmunitionAntiShipHotJoinData const *);

    // RVA: 0x5F3 | Ordinal: 1524
        void setDestructRange(double);

    // RVA: 0x62E | Ordinal: 1583
        void setSearchRange(double);

    // RVA: 0x62F | Ordinal: 1584
        void setSearchRangeToTarget(double);

    // RVA: 0x638 | Ordinal: 1593
        void setTargetRCSHigh(void);

    // RVA: 0x639 | Ordinal: 1594
        void setTargetRCSLow(void);

    // RVA: 0x63A | Ordinal: 1595
        void setTargetRCSMedium(void);

    // RVA: 0x36 | Ordinal: 55
        void wAmmunitionAntiShip(void);

    // RVA: 0x6D | Ordinal: 110
        void _wAmmunitionAntiShip(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONANTISHIP_HPP
