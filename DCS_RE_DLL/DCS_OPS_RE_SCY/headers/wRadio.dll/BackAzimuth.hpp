#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: BackAzimuth
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class BackAzimuth
{
public:

    // RVA: 0xD | Ordinal: 14
        void BackAzimuth(class avRadioMeasureEquipment::BackAzimuth &&);

    // RVA: 0xE | Ordinal: 15
        void BackAzimuth(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0xF | Ordinal: 16
        void BackAzimuth(class avRadioMeasureEquipment::BackAzimuth const &);

    // RVA: 0x159 | Ordinal: 346
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0x423 | Ordinal: 1060
        void setHalfWidth(double);

    // RVA: 0x8E | Ordinal: 143
        void _BackAzimuth(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_BACKAZIMUTH_HPP
