#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: avRadioMeasureEquipment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class avRadioMeasureEquipment
{
public:

    // RVA: 0x1C5 | Ordinal: 454
        void addMeasurement(unsigned int, unsigned int, class avRadioMeasureEquipment::Functor *);

    // RVA: 0x1C8 | Ordinal: 457
        void addReceiver(unsigned int);

    // RVA: 0x1C9 | Ordinal: 458
        void addReceiver(unsigned int, unsigned int, class avRadioMeasureEquipment::Functor *);

    // RVA: 0x5F | Ordinal: 96
        void avRadioMeasureEquipment(class avRadioMeasureEquipment const &);

    // RVA: 0x60 | Ordinal: 97
        void avRadioMeasureEquipment(void);

    // RVA: 0x293 | Ordinal: 660
        void getMeasurement(unsigned int) const;

    // RVA: 0x2B8 | Ordinal: 697
        void getReceivers(void);

    // RVA: 0x2B9 | Ordinal: 698
        void getReceivers(void) const;

    // RVA: 0x43A | Ordinal: 1083
        void setOnOff(bool);

    // RVA: 0x4B1 | Ordinal: 1202
        void update(void);

    // RVA: 0xA5 | Ordinal: 166
        void _avRadioMeasureEquipment(void);
};

// DCS_OPS_RE_WRADIO.DLL_AVRADIOMEASUREEQUIPMENT_HPP
