#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wTargetDetectionStatus
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wTargetDetectionStatus
{
public:

    // RVA: 0x675 | Ordinal: 1654
        void clear(void);

    // RVA: 0x67B | Ordinal: 1660
        void clear_visibility(void);

    // RVA: 0xC45 | Ordinal: 3142
        void update(double, unsigned char, unsigned char, unsigned char, unsigned char, class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x20E | Ordinal: 527
        void wTargetDetectionStatus(class wTargetDetectionStatus const &);

    // RVA: 0x20F | Ordinal: 528
        void wTargetDetectionStatus(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WTARGETDETECTIONSTATUS_HPP
