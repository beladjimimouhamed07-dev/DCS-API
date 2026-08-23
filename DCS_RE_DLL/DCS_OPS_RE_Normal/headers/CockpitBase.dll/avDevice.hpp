#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDevice>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDevice_
{
public:

    // RVA: 0x78D | Ordinal: 1934
        void DoStop(void);

    // RVA: 0x7AC | Ordinal: 1965
        void GetDeltaTime(void) const;

    // RVA: 0x7F0 | Ordinal: 2033
        void Kill(bool);

    // RVA: 0x8AB | Ordinal: 2220
        void SetDeltaTime(double);

    // RVA: 0x8B7 | Ordinal: 2232
        void SetParent(class cockpit::avDevice *);

    // RVA: 0x8C4 | Ordinal: 2245
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDEVICE_HPP
