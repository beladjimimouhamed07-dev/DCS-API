#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Starter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class Starter
{
public:

    // RVA: 0x6D | Ordinal: 110
        void Starter(class EagleFM::dcswwii::propulsion::Starter const &);

    // RVA: 0x6E | Ordinal: 111
        void Starter(class EagleFM::dcswwii::propulsion::PistonEngine *);

    // RVA: 0x50B | Ordinal: 1292
        void repair(void);

    // RVA: 0x608 | Ordinal: 1545
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0x111 | Ordinal: 274
        void _Starter(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_STARTER_HPP
