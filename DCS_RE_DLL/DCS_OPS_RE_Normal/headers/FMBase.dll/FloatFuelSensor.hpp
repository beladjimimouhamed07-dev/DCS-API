#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FloatFuelSensor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FloatFuelSensor
{
public:

    // RVA: 0x7B | Ordinal: 124
        void FloatFuelSensor(class EagleFM::FuelStorage &, class Math::Vector<3, double> const &, float, double, double, double);

    // RVA: 0x7C | Ordinal: 125
        void FloatFuelSensor(class EagleFM::FloatFuelSensor const &);

    // RVA: 0x990 | Ordinal: 2449
        void update(class Math::Vector<3, double>, double);

    // RVA: 0x1A0 | Ordinal: 417
        void _FloatFuelSensor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FLOATFUELSENSOR_HPP
