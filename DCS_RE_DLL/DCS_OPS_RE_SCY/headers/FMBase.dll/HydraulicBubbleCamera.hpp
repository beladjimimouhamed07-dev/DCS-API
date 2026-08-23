#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicBubbleCamera
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicBubbleCamera
{
public:

    // RVA: 0xAD | Ordinal: 174
        void HydraulicBubbleCamera(double, double);

    // RVA: 0x620 | Ordinal: 1569
        void getPressure(void) const;

    // RVA: 0x625 | Ordinal: 1574
        void getPressureMax(void) const;

    // RVA: 0x6DD | Ordinal: 1758
        void getVolume(void) const;

    // RVA: 0x6E4 | Ordinal: 1765
        void getVolumeMax(void) const;

    // RVA: 0x71D | Ordinal: 1822
        void init(double, double);

    // RVA: 0x962 | Ordinal: 2403
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICBUBBLECAMERA_HPP
