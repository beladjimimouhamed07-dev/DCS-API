#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Pump
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class Pump
{
public:

    // RVA: 0x114 | Ordinal: 277
        void Pump(class EagleFM::Cooling::Pump &&);

    // RVA: 0x115 | Ordinal: 278
        void Pump(class EagleFM::Cooling::Pump const &);

    // RVA: 0x116 | Ordinal: 279
        void Pump(void);

    // RVA: 0x494 | Ordinal: 1173
        void doSimulate(double);

    // RVA: 0x610 | Ordinal: 1553
        void getPoil(void) const;

    // RVA: 0x74C | Ordinal: 1869
        void initK_Q_Pump(float, float);

    // RVA: 0x751 | Ordinal: 1874
        void initOilPump(enum EagleFM::Cooling::Pump::OIL_PUMP_INIT, float);

    // RVA: 0x7CD | Ordinal: 1998
        void repair(void);

    // RVA: 0x858 | Ordinal: 2137
        void setFailureDegree(float);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PUMP_HPP
