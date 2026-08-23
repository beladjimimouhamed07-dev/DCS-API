#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avNavCommon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avNavCommon
{
public:

    // RVA: 0x9B7 | Ordinal: 2488
        void calcLinearPtFrom_BrngTo_Range(class osg::Vec3d const &, double, double);

    // RVA: 0x9B9 | Ordinal: 2490
        void calcPassedRange(double, double, double, double, double, double);

    // RVA: 0x9BB | Ordinal: 2492
        void calcTrackDeviation(double, double, double, double, double, double);

    // RVA: 0x1032 | Ordinal: 4147
        void get_pt_lcoords(class wPosition3<double>, double, double, double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVNAVCOMMON_HPP
