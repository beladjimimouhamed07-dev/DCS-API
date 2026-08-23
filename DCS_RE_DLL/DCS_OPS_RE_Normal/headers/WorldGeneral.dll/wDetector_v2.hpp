#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wDetector_v2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDetector_v2
{
public:

    // RVA: 0x657 | Ordinal: 1624
        void checkShooterInMT(unsigned int, struct DetectionAttributes &, class wTargetDetectionStatus &, class wsType const &, void *);

    // RVA: 0x658 | Ordinal: 1625
        void checkShooterInMT(unsigned int, class wTargetDetectionStatus &, class wsType const &, void *);

    // RVA: 0x65B | Ordinal: 1628
        void checkTargetInMT(unsigned int, struct DetectionAttributes &, class wTargetDetectionStatus &, bool);

    // RVA: 0x65C | Ordinal: 1629
        void checkTargetInMT(unsigned int, class wTargetDetectionStatus &, bool const &, unsigned int *);

    // RVA: 0xB74 | Ordinal: 2933
        void requestIntersections(unsigned int, bool const &, unsigned int *);

    // RVA: 0xBA4 | Ordinal: 2981
        void setDetectorWorker(class wDetectorWorker *);

    // RVA: 0xC50 | Ordinal: 3153
        void updateTargetAttributes(unsigned int, struct DetectionAttributes &);

    // RVA: 0x1F2 | Ordinal: 499
        void wDetector_v2(class wDetector_v2 const &);

    // RVA: 0x1F3 | Ordinal: 500
        void wDetector_v2(void);

    // RVA: 0x2D6 | Ordinal: 727
        void _wDetector_v2(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WDETECTOR_V2_HPP
