#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: WorldManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class WorldManager
{
public:

    // RVA: 0x549 | Ordinal: 1354
        void ConflagrationTime(class ed::basic_string<char> const &);

    // RVA: 0x56F | Ordinal: 1392
        void GetMissionCurrentDate(int &, int &, int &);

    // RVA: 0x570 | Ordinal: 1393
        void GetMissionDate(int &, int &, int &);

    // RVA: 0x571 | Ordinal: 1394
        void GetMissionRandomization(void);

    // RVA: 0x577 | Ordinal: 1400
        void GetNearestAirdrome(class wPosition3<float> &, float &);

    // RVA: 0x57A | Ordinal: 1403
        void GetPartsGroundOnLifeTime(void) const;

    // RVA: 0x58D | Ordinal: 1422
        void GetTrashGroundOnLifeTime(void) const;

    // RVA: 0x58E | Ordinal: 1423
        void GetTrashWaterOn(void) const;

    // RVA: 0x59A | Ordinal: 1435
        void HumanPtr(bool);

    // RVA: 0x59B | Ordinal: 1436
        void ID_OF_Human(void);

    // RVA: 0x5A1 | Ordinal: 1442
        void InitMissionDateAndTime(void);

    // RVA: 0x5C9 | Ordinal: 1482
        void ParseConfig(void);

    // RVA: 0x5DD | Ordinal: 1502
        void ResetHuman(class MovingObject *, bool);

    // RVA: 0x5E5 | Ordinal: 1510
        void SetHuman(class MovingObject *, bool);

    // RVA: 0x1D6 | Ordinal: 471
        void WorldManager(class WorldManager const &);

    // RVA: 0x1D7 | Ordinal: 472
        void WorldManager(void);

    // RVA: 0x613 | Ordinal: 1556
        void addListener(class wListener *);

    // RVA: 0x74A | Ordinal: 1867
        void create(class Common::Identifier const &, class Common::Identifiable **);

    // RVA: 0xA87 | Ordinal: 2696
        void notifyBirth(class Registered *);

    // RVA: 0xA88 | Ordinal: 2697
        void notifyDeath(class Registered *);

    // RVA: 0xB67 | Ordinal: 2920
        void removeListener(class wListener *);

    // RVA: 0x2CA | Ordinal: 715
        void _WorldManager(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WORLDMANAGER_HPP
