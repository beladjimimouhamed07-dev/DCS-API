#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wDetectorInfoStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDetectorInfoStorage
{
public:

    // RVA: 0x673 | Ordinal: 1652
        void clear(void);

    // RVA: 0x930 | Ordinal: 2353
        void get_detector_info(class MovingObject *) const;

    // RVA: 0x951 | Ordinal: 2386
        void get_pod_info(class wsType const &) const;

    // RVA: 0x97D | Ordinal: 2430
        void init(void);

    // RVA: 0x1EE | Ordinal: 495
        void wDetectorInfoStorage(class wDetectorInfoStorage &&);

    // RVA: 0x1EF | Ordinal: 496
        void wDetectorInfoStorage(class wDetectorInfoStorage const &);

    // RVA: 0x1F0 | Ordinal: 497
        void wDetectorInfoStorage(void);

    // RVA: 0x2D4 | Ordinal: 725
        void _wDetectorInfoStorage(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WDETECTORINFOSTORAGE_HPP
