#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: HSI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class HSI
{
public:

    // RVA: 0x35A | Ordinal: 859
        void Construct(void);

    // RVA: 0x3B7 | Ordinal: 952
        void Create(void);

    // RVA: 0x6C | Ordinal: 109
        void HSI(class AFM::HSI &&);

    // RVA: 0x6D | Ordinal: 110
        void HSI(class AFM::HSI const &);

    // RVA: 0x6E | Ordinal: 111
        void HSI(void);

    // RVA: 0x4E3 | Ordinal: 1252
        void Simulation(double);

    // RVA: 0x5C7 | Ordinal: 1480
        void getIPointerADFIndicator(class AFM::Indicator **);

    // RVA: 0x600 | Ordinal: 1537
        void getIPointerGlideDeviationFailureIndicator(class AFM::Indicator **);

    // RVA: 0x601 | Ordinal: 1538
        void getIPointerGlideDeviationIndicator(class AFM::Indicator **);

    // RVA: 0x602 | Ordinal: 1539
        void getIPointerGyroCompass(class AFM::GyroCompass **);

    // RVA: 0x652 | Ordinal: 1619
        void getIPointerRMIIndicator(class AFM::Indicator **);

    // RVA: 0x67F | Ordinal: 1664
        void getIPointerSideDeviationFailureIndicator(class AFM::Indicator **);

    // RVA: 0x680 | Ordinal: 1665
        void getIPointerSideDeviationIndicator(class AFM::Indicator **);

    // RVA: 0x126 | Ordinal: 295
        void _HSI(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_HSI_HPP
