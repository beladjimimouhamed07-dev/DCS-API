#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Altimeter_10
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Altimeter_10
{
public:

    // RVA: 0xC | Ordinal: 13
        void Altimeter_10(class AFM::Altimeter_10 &&);

    // RVA: 0xD | Ordinal: 14
        void Altimeter_10(class AFM::Altimeter_10 const &);

    // RVA: 0xE | Ordinal: 15
        void Altimeter_10(void);

    // RVA: 0x33F | Ordinal: 832
        void Construct(void);

    // RVA: 0x397 | Ordinal: 920
        void Create(void);

    // RVA: 0x4A0 | Ordinal: 1185
        void LockPito(class AFM::Pito *);

    // RVA: 0x4D0 | Ordinal: 1233
        void Simulation(double);

    // RVA: 0x584 | Ordinal: 1413
        void getBasicAtmospherePressure_Hg(void) const;

    // RVA: 0x60A | Ordinal: 1547
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x78B | Ordinal: 1932
        void setBasicAtmospherePressure_Hg(double);

    // RVA: 0x106 | Ordinal: 263
        void _Altimeter_10(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ALTIMETER_10_HPP
