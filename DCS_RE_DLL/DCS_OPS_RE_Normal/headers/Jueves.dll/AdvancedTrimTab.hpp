#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: AdvancedTrimTab
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace trims {

class AdvancedTrimTab
{
public:

    // RVA: 0x5 | Ordinal: 6
        void AdvancedTrimTab(class EagleFM::dcswwii::trims::AdvancedTrimTab &&);

    // RVA: 0x6 | Ordinal: 7
        void AdvancedTrimTab(class EagleFM::dcswwii::trims::AdvancedTrimTab const &);

    // RVA: 0x7 | Ordinal: 8
        void AdvancedTrimTab(class EagleFM::dcswwii::FlightModel *, double, double);

    // RVA: 0x576 | Ordinal: 1399
        void setRangeDeflection(double);

    // RVA: 0x5CB | Ordinal: 1484
        void simulate(double, double, double);

    // RVA: 0xE2 | Ordinal: 227
        void _AdvancedTrimTab(void);
};

} // namespace trims
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ADVANCEDTRIMTAB_HPP
