#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AutopilotHeightCorrector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AutopilotHeightCorrector
{
public:

    // RVA: 0x25 | Ordinal: 38
        void AutopilotHeightCorrector(class EagleFM::AutopilotHeightCorrector &&);

    // RVA: 0x26 | Ordinal: 39
        void AutopilotHeightCorrector(class EagleFM::AutopilotHeightCorrector const &);

    // RVA: 0x27 | Ordinal: 40
        void AutopilotHeightCorrector(class EagleFM::DynamicBody const *const);

    // RVA: 0x706 | Ordinal: 1799
        void get_sensor(void);

    // RVA: 0x935 | Ordinal: 2358
        void set_base(void);

    // RVA: 0x94D | Ordinal: 2382
        void simulate(void);

    // RVA: 0x183 | Ordinal: 388
        void _AutopilotHeightCorrector(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AUTOPILOTHEIGHTCORRECTOR_HPP
