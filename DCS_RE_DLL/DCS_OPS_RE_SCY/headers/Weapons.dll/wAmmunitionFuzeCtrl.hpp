#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionFuzeCtrl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionFuzeCtrl
{
public:

    // RVA: 0x496 | Ordinal: 1175
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x53A | Ordinal: 1339
        void netOpenHeight(struct AmmunitionFuzeCtrlNetOpenHeightMessage const &);

    // RVA: 0x545 | Ordinal: 1350
        void netTimeDelay(struct AmmunitionFuzeCtrlNetTimeDelayMessage const &);

    // RVA: 0x621 | Ordinal: 1570
        void setOpenHeight(double, bool);

    // RVA: 0x63E | Ordinal: 1599
        void setTimeDelay(double, bool);

    // RVA: 0x654 | Ordinal: 1621
        void simulate(void);

    // RVA: 0x3D | Ordinal: 62
        void wAmmunitionFuzeCtrl(void);

    // RVA: 0x74 | Ordinal: 117
        void _wAmmunitionFuzeCtrl(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONFUZECTRL_HPP
