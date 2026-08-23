#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionChangeableTrajectory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionChangeableTrajectory
{
public:

    // RVA: 0x207 | Ordinal: 520
        void SubmitImmediateDebugGeometry(void);

    // RVA: 0x493 | Ordinal: 1172
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x544 | Ordinal: 1349
        void netTerminalData(struct AmmunitionGuidedTermDataMessage const &);

    // RVA: 0x63B | Ordinal: 1596
        void setTerminalData(double, double, double, bool);

    // RVA: 0x63F | Ordinal: 1600
        void setValsNextTick(void);

    // RVA: 0x3A | Ordinal: 59
        void wAmmunitionChangeableTrajectory(void);

    // RVA: 0x71 | Ordinal: 114
        void _wAmmunitionChangeableTrajectory(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONCHANGEABLETRAJECTORY_HPP
