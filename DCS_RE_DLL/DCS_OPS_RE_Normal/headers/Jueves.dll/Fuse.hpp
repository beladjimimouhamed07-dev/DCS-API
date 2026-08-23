#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Fuse
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace electrics {

class Fuse
{
public:

    // RVA: 0x2B | Ordinal: 44
        void Fuse(class EagleFM::dcswwii::electrics::Fuse const &);

    // RVA: 0x2C | Ordinal: 45
        void Fuse(double);

    // RVA: 0x532 | Ordinal: 1331
        void setArgumentRelay(class EagleFM::dcswwii::avionics::avDCSWWIIDevice *, int);

    // RVA: 0x5D6 | Ordinal: 1495
        void simulate(double);

    // RVA: 0xF4 | Ordinal: 245
        void _Fuse(void);
};

} // namespace electrics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_FUSE_HPP
