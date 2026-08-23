#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wDetectorWorker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDetectorWorker
{
public:

    // RVA: 0x623 | Ordinal: 1572
        void alloc_first_block(void);

    // RVA: 0x653 | Ordinal: 1620
        void checkObjLOSInMT(struct edterrain::AsyncContextRequestAccess *, class osg::Vec3f const &, class osg::Vec3f const &, unsigned int, bool);

    // RVA: 0x750 | Ordinal: 1873
        void createInstance(void);

    // RVA: 0x7CC | Ordinal: 1997
        void getBarrier(void);

    // RVA: 0x842 | Ordinal: 2115
        void getInstance(void);

    // RVA: 0xB65 | Ordinal: 2918
        void removeInstance(void);

    // RVA: 0xB73 | Ordinal: 2932
        void requestIntersections(class ed::Ptr<class DetectorRequest, struct DetectorRequestDeleter>);

    // RVA: 0xC13 | Ordinal: 3092
        void start(void);

    // RVA: 0xC20 | Ordinal: 3105
        void stop(void);

    // RVA: 0x1F1 | Ordinal: 498
        void wDetectorWorker(void);

    // RVA: 0x2D5 | Ordinal: 726
        void _wDetectorWorker(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WDETECTORWORKER_HPP
