#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicSensor>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicSensor_
{
public:

    // RVA: 0x78C | Ordinal: 1933
        void DoStop(void);

    // RVA: 0x7AB | Ordinal: 1964
        void GetDeltaTime(void) const;

    // RVA: 0x7EF | Ordinal: 2032
        void Kill(bool);

    // RVA: 0x8AA | Ordinal: 2219
        void SetDeltaTime(double);

    // RVA: 0x8B6 | Ordinal: 2231
        void SetParent(class cockpit::avBasicSensor *);

    // RVA: 0x8C3 | Ordinal: 2244
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICSENSOR_HPP
