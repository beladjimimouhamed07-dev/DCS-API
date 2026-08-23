#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AutoSmokeMarkerManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class AutoSmokeMarkerManager
{
public:

    // RVA: 0x659 | Ordinal: 1626
        void checkSmoke(unsigned int);

    // RVA: 0x754 | Ordinal: 1877
        void createSmoke(float, class osg::Vec3f const &, class osg::Vec4f const &, double);

    // RVA: 0x762 | Ordinal: 1891
        void deleteSmoke(unsigned int);

    // RVA: 0xA72 | Ordinal: 2675
        void netCreateSmoke(unsigned int, float, class osg::Vec3f const &, class osg::Vec4f const &, double);

    // RVA: 0xA73 | Ordinal: 2676
        void netDeleteSmoke(unsigned int);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_AUTOSMOKEMARKERMANAGER_HPP
