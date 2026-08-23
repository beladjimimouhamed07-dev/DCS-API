#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Mass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Mass
{
public:

    // RVA: 0x362 | Ordinal: 867
        void Construct(void);

    // RVA: 0x3C2 | Ordinal: 963
        void Create(void);

    // RVA: 0x8D | Ordinal: 142
        void Mass(class AFM::Mass &&);

    // RVA: 0x8E | Ordinal: 143
        void Mass(class AFM::Mass const &);

    // RVA: 0x8F | Ordinal: 144
        void Mass(void);

    // RVA: 0x6BC | Ordinal: 1725
        void getMass(double *);

    // RVA: 0x801 | Ordinal: 2050
        void setMass(double);

    // RVA: 0x131 | Ordinal: 306
        void _Mass(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_MASS_HPP
