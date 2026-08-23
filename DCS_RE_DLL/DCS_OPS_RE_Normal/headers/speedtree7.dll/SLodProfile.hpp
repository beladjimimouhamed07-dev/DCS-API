#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: SLodProfile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class SLodProfile
{
public:

    // RVA: 0x18A | Ordinal: 395
        void ComputeDerived(void);

    // RVA: 0x201 | Ordinal: 514
        void IsValid(void) const;

    // RVA: 0x54 | Ordinal: 85
        void SLodProfile(void);

    // RVA: 0x25E | Ordinal: 607
        void Scale(float);

    // RVA: 0x291 | Ordinal: 658
        void Square(struct SpeedTree::SLodProfile &) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_SLODPROFILE_HPP
