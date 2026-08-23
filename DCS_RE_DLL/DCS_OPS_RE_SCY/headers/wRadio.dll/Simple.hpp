#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Simple
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class Simple
{
public:

    // RVA: 0x4F | Ordinal: 80
        void Simple(class avRadioMeasureEquipment::Simple &&);

    // RVA: 0x50 | Ordinal: 81
        void Simple(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x51 | Ordinal: 82
        void Simple(class avRadioMeasureEquipment::Simple const &);

    // RVA: 0x52 | Ordinal: 83
        void Simple(void);

    // RVA: 0x15E | Ordinal: 351
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0xA0 | Ordinal: 161
        void _Simple(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_SIMPLE_HPP
