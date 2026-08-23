#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Mixer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class Mixer
{
public:

    // RVA: 0xF3 | Ordinal: 244
        void Mixer(class EagleFM::Cooling::Mixer const &);

    // RVA: 0xF4 | Ordinal: 245
        void Mixer(void);

    // RVA: 0x471 | Ordinal: 1138
        void connectBefore(class EagleFM::Cooling::IElement *);

    // RVA: 0x491 | Ordinal: 1170
        void doSimulate(double);

    // RVA: 0x1C2 | Ordinal: 451
        void _Mixer(void);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_MIXER_HPP
