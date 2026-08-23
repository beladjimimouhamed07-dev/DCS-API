#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AirDuctPart
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AirDuctPart
{
public:

    // RVA: 0xF | Ordinal: 16
        void AirDuctPart(class EagleFM::AirDuctPart const &);

    // RVA: 0x10 | Ordinal: 17
        void AirDuctPart(void);

    // RVA: 0x704 | Ordinal: 1797
        void get_pressure_out(void) const;

    // RVA: 0x708 | Ordinal: 1801
        void get_temperature_out(void) const;

    // RVA: 0x17C | Ordinal: 381
        void _AirDuctPart(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AIRDUCTPART_HPP
