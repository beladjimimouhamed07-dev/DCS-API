#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicAutoDrive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicAutoDrive
{
public:

    // RVA: 0xAA | Ordinal: 171
        void HydraulicAutoDrive(struct EagleFM::HydraulicDriveInit const &, double, double);

    // RVA: 0xAB | Ordinal: 172
        void HydraulicAutoDrive(void);

    // RVA: 0x4D3 | Ordinal: 1236
        void getAutoPlungerRelativePos(void) const;

    // RVA: 0x50C | Ordinal: 1293
        void getConsumption(void) const;

    // RVA: 0x514 | Ordinal: 1301
        void getControlLim(void) const;

    // RVA: 0x559 | Ordinal: 1370
        void getFeedBackRelativePos(bool) const;

    // RVA: 0x607 | Ordinal: 1544
        void getPlungerPos(void) const;

    // RVA: 0x60A | Ordinal: 1547
        void getPlungerRelativePos(bool) const;

    // RVA: 0x60C | Ordinal: 1549
        void getPlungerRelativeSpeed(void) const;

    // RVA: 0x60E | Ordinal: 1551
        void getPlungerSpeed(void) const;

    // RVA: 0x643 | Ordinal: 1604
        void getRelativeAutoControl(void) const;

    // RVA: 0x647 | Ordinal: 1608
        void getRelativeControl(void) const;

    // RVA: 0x71B | Ordinal: 1820
        void init(struct EagleFM::HydraulicDriveInit const &, double, double, double);

    // RVA: 0x760 | Ordinal: 1889
        void initState(double);

    // RVA: 0x82C | Ordinal: 2093
        void setControlLim(double);

    // RVA: 0x8C7 | Ordinal: 2248
        void setPlungerPos(double);

    // RVA: 0x8E5 | Ordinal: 2278
        void setRelativeAutoControl(double);

    // RVA: 0x8E7 | Ordinal: 2280
        void setRelativeControl(double);

    // RVA: 0x960 | Ordinal: 2401
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICAUTODRIVE_HPP
