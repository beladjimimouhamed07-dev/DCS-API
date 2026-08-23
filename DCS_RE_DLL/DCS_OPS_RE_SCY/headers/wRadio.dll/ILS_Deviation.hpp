#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: ILS_Deviation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace avRadioMeasureEquipment {

class ILS_Deviation
{
public:

    // RVA: 0x19 | Ordinal: 26
        void ILS_Deviation(class avRadioMeasureEquipment::ILS_Deviation &&);

    // RVA: 0x1A | Ordinal: 27
        void ILS_Deviation(struct avRadioMeasureEquipment::CheckSignal const &);

    // RVA: 0x1B | Ordinal: 28
        void ILS_Deviation(class avRadioMeasureEquipment::ILS_Deviation const &);

    // RVA: 0x2C4 | Ordinal: 709
        void getSignalsSum(class wRadioReceiver &, class osg::Vec3f &, float &) const;

    // RVA: 0x92 | Ordinal: 147
        void _ILS_Deviation(void);
};

} // namespace avRadioMeasureEquipment

// DCS_OPS_RE_WRADIO.DLL_ILS_DEVIATION_HPP
