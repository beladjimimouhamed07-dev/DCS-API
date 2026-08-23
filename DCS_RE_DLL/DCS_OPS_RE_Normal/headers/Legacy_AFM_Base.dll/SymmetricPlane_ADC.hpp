#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: SymmetricPlane_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class SymmetricPlane_ADC
{
public:

    // RVA: 0x376 | Ordinal: 887
        void Construct(void);

    // RVA: 0x3DB | Ordinal: 988
        void Create(void);

    // RVA: 0x437 | Ordinal: 1080
        void Init(double, double *, double *, double *);

    // RVA: 0xDB | Ordinal: 220
        void SymmetricPlane_ADC(class AFM::SymmetricPlane_ADC &&);

    // RVA: 0xDC | Ordinal: 221
        void SymmetricPlane_ADC(class AFM::SymmetricPlane_ADC const &);

    // RVA: 0xDD | Ordinal: 222
        void SymmetricPlane_ADC(void);

    // RVA: 0x522 | Ordinal: 1315
        void calcAerodynamics(double, double, double *, double *, double *, double *);

    // RVA: 0x6BB | Ordinal: 1724
        void getMach(double *);

    // RVA: 0x14B | Ordinal: 332
        void _SymmetricPlane_ADC(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SYMMETRICPLANE_ADC_HPP
