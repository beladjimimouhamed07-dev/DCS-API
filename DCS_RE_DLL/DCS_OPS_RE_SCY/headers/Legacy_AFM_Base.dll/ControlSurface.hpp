#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ControlSurface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ControlSurface
{
public:

    // RVA: 0x34D | Ordinal: 846
        void Construct(void);

    // RVA: 0x39 | Ordinal: 58
        void ControlSurface(class AFM::ControlSurface &&);

    // RVA: 0x3A | Ordinal: 59
        void ControlSurface(class AFM::ControlSurface const &);

    // RVA: 0x3B | Ordinal: 60
        void ControlSurface(void);

    // RVA: 0x3A6 | Ordinal: 935
        void Create(void);

    // RVA: 0x57D | Ordinal: 1406
        void getAngle(double *);

    // RVA: 0x6A2 | Ordinal: 1699
        void getIntegrityFactor(double *);

    // RVA: 0x6C6 | Ordinal: 1735
        void getMaxAngle(double *);

    // RVA: 0x6D6 | Ordinal: 1751
        void getMinAngle(double *);

    // RVA: 0x77F | Ordinal: 1920
        void setAngle(double);

    // RVA: 0x7EB | Ordinal: 2028
        void setIntegrityFactor(double);

    // RVA: 0x80C | Ordinal: 2061
        void setMaxAngle(double);

    // RVA: 0x81D | Ordinal: 2078
        void setMinAngle(double);

    // RVA: 0x115 | Ordinal: 278
        void _ControlSurface(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_CONTROLSURFACE_HPP
