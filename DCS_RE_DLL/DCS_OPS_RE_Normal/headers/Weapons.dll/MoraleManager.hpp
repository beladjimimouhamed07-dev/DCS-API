#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: MoraleManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MoraleManager
{
public:

    // RVA: 0x1E | Ordinal: 31
        void MoraleManager(class MovingObject *, float, float, float, float, float);

    // RVA: 0x1F | Ordinal: 32
        void MoraleManager(void);

    // RVA: 0x288 | Ordinal: 649
        void canMove(void) const;

    // RVA: 0x289 | Ordinal: 650
        void canShoot(void) const;

    // RVA: 0x3EE | Ordinal: 1007
        void getMoraleLevel(void) const;

    // RVA: 0x3EF | Ordinal: 1008
        void getMoralePoints(void) const;

    // RVA: 0x48D | Ordinal: 1166
        void init(class MovingObject *, class Lua::Config &);

    // RVA: 0x678 | Ordinal: 1657
        void takeMoraleHit(float);

    // RVA: 0x68D | Ordinal: 1678
        void update(double);
};

// DCS_OPS_RE_WEAPONS.DLL_MORALEMANAGER_HPP
