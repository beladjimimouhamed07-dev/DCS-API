#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: util
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {

class util
{
public:

    // RVA: 0x2A1 | Ordinal: 674
        void Displace(float *, float, float);

    // RVA: 0x2A2 | Ordinal: 675
        void Displace(double *, double, double);

    // RVA: 0x2A3 | Ordinal: 676
        void Displace(class Math::Vector<3, double> *, class Math::Vector<3, double> const &, double);

    // RVA: 0x2A4 | Ordinal: 677
        void Distance(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x2C4 | Ordinal: 709
        void SliderToInvert(float);

    // RVA: 0x2C5 | Ordinal: 710
        void SliderToNormal(float);
};

} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_UTIL_HPP
