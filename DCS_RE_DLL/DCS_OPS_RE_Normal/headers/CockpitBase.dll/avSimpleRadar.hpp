#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleRadar>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleRadar_
{
public:

    // RVA: 0x78F | Ordinal: 1936
        void DoStop(void);

    // RVA: 0x7AE | Ordinal: 1967
        void GetDeltaTime(void) const;

    // RVA: 0x7F2 | Ordinal: 2035
        void Kill(bool);

    // RVA: 0x8AD | Ordinal: 2222
        void SetDeltaTime(double);

    // RVA: 0x8B9 | Ordinal: 2234
        void SetParent(class cockpit::avSimpleRadar *);

    // RVA: 0x8C6 | Ordinal: 2247
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLERADAR_HPP
