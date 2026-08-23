#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: HandPump
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace hydraulics {

class HandPump
{
public:

    // RVA: 0x32 | Ordinal: 51
        void HandPump(double, double);

    // RVA: 0x3A5 | Ordinal: 934
        void getProductivity(void) const;

    // RVA: 0x571 | Ordinal: 1394
        void setPistonTravel(double);

    // RVA: 0x5D9 | Ordinal: 1498
        void simulate(double);

    // RVA: 0xF7 | Ordinal: 248
        void _HandPump(void);
};

} // namespace hydraulics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_HANDPUMP_HPP
