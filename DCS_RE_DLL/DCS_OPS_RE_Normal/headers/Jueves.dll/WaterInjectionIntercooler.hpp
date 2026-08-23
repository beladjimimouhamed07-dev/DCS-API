#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: WaterInjectionIntercooler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class WaterInjectionIntercooler
{
public:

    // RVA: 0x89 | Ordinal: 138
        void WaterInjectionIntercooler(class EagleFM::dcswwii::propulsion::WaterInjectionIntercooler &&);

    // RVA: 0x8A | Ordinal: 139
        void WaterInjectionIntercooler(double &, double &);

    // RVA: 0x8B | Ordinal: 140
        void WaterInjectionIntercooler(class EagleFM::dcswwii::propulsion::WaterInjectionIntercooler const &);

    // RVA: 0x2DA | Ordinal: 731
        void calc_amf(struct EagleFM::AirFlowState);

    // RVA: 0x11D | Ordinal: 286
        void _WaterInjectionIntercooler(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_WATERINJECTIONINTERCOOLER_HPP
