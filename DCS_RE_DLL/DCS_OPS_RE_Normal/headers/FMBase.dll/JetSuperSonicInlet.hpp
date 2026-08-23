#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetSuperSonicInlet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetSuperSonicInlet
{
public:

    // RVA: 0xD6 | Ordinal: 215
        void JetSuperSonicInlet(class Math::Vector<3, double>);

    // RVA: 0xD7 | Ordinal: 216
        void JetSuperSonicInlet(class EagleFM::JetSuperSonicInlet const &);

    // RVA: 0x41A | Ordinal: 1051
        void calcInlet(class EagleFM::DynamicBody *, double, double &, double &, double &, double &, double *, double *);

    // RVA: 0x1BB | Ordinal: 444
        void _JetSuperSonicInlet(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETSUPERSONICINLET_HPP
