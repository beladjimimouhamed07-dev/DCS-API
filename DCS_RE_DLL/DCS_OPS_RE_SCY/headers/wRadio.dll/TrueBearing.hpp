#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: TrueBearing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class TrueBearing
{
public:

    // RVA: 0x5B | Ordinal: 92
        void TrueBearing(class avRadioMeasureEquipment::TrueBearing &&);

    // RVA: 0x5C | Ordinal: 93
        void TrueBearing(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x5D | Ordinal: 94
        void TrueBearing(class avRadioMeasureEquipment::TrueBearing const &);

    // RVA: 0x15F | Ordinal: 352
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0xA4 | Ordinal: 165
        void _TrueBearing(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_TRUEBEARING_HPP
