#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ListTargetManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ListTargetManager
{
public:

    // RVA: 0x109 | Ordinal: 266
        void ListTargetManager(class ListTargetManager const &);

    // RVA: 0x10A | Ordinal: 267
        void ListTargetManager(void);

    // RVA: 0x612 | Ordinal: 1555
        void addFriend(unsigned int);

    // RVA: 0x617 | Ordinal: 1560
        void addTarget(unsigned int);

    // RVA: 0x654 | Ordinal: 1621
        void checkPresenceObjectInList(unsigned int);

    // RVA: 0x859 | Ordinal: 2138
        void getListFriendsAndNeutrals(void) const;

    // RVA: 0x85A | Ordinal: 2139
        void getListTargets(void) const;

    // RVA: 0x98C | Ordinal: 2445
        void initializeTargetManager(void);

    // RVA: 0xB64 | Ordinal: 2917
        void removeFriend(unsigned int);

    // RVA: 0xB6B | Ordinal: 2924
        void removeTarget(unsigned int);

    // RVA: 0xC35 | Ordinal: 3126
        void uninitializeTargetManager(void);

    // RVA: 0x282 | Ordinal: 643
        void _ListTargetManager(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_LISTTARGETMANAGER_HPP
