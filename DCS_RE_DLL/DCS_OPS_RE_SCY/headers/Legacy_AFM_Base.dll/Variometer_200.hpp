#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Variometer_200
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Variometer_200
{
public:

    // RVA: 0x37B | Ordinal: 892
        void Construct(void);

    // RVA: 0x3E2 | Ordinal: 995
        void Create(void);

    // RVA: 0x4A3 | Ordinal: 1188
        void LockPito(class AFM::Pito *);

    // RVA: 0x4F9 | Ordinal: 1274
        void Simulation(double);

    // RVA: 0xF0 | Ordinal: 241
        void Variometer_200(class AFM::Variometer_200 &&);

    // RVA: 0xF1 | Ordinal: 242
        void Variometer_200(class AFM::Variometer_200 const &);

    // RVA: 0xF2 | Ordinal: 243
        void Variometer_200(void);

    // RVA: 0x612 | Ordinal: 1555
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x152 | Ordinal: 339
        void _Variometer_200(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_VARIOMETER_200_HPP
