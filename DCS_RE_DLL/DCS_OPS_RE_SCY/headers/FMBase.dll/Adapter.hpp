#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Adapter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Adapter
{
public:

    // RVA: 0xA | Ordinal: 11
        void Adapter(class EagleFM::Elec::Adapter const &);

    // RVA: 0xB | Ordinal: 12
        void Adapter(double, double);

    // RVA: 0x478 | Ordinal: 1145
        void convertVoltage(double);

    // RVA: 0x516 | Ordinal: 1303
        void getConvertionK(void) const;

    // RVA: 0x82E | Ordinal: 2095
        void setConvertionK(double);

    // RVA: 0x179 | Ordinal: 378
        void _Adapter(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ADAPTER_HPP
