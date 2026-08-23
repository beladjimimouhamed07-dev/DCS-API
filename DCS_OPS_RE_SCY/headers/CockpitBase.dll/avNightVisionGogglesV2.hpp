#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avNightVisionGogglesV2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avNightVisionGogglesV2
{
public:

    // RVA: 0x16F | Ordinal: 368
        void avNightVisionGogglesV2(class cockpit::avNightVisionGogglesV2 &&);

    // RVA: 0x170 | Ordinal: 369
        void avNightVisionGogglesV2(class cockpit::avNightVisionGogglesV2 const &);

    // RVA: 0x171 | Ordinal: 370
        void avNightVisionGogglesV2(void);

    // RVA: 0xBEA | Ordinal: 3051
        void fill(struct NightVisionParams &);

    // RVA: 0xE8B | Ordinal: 3724
        void get_actuation_time(void) const;

    // RVA: 0x1120 | Ordinal: 4385
        void helmet_type(void) const;

    // RVA: 0x16F2 | Ordinal: 5875
        void setElecPower(bool);

    // RVA: 0x1A1E | Ordinal: 6687
        void switchOnOff(bool);

    // RVA: 0x330 | Ordinal: 817
        void _avNightVisionGogglesV2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVNIGHTVISIONGOGGLESV2_HPP
