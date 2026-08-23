#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: TrimTab
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace trims {

class TrimTab
{
public:

    // RVA: 0x7D | Ordinal: 126
        void TrimTab(class EagleFM::dcswwii::trims::TrimTab &&);

    // RVA: 0x7E | Ordinal: 127
        void TrimTab(class EagleFM::dcswwii::trims::TrimTab const &);

    // RVA: 0x7F | Ordinal: 128
        void TrimTab(class EagleFM::dcswwii::FlightModel *, double);

    // RVA: 0x3D3 | Ordinal: 980
        void getVisualDeflection(void);

    // RVA: 0x5EB | Ordinal: 1516
        void simulate(double, double, double);

    // RVA: 0x118 | Ordinal: 281
        void _TrimTab(void);
};

} // namespace trims
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_TRIMTAB_HPP
