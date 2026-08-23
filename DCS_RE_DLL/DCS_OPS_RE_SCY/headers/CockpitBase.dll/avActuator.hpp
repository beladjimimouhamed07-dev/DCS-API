#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avActuator>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avActuator_
{
public:

    // RVA: 0x78B | Ordinal: 1932
        void DoStop(void);

    // RVA: 0x7AA | Ordinal: 1963
        void GetDeltaTime(void) const;

    // RVA: 0x7EE | Ordinal: 2031
        void Kill(bool);

    // RVA: 0x8A9 | Ordinal: 2218
        void SetDeltaTime(double);

    // RVA: 0x8B5 | Ordinal: 2230
        void SetParent(class cockpit::avActuator *);

    // RVA: 0x8C2 | Ordinal: 2243
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVACTUATOR_HPP
