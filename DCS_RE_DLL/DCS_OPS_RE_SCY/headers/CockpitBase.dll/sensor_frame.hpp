#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: sensor_frame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class sensor_frame
{
public:

    // RVA: 0x1561 | Ordinal: 5474
        void randomize(double) const;

    // RVA: 0x28F | Ordinal: 656
        void sensor_frame(double, double);

    // RVA: 0x290 | Ordinal: 657
        void sensor_frame(void);

    // RVA: 0x1999 | Ordinal: 6554
        void size(void) const;
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SENSOR_FRAME_HPP
