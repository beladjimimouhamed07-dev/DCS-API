#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Battery_v2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Battery_v2
{
public:

    // RVA: 0x2D | Ordinal: 46
        void Battery_v2(class EagleFM::Elec::Battery_v2 const &);

    // RVA: 0x2E | Ordinal: 47
        void Battery_v2(int, double, double);

    // RVA: 0x3A8 | Ordinal: 937
        void SetNewCapacity(double, double, double);

    // RVA: 0x3AA | Ordinal: 939
        void SetTypeBattery(int);

    // RVA: 0x448 | Ordinal: 1097
        void calculateParameters_AgZn(double);

    // RVA: 0x950 | Ordinal: 2385
        void simulate(double, double);

    // RVA: 0x97A | Ordinal: 2427
        void simulateLcl(double, double);

    // RVA: 0x186 | Ordinal: 391
        void _Battery_v2(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BATTERY_V2_HPP
