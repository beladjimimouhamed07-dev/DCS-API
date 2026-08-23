#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: RotateInertia
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class RotateInertia
{
public:

    // RVA: 0x36A | Ordinal: 875
        void Construct(void);

    // RVA: 0x3CC | Ordinal: 973
        void Create(void);

    // RVA: 0xAB | Ordinal: 172
        void RotateInertia(class AFM::RotateInertia &&);

    // RVA: 0xAC | Ordinal: 173
        void RotateInertia(class AFM::RotateInertia const &);

    // RVA: 0xAD | Ordinal: 174
        void RotateInertia(void);

    // RVA: 0x71C | Ordinal: 1821
        void getRotateInertiaX_ocs(double *);

    // RVA: 0x71D | Ordinal: 1822
        void getRotateInertiaY_ocs(double *);

    // RVA: 0x71E | Ordinal: 1823
        void getRotateInertiaZ_ocs(double *);

    // RVA: 0x71F | Ordinal: 1824
        void getRotateInertia_ocs(double *);

    // RVA: 0x8A0 | Ordinal: 2209
        void setRotateInertiaX_ocs(double);

    // RVA: 0x8A1 | Ordinal: 2210
        void setRotateInertiaY_ocs(double);

    // RVA: 0x8A2 | Ordinal: 2211
        void setRotateInertiaZ_ocs(double);

    // RVA: 0x8A3 | Ordinal: 2212
        void setRotateInertia_ocs(double *);

    // RVA: 0x13B | Ordinal: 316
        void _RotateInertia(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ROTATEINERTIA_HPP
