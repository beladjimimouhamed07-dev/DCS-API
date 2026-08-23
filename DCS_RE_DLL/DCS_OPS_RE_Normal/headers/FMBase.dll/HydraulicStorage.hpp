#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicStorage
{
public:

    // RVA: 0xB5 | Ordinal: 182
        void HydraulicStorage(double, double);

    // RVA: 0x4F1 | Ordinal: 1266
        void getBoostPressure(void) const;

    // RVA: 0x6DE | Ordinal: 1759
        void getVolume(void) const;

    // RVA: 0x6E1 | Ordinal: 1762
        void getVolumeFull(void) const;

    // RVA: 0x723 | Ordinal: 1828
        void init(double, double);

    // RVA: 0x816 | Ordinal: 2071
        void setBoostPressure(double const &);

    // RVA: 0x925 | Ordinal: 2342
        void setVolume(double);

    // RVA: 0x965 | Ordinal: 2406
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICSTORAGE_HPP
