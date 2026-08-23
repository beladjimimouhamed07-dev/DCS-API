#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ThrottleDuct
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ThrottleDuct
{
public:

    // RVA: 0x155 | Ordinal: 342
        void ThrottleDuct(class EagleFM::ThrottleDuct &&);

    // RVA: 0x156 | Ordinal: 343
        void ThrottleDuct(class EagleFM::ThrottleDuct const &);

    // RVA: 0x157 | Ordinal: 344
        void ThrottleDuct(class EagleFM::JetNozzle *);

    // RVA: 0x43A | Ordinal: 1083
        void calcThrottleAMF(struct EagleFM::AirFlowState const &, double) const;

    // RVA: 0x446 | Ordinal: 1095
        void calc_amf(struct EagleFM::AirFlowState);

    // RVA: 0x1E6 | Ordinal: 487
        void _ThrottleDuct(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_THROTTLEDUCT_HPP
