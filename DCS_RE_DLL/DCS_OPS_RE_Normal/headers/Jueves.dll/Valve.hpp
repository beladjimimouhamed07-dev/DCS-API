#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Valve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class Valve
{
public:

    // RVA: 0x84 | Ordinal: 133
        void Valve(class EagleFM::dcswwii::pneumatics::Valve &&);

    // RVA: 0x85 | Ordinal: 134
        void Valve(class EagleFM::dcswwii::pneumatics::Valve const &);

    // RVA: 0x86 | Ordinal: 135
        void Valve(double, double, double, double);

    // RVA: 0x594 | Ordinal: 1429
        void setToDrain(void);

    // RVA: 0x595 | Ordinal: 1430
        void setToDrainPistons(void);

    // RVA: 0x596 | Ordinal: 1431
        void setToFill(void);

    // RVA: 0x597 | Ordinal: 1432
        void setToFillUpPistons(void);

    // RVA: 0x11B | Ordinal: 284
        void _Valve(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_VALVE_HPP
