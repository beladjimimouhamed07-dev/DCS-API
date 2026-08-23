#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ElectricSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ElectricSystem
{
public:

    // RVA: 0x74 | Ordinal: 117
        void ElectricSystem(class EagleFM::ElectricSystem const &);

    // RVA: 0x75 | Ordinal: 118
        void ElectricSystem(class EagleFM::AerodyneFM *, double);

    // RVA: 0x4C2 | Ordinal: 1219
        void getAmbientTemperatureC(void);

    // RVA: 0x7DE | Ordinal: 2015
        void reset(void);

    // RVA: 0x19E | Ordinal: 415
        void _ElectricSystem(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ELECTRICSYSTEM_HPP
