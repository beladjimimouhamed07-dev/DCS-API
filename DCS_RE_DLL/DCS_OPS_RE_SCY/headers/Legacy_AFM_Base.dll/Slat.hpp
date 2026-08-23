#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Slat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Slat
{
public:

    // RVA: 0x3D3 | Ordinal: 980
        void Create(void);

    // RVA: 0x417 | Ordinal: 1048
        void Destroy(void);

    // RVA: 0x45F | Ordinal: 1120
        void Instance(void);

    // RVA: 0xC0 | Ordinal: 193
        void Slat(void);

    // RVA: 0xC1 | Ordinal: 194
        void Slat(class AFM::Slat &&);

    // RVA: 0xC2 | Ordinal: 195
        void Slat(class AFM::Slat const &);

    // RVA: 0x51E | Ordinal: 1311
        void calcAerodynamics(double *, double, double, double, double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x142 | Ordinal: 323
        void _Slat(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SLAT_HPP
