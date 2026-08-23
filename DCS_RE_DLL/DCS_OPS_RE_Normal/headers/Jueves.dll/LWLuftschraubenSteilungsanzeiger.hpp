#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: LWLuftschraubenSteilungsanzeiger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace instrumentation {

class LWLuftschraubenSteilungsanzeiger
{
public:

    // RVA: 0x42 | Ordinal: 67
        void LWLuftschraubenSteilungsanzeiger(class EagleFM::dcswwii::instrumentation::LWLuftschraubenSteilungsanzeiger const &);

    // RVA: 0x43 | Ordinal: 68
        void LWLuftschraubenSteilungsanzeiger(class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *);

    // RVA: 0x3A7 | Ordinal: 936
        void getReading(int);

    // RVA: 0x5DF | Ordinal: 1504
        void simulate(double);

    // RVA: 0xFF | Ordinal: 256
        void _LWLuftschraubenSteilungsanzeiger(void);
};

} // namespace instrumentation
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_LWLUFTSCHRAUBENSTEILUNGSANZEIGER_HPP
