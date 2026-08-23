#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: MultiThrowInput
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class MultiThrowInput
{
public:

    // RVA: 0xF5 | Ordinal: 246
        void MultiThrowInput(class EagleFM::Elec::MultiThrowInput const &);

    // RVA: 0xF6 | Ordinal: 247
        void MultiThrowInput(void);

    // RVA: 0x44B | Ordinal: 1100
        void canReceiveFrom(class EagleFM::Elec::ItemBase const *) const;

    // RVA: 0x612 | Ordinal: 1555
        void getPos(void) const;

    // RVA: 0x7AC | Ordinal: 1965
        void propagateLoadAccumulatorShPtr(class std::shared_ptr<class EagleFM::Elec::PtrKeeper<class EagleFM::Elec::ItemBase>> const &, class EagleFM::Elec::ItemBase *);

    // RVA: 0x8CC | Ordinal: 2253
        void setPos(unsigned int);

    // RVA: 0x994 | Ordinal: 2453
        void updateConductance(double);

    // RVA: 0x999 | Ordinal: 2458
        void updateLoadConductanceForInput(double, int);

    // RVA: 0x1C3 | Ordinal: 452
        void _MultiThrowInput(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_MULTITHROWINPUT_HPP
