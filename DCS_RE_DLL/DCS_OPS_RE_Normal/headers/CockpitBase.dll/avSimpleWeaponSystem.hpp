#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleWeaponSystem>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleWeaponSystem_
{
public:

    // RVA: 0x790 | Ordinal: 1937
        void DoStop(void);

    // RVA: 0x7AF | Ordinal: 1968
        void GetDeltaTime(void) const;

    // RVA: 0x7F3 | Ordinal: 2036
        void Kill(bool);

    // RVA: 0x8AE | Ordinal: 2223
        void SetDeltaTime(double);

    // RVA: 0x8BA | Ordinal: 2235
        void SetParent(class cockpit::avSimpleWeaponSystem *);

    // RVA: 0x8C7 | Ordinal: 2248
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLEWEAPONSYSTEM_HPP
