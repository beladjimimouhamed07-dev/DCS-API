#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicElectric
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicElectric
{
public:

    // RVA: 0xD5 | Ordinal: 214
        void avBasicElectric(class cockpit::avBasicElectric &&);

    // RVA: 0xD6 | Ordinal: 215
        void avBasicElectric(class cockpit::avBasicElectric const &);

    // RVA: 0xD7 | Ordinal: 216
        void avBasicElectric(void);

    // RVA: 0xC98 | Ordinal: 3225
        void getElecPower(void) const;

    // RVA: 0x16EC | Ordinal: 5869
        void setElecPower(bool);

    // RVA: 0x1A1A | Ordinal: 6683
        void switchElecOnOff(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICELECTRIC_HPP
