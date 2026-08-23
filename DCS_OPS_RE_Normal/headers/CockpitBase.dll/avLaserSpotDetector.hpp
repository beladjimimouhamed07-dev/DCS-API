#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avLaserSpotDetector>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avLaserSpotDetector_
{
public:

    // RVA: 0x78E | Ordinal: 1935
        void DoStop(void);

    // RVA: 0x7AD | Ordinal: 1966
        void GetDeltaTime(void) const;

    // RVA: 0x7F1 | Ordinal: 2034
        void Kill(bool);

    // RVA: 0x8AC | Ordinal: 2221
        void SetDeltaTime(double);

    // RVA: 0x8B8 | Ordinal: 2233
        void SetParent(class cockpit::avLaserSpotDetector *);

    // RVA: 0x8C5 | Ordinal: 2246
        void Start(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVLASERSPOTDETECTOR_HPP
