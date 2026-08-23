#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionCbu
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionCbu
{
public:

    // RVA: 0x1E4 | Ordinal: 485
        void OnNetworkMessage(struct CbuNetMessage const &);

    // RVA: 0x1FF | Ordinal: 512
        void SetCbuParametrs(class Math::Vector<3, double> const &, double, double, bool, bool, class Math::Vector<3, double> const &);

    // RVA: 0x336 | Ordinal: 823
        void getAmmunitionCbuHotJoinData(struct AmmunitionCbuHotJoinData &) const;

    // RVA: 0x35F | Ordinal: 864
        void getCbuParameters(class Math::Vector<3, double> *, double *, double *, bool *, bool *, class Math::Vector<3, double> *);

    // RVA: 0x492 | Ordinal: 1171
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x51B | Ordinal: 1308
        void netCreate(struct AmmunitionCbuHotJoinData const &);

    // RVA: 0x525 | Ordinal: 1318
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x5E5 | Ordinal: 1510
        void setAmmunitionCbuHotJoinData(struct AmmunitionCbuHotJoinData const *);

    // RVA: 0x637 | Ordinal: 1592
        void setTargetPoint(class Math::Vector<3, double>);

    // RVA: 0x39 | Ordinal: 58
        void wAmmunitionCbu(void);

    // RVA: 0x70 | Ordinal: 113
        void _wAmmunitionCbu(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONCBU_HPP
