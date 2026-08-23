#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ParallelNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ParallelNode
{
public:

    // RVA: 0xF9 | Ordinal: 250
        void ParallelNode(class EagleFM::Elec::ParallelNode const &);

    // RVA: 0xFA | Ordinal: 251
        void ParallelNode(void);

    // RVA: 0x475 | Ordinal: 1142
        void connectBeforeMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x6D9 | Ordinal: 1754
        void getVoltageFromInputs(double);

    // RVA: 0x7F6 | Ordinal: 2039
        void savePreviousVoltage(void);

    // RVA: 0x1C5 | Ordinal: 454
        void _ParallelNode(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PARALLELNODE_HPP
