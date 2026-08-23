#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Regulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class Regulator
{
public:

    // RVA: 0x47 | Ordinal: 72
        void Regulator(class Sounder::Regulator const &);

    // RVA: 0x48 | Ordinal: 73
        void Regulator(void);

    // RVA: 0x25A | Ordinal: 603
        void getGain(void) const;

    // RVA: 0x422 | Ordinal: 1059
        void setGain(float);

    // RVA: 0x9D | Ordinal: 158
        void _Regulator(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_REGULATOR_HPP
