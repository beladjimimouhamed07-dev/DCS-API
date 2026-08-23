#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: SuperchargerDuct
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class SuperchargerDuct
{
public:

    // RVA: 0x13A | Ordinal: 315
        void SuperchargerDuct(class EagleFM::SuperchargerDuct &&);

    // RVA: 0x13B | Ordinal: 316
        void SuperchargerDuct(class EagleFM::SuperchargerDuct const &);

    // RVA: 0x13C | Ordinal: 317
        void SuperchargerDuct(class EagleFM::PistonEngine *, class EagleFM::JetCompressor *, double, double &, double &);

    // RVA: 0x425 | Ordinal: 1062
        void calcOutFlow(struct EagleFM::AirFlow const &, double, double, struct EagleFM::AirFlowState &) const;

    // RVA: 0x445 | Ordinal: 1094
        void calc_amf(struct EagleFM::AirFlowState);

    // RVA: 0x1DC | Ordinal: 477
        void _SuperchargerDuct(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SUPERCHARGERDUCT_HPP
