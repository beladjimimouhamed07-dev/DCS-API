#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: VoltageRegulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class VoltageRegulator
{
public:

    // RVA: 0x167 | Ordinal: 360
        void VoltageRegulator(class EagleFM::Elec::VoltageRegulator const &);

    // RVA: 0x168 | Ordinal: 361
        void VoltageRegulator(double, double, double);

    // RVA: 0x479 | Ordinal: 1146
        void convertVoltage(double);

    // RVA: 0x1EC | Ordinal: 493
        void _VoltageRegulator(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_VOLTAGEREGULATOR_HPP
