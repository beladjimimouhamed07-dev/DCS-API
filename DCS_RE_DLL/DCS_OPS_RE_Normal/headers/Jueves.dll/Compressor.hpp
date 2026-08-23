#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Compressor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class Compressor
{
public:

    // RVA: 0x12 | Ordinal: 19
        void Compressor(class EagleFM::dcswwii::pneumatics::Compressor const &);

    // RVA: 0x13 | Ordinal: 20
        void Compressor(double);

    // RVA: 0x578 | Ordinal: 1401
        void setReducedFeedPower(double);

    // RVA: 0x5D0 | Ordinal: 1489
        void simulate(double);

    // RVA: 0xE8 | Ordinal: 233
        void _Compressor(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_COMPRESSOR_HPP
