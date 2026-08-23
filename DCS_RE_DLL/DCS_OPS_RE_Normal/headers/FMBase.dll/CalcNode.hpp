#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: CalcNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class CalcNode
{
public:

    // RVA: 0x3F | Ordinal: 64
        void CalcNode(class EagleFM::Elec::CalcNode const &);

    // RVA: 0x40 | Ordinal: 65
        void CalcNode(int);

    // RVA: 0x3B4 | Ordinal: 949
        void UpdateVoltage(double);

    // RVA: 0x45A | Ordinal: 1115
        void checkSources(void);

    // RVA: 0x7B4 | Ordinal: 1973
        void pushSource(class EagleFM::Elec::ItemBase *);

    // RVA: 0x995 | Ordinal: 2454
        void updateGlobalVoltage(double);

    // RVA: 0x99B | Ordinal: 2460
        void updateOwnVoltage(double);

    // RVA: 0x18D | Ordinal: 398
        void _CalcNode(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CALCNODE_HPP
