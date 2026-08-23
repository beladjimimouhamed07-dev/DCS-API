#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: FragmentationBlastHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FragmentationDamage {

class FragmentationBlastHandler
{
public:

    // RVA: 0x4 | Ordinal: 5
        void FragmentationBlastHandler(void);

    // RVA: 0x10C | Ordinal: 269
        void damagePrey(class MovingObject *, struct wsCollisionData *);

    // RVA: 0x47 | Ordinal: 72
        void _FragmentationBlastHandler(void);
};

} // namespace FragmentationDamage

// DCS_OPS_RE_WEAPONSBASE.DLL_FRAGMENTATIONBLASTHANDLER_HPP
