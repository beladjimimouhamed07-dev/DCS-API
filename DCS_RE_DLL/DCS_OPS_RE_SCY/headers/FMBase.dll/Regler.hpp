#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Regler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Regler
{
public:

    // RVA: 0x11C | Ordinal: 285
        void Regler(class EagleFM::Elec::Regler const &);

    // RVA: 0x11D | Ordinal: 286
        void Regler(double, double);

    // RVA: 0x476 | Ordinal: 1143
        void connectBeforeMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x82B | Ordinal: 2092
        void setControlFeed(class EagleFM::Elec::ItemBase *);

    // RVA: 0x96D | Ordinal: 2414
        void simulate(double);

    // RVA: 0x1CF | Ordinal: 464
        void _Regler(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_REGLER_HPP
