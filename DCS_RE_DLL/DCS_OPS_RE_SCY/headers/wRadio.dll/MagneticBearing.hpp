#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: MagneticBearing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class MagneticBearing
{
public:

    // RVA: 0x2F | Ordinal: 48
        void MagneticBearing(class avRadioMeasureEquipment::MagneticBearing &&);

    // RVA: 0x30 | Ordinal: 49
        void MagneticBearing(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x31 | Ordinal: 50
        void MagneticBearing(class avRadioMeasureEquipment::MagneticBearing const &);

    // RVA: 0x15B | Ordinal: 348
        void operator()(class wRadioReceiver &, struct avRadioMeasureEquipment::Measurement &) const;

    // RVA: 0x95 | Ordinal: 150
        void _MagneticBearing(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_MAGNETICBEARING_HPP
