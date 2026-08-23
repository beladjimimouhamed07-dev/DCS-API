#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: RangeToGlideslopeBeacon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class RangeToGlideslopeBeacon
{
public:

    // RVA: 0x3F | Ordinal: 64
        void RangeToGlideslopeBeacon(class avRadioMeasureEquipment::RangeToGlideslopeBeacon &&);

    // RVA: 0x40 | Ordinal: 65
        void RangeToGlideslopeBeacon(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x41 | Ordinal: 66
        void RangeToGlideslopeBeacon(class avRadioMeasureEquipment::RangeToGlideslopeBeacon const &);

    // RVA: 0x15D | Ordinal: 350
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0x9B | Ordinal: 156
        void _RangeToGlideslopeBeacon(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_RANGETOGLIDESLOPEBEACON_HPP
