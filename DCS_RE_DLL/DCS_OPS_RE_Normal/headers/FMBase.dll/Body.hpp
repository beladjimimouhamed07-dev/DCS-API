#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Body
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class Body
{
public:

    // RVA: 0x33 | Ordinal: 52
        void Body(class EagleFM::Cooling::Body &&);

    // RVA: 0x34 | Ordinal: 53
        void Body(class EagleFM::Cooling::Body const &);

    // RVA: 0x35 | Ordinal: 54
        void Body(void);

    // RVA: 0x488 | Ordinal: 1161
        void doSimulate(double);

    // RVA: 0x739 | Ordinal: 1850
        void initBody(char const *, float, float);

    // RVA: 0x743 | Ordinal: 1860
        void initForWaterBoil(class EagleFM::Cooling::Tank *);

    // RVA: 0x188 | Ordinal: 393
        void _Body(void);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BODY_HPP
