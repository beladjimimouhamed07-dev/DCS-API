#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: DistanceKiller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DistanceKiller
{
public:

    // RVA: 0x3 | Ordinal: 4
        void DistanceKiller(class DistanceKiller const &);

    // RVA: 0x4 | Ordinal: 5
        void DistanceKiller(float, class DistanceKillerManager *);

    // RVA: 0xD0 | Ordinal: 209
        void GetKillerDistance(void);

    // RVA: 0x112 | Ordinal: 275
        void RegisterKillByDistance(void);

    // RVA: 0x11D | Ordinal: 286
        void SetKillerDistance(float);

    // RVA: 0x13D | Ordinal: 318
        void UnregisterKillByDistance(void);

    // RVA: 0x3C | Ordinal: 61
        void _DistanceKiller(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_DISTANCEKILLER_HPP
