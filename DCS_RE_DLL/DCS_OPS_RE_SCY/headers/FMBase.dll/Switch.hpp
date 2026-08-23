#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Switch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Switch
{
public:

    // RVA: 0x3A3 | Ordinal: 932
        void Reset(void);

    // RVA: 0x13D | Ordinal: 318
        void Switch(class EagleFM::Elec::Switch const &);

    // RVA: 0x13E | Ordinal: 319
        void Switch(void);

    // RVA: 0x44D | Ordinal: 1102
        void canReceiveFrom(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x451 | Ordinal: 1106
        void canTransmitTo(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x5A1 | Ordinal: 1442
        void getIsOn(void) const;

    // RVA: 0x8B2 | Ordinal: 2227
        void setOnOff(bool);

    // RVA: 0x987 | Ordinal: 2440
        void switchOnOff(void);

    // RVA: 0x1DD | Ordinal: 478
        void _Switch(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SWITCH_HPP
