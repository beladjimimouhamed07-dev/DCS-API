#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionAtgm
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionAtgm
{
public:

    // RVA: 0x1DE | Ordinal: 479
        void Ny(void) const;

    // RVA: 0x206 | Ordinal: 519
        void SubmitImmediateDebugGeometry(void);

    // RVA: 0x20C | Ordinal: 525
        void Target_ID(void) const;

    // RVA: 0x24A | Ordinal: 587
        void assignSeekerPoint(class osg::Vec3f const &);

    // RVA: 0x490 | Ordinal: 1169
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x651 | Ordinal: 1618
        void simulate(void);

    // RVA: 0x37 | Ordinal: 56
        void wAmmunitionAtgm(void);

    // RVA: 0x6E | Ordinal: 111
        void _wAmmunitionAtgm(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONATGM_HPP
