#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: PneumaticSystemTypeA
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class PneumaticSystemTypeA
{
public:

    // RVA: 0x5A | Ordinal: 91
        void PneumaticSystemTypeA(class EagleFM::dcswwii::pneumatics::PneumaticSystemTypeA const &);

    // RVA: 0x5B | Ordinal: 92
        void PneumaticSystemTypeA(class EagleFM::dcswwii::FlightModel *, double);

    // RVA: 0x2C9 | Ordinal: 714
        void add(class EagleFM::dcswwii::pneumatics::Element *);

    // RVA: 0x349 | Ordinal: 842
        void doSimulate(void);

    // RVA: 0x109 | Ordinal: 266
        void _PneumaticSystemTypeA(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PNEUMATICSYSTEMTYPEA_HPP
