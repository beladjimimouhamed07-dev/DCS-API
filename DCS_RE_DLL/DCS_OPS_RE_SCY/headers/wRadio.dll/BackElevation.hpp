#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: BackElevation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class BackElevation
{
public:

    // RVA: 0x10 | Ordinal: 17
        void BackElevation(class avRadioMeasureEquipment::BackElevation &&);

    // RVA: 0x11 | Ordinal: 18
        void BackElevation(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x12 | Ordinal: 19
        void BackElevation(class avRadioMeasureEquipment::BackElevation const &);

    // RVA: 0x15A | Ordinal: 347
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0x424 | Ordinal: 1061
        void setHalfWidth(double);

    // RVA: 0x8F | Ordinal: 144
        void _BackElevation(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_BACKELEVATION_HPP
