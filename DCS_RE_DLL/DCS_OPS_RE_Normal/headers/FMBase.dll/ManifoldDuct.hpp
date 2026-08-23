#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ManifoldDuct
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ManifoldDuct
{
public:

    // RVA: 0xED | Ordinal: 238
        void ManifoldDuct(class EagleFM::ManifoldDuct &&);

    // RVA: 0xEE | Ordinal: 239
        void ManifoldDuct(class EagleFM::ManifoldDuct const &);

    // RVA: 0xEF | Ordinal: 240
        void ManifoldDuct(class EagleFM::PistonEngine *);

    // RVA: 0x444 | Ordinal: 1093
        void calc_amf(struct EagleFM::AirFlowState);

    // RVA: 0x1C0 | Ordinal: 449
        void _ManifoldDuct(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_MANIFOLDDUCT_HPP
