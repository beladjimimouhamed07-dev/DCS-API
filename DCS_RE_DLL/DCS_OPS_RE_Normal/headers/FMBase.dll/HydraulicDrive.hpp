#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicDrive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicDrive
{
public:

    // RVA: 0xAF | Ordinal: 176
        void HydraulicDrive(struct EagleFM::HydraulicDriveInit const &);

    // RVA: 0xB0 | Ordinal: 177
        void HydraulicDrive(void);

    // RVA: 0x50E | Ordinal: 1295
        void getConsumption(void) const;

    // RVA: 0x515 | Ordinal: 1302
        void getControlLim(void) const;

    // RVA: 0x608 | Ordinal: 1545
        void getPlungerPos(void) const;

    // RVA: 0x609 | Ordinal: 1546
        void getPlungerPosSymmetric(void) const;

    // RVA: 0x60B | Ordinal: 1548
        void getPlungerRelativePos(bool) const;

    // RVA: 0x60D | Ordinal: 1550
        void getPlungerRelativeSpeed(void) const;

    // RVA: 0x60F | Ordinal: 1552
        void getPlungerSpeed(void) const;

    // RVA: 0x64A | Ordinal: 1611
        void getRelativeControl(void) const;

    // RVA: 0x71F | Ordinal: 1824
        void init(struct EagleFM::HydraulicDriveInit const &);

    // RVA: 0x761 | Ordinal: 1890
        void initState(double);

    // RVA: 0x82D | Ordinal: 2094
        void setControlLim(double);

    // RVA: 0x8C8 | Ordinal: 2249
        void setPlungerPos(double);

    // RVA: 0x8C9 | Ordinal: 2250
        void setPlungerRelativePos(double, bool);

    // RVA: 0x8EA | Ordinal: 2283
        void setRelativeControl(double);

    // RVA: 0x963 | Ordinal: 2404
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICDRIVE_HPP
