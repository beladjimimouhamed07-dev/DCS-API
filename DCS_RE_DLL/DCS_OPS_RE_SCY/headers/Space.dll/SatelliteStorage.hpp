#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Space.dll
// Class: SatelliteStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SatelliteStorage
{
public:

    // RVA: 0x15 | Ordinal: 22
        void Init(void);

    // RVA: 0x1 | Ordinal: 2
        void SatelliteStorage(void);

    // RVA: 0x1E | Ordinal: 31
        void clear(void);

    // RVA: 0x1F | Ordinal: 32
        void createSatellite(int, unsigned char);

    // RVA: 0x30 | Ordinal: 49
        void getSatellite(int, unsigned char);

    // RVA: 0x47 | Ordinal: 72
        void notifySatelliteDeath(class waSatellite *);

    // RVA: 0x56 | Ordinal: 87
        void updateSatellitesPos(double);

    // RVA: 0x57 | Ordinal: 88
        void updateSatellitesPos(void);

    // RVA: 0x8 | Ordinal: 9
        void _SatelliteStorage(void);
};

// DCS_OPS_RE_SPACE.DLL_SATELLITESTORAGE_HPP
