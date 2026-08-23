#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionVikhr
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionVikhr
{
public:

    // RVA: 0x1E0 | Ordinal: 481
        void Ny(void) const;

    // RVA: 0x1E6 | Ordinal: 487
        void OnNetworkMessage(struct GuidedWeaponNetMessage const &);

    // RVA: 0x20A | Ordinal: 523
        void SubmitImmediateDebugGeometry(void);

    // RVA: 0x20E | Ordinal: 527
        void Target_ID(void) const;

    // RVA: 0x24B | Ordinal: 588
        void assignSeekerPoint(class osg::Vec3f const &);

    // RVA: 0x253 | Ordinal: 596
        void assignTargetPoint(class osg::Vec3f const &);

    // RVA: 0x499 | Ordinal: 1178
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x635 | Ordinal: 1590
        void setTarget(unsigned int);

    // RVA: 0x657 | Ordinal: 1624
        void simulate(void);

    // RVA: 0x40 | Ordinal: 65
        void wAmmunitionVikhr(void);

    // RVA: 0x77 | Ordinal: 120
        void _wAmmunitionVikhr(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONVIKHR_HPP
