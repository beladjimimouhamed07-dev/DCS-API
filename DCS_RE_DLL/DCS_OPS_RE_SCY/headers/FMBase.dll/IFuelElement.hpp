#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: IFuelElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class IFuelElement
{
public:

    // RVA: 0xB9 | Ordinal: 186
        void IFuelElement(class EagleFM::IFuelElement const &);

    // RVA: 0xBA | Ordinal: 187
        void IFuelElement(double);

    // RVA: 0x4A7 | Ordinal: 1192
        void drainDry(void);

    // RVA: 0x4AD | Ordinal: 1198
        void fillUp(void);

    // RVA: 0x5ED | Ordinal: 1518
        void getOutputLine(void);

    // RVA: 0x5EE | Ordinal: 1519
        void getOutputLine(void) const;

    // RVA: 0x657 | Ordinal: 1624
        void getRelativeVolumeRatio(void) const;

    // RVA: 0x884 | Ordinal: 2181
        void setInputLine(class EagleFM::FuelPipeline *);

    // RVA: 0x967 | Ordinal: 2408
        void simulate(double);

    // RVA: 0x1B0 | Ordinal: 433
        void _IFuelElement(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_IFUELELEMENT_HPP
