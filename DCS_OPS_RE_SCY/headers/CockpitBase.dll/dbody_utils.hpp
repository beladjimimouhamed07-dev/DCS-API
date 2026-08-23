#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: dbody_utils
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class dbody_utils
{
public:

    // RVA: 0x9B3 | Ordinal: 2484
        void calcAccelerationInPoint_l(class EagleFM::DynamicBody *, class Math::Vector<3, double> const &);

    // RVA: 0xD7A | Ordinal: 3451
        void getOrientation(class EagleFM::DynamicBody *);

    // RVA: 0xD7B | Ordinal: 3452
        void getOrientationT(class EagleFM::DynamicBody *);

    // RVA: 0xDA3 | Ordinal: 3492
        void getPosition(class EagleFM::DynamicBody *);

    // RVA: 0xE4D | Ordinal: 3662
        void getVelocity_w(class EagleFM::DynamicBody *);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_DBODY_UTILS_HPP
