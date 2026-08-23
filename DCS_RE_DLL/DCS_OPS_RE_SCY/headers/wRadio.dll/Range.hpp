#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Range
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class Range
{
public:

    // RVA: 0x3C | Ordinal: 61
        void Range(class avRadioMeasureEquipment::Range &&);

    // RVA: 0x3D | Ordinal: 62
        void Range(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x3E | Ordinal: 63
        void Range(class avRadioMeasureEquipment::Range const &);

    // RVA: 0x15C | Ordinal: 349
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0x9A | Ordinal: 155
        void _Range(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_RANGE_HPP
