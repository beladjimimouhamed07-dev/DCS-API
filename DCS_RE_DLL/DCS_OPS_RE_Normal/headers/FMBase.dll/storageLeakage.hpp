#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: storageLeakage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FuelStorage {

class storageLeakage
{
public:

    // RVA: 0x51C | Ordinal: 1309
        void getCurrentLeakage(void) const;

    // RVA: 0x85E | Ordinal: 2143
        void setFinite(double, double);

    // RVA: 0x881 | Ordinal: 2178
        void setInfinite(double);

    // RVA: 0x975 | Ordinal: 2422
        void simulate(class EagleFM::FuelStorage *, double);

    // RVA: 0x174 | Ordinal: 373
        void storageLeakage(void);
};

} // namespace FuelStorage
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_STORAGELEAKAGE_HPP
