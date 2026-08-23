#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: CombinedSpeedometer_1100
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class CombinedSpeedometer_1100
{
public:

    // RVA: 0x2D | Ordinal: 46
        void CombinedSpeedometer_1100(class AFM::CombinedSpeedometer_1100 &&);

    // RVA: 0x2E | Ordinal: 47
        void CombinedSpeedometer_1100(class AFM::CombinedSpeedometer_1100 const &);

    // RVA: 0x2F | Ordinal: 48
        void CombinedSpeedometer_1100(void);

    // RVA: 0x349 | Ordinal: 842
        void Construct(void);

    // RVA: 0x3A2 | Ordinal: 931
        void Create(void);

    // RVA: 0x4A1 | Ordinal: 1186
        void LockPito(class AFM::Pito *);

    // RVA: 0x4D9 | Ordinal: 1242
        void Simulation(double);

    // RVA: 0x5CD | Ordinal: 1486
        void getIPointerAirSpeedIndicator(class AFM::Indicator **);

    // RVA: 0x606 | Ordinal: 1543
        void getIPointerIndicatedAirSpeedIndicator(class AFM::Indicator **);

    // RVA: 0x111 | Ordinal: 274
        void _CombinedSpeedometer_1100(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_COMBINEDSPEEDOMETER_1100_HPP
