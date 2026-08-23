#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ADI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ADI
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ADI(class AFM::ADI &&);

    // RVA: 0x1 | Ordinal: 2
        void ADI(class AFM::ADI const &);

    // RVA: 0x2 | Ordinal: 3
        void ADI(void);

    // RVA: 0x33C | Ordinal: 829
        void Construct(void);

    // RVA: 0x393 | Ordinal: 916
        void Create(void);

    // RVA: 0x4CE | Ordinal: 1231
        void Simulation(double);

    // RVA: 0x5D0 | Ordinal: 1489
        void getIPointerAltitudeDirectorIndicator(class AFM::Indicator **);

    // RVA: 0x5D6 | Ordinal: 1495
        void getIPointerAttitudeIndicator(class AFM::AttitudeIndicator **);

    // RVA: 0x5EE | Ordinal: 1519
        void getIPointerCourseDirectorIndicator(class AFM::Indicator **);

    // RVA: 0x64B | Ordinal: 1612
        void getIPointerPitchDirectorIndicator(class AFM::Indicator **);

    // RVA: 0x64C | Ordinal: 1613
        void getIPointerPitchFailureIndicator(class AFM::Indicator **);

    // RVA: 0x674 | Ordinal: 1653
        void getIPointerRollDirectorIndicator(class AFM::Indicator **);

    // RVA: 0x675 | Ordinal: 1654
        void getIPointerRollFailureIndicator(class AFM::Indicator **);

    // RVA: 0x102 | Ordinal: 259
        void _ADI(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ADI_HPP
