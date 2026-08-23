#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: WMKommandgerat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class WMKommandgerat
{
public:

    // RVA: 0x87 | Ordinal: 136
        void WMKommandgerat(class EagleFM::dcswwii::propulsion::WMKommandgerat const &);

    // RVA: 0x88 | Ordinal: 137
        void WMKommandgerat(class EagleFM::dcswwii::propulsion::PistonEngine *, double, double, double, double, class EagleFM::Elec::Switch *, class EagleFM::Elec::MultiThrowSwitch *, class EagleFM::Elec::Consumer *, class EagleFM::Elec::Switch *, class EagleFM::Elec::Consumer *, class EagleFM::Elec::Switch *);

    // RVA: 0x50E | Ordinal: 1295
        void repair(void);

    // RVA: 0x5ED | Ordinal: 1518
        void simulate(double);

    // RVA: 0x60A | Ordinal: 1547
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0x11C | Ordinal: 285
        void _WMKommandgerat(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_WMKOMMANDGERAT_HPP
