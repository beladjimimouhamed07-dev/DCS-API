#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CoalitionTargetManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CoalitionTargetManager
{
public:

    // RVA: 0x64 | Ordinal: 101
        void CoalitionTargetManager(class CoalitionTargetManager const &);

    // RVA: 0x65 | Ordinal: 102
        void CoalitionTargetManager(char);

    // RVA: 0x660 | Ordinal: 1633
        void check_human(class MovingObject *);

    // RVA: 0x665 | Ordinal: 1638
        void check_presence_in_list(class MovingObject *, class ed::list<struct CoalitionTargetManager::targetCache, class ed::allocator<struct CoalitionTargetManager::targetCache>> const &);

    // RVA: 0x668 | Ordinal: 1641
        void check_target(class MovingObject *);

    // RVA: 0x66A | Ordinal: 1643
        void check_weapon_target(class MovingObject *);

    // RVA: 0x6DA | Ordinal: 1755
        void coalition(void) const;

    // RVA: 0x939 | Ordinal: 2362
        void get_listHumanTargets(void) const;

    // RVA: 0x93A | Ordinal: 2363
        void get_listTargets(void) const;

    // RVA: 0x93B | Ordinal: 2364
        void get_listWeaponTargets(void) const;

    // RVA: 0xA91 | Ordinal: 2706
        void onCreate(class Registered *);

    // RVA: 0xA93 | Ordinal: 2708
        void onDestroy(class Registered *);

    // RVA: 0xB6F | Ordinal: 2928
        void remove_from_list(class MovingObject *, class ed::list<struct CoalitionTargetManager::targetCache, class ed::allocator<struct CoalitionTargetManager::targetCache>> &);

    // RVA: 0xB88 | Ordinal: 2953
        void scan(void);

    // RVA: 0xC55 | Ordinal: 3158
        void update_ptrs(class ed::list<struct CoalitionTargetManager::targetCache, class ed::allocator<struct CoalitionTargetManager::targetCache>> &) const;

    // RVA: 0x24A | Ordinal: 587
        void _CoalitionTargetManager(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_COALITIONTARGETMANAGER_HPP
