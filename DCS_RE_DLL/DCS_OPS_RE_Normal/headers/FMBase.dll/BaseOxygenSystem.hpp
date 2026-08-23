#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: BaseOxygenSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class BaseOxygenSystem
{
public:

    // RVA: 0x29 | Ordinal: 42
        void BaseOxygenSystem(class EagleFM::BaseOxygenSystem const &);

    // RVA: 0x2A | Ordinal: 43
        void BaseOxygenSystem(class EagleFM::AerodyneFM *, double);

    // RVA: 0x502 | Ordinal: 1283
        void getCockpitPressureSpeed(int) const;

    // RVA: 0x184 | Ordinal: 389
        void _BaseOxygenSystem(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BASEOXYGENSYSTEM_HPP
