#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: CalculateManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class CalculateManager
{
public:

    // RVA: 0x41 | Ordinal: 66
        void CalculateManager(class EagleFM::Elec::CalculateManager const &);

    // RVA: 0x42 | Ordinal: 67
        void CalculateManager(void);

    // RVA: 0x3B8 | Ordinal: 953
        void addBranch(class EagleFM::Elec::ItemBase *, int);

    // RVA: 0x3C7 | Ordinal: 968
        void addNode(class EagleFM::Elec::CalcNode *, int);

    // RVA: 0x447 | Ordinal: 1096
        void calculate(double, bool);

    // RVA: 0x47E | Ordinal: 1151
        void createDefaultTopology(int);

    // RVA: 0x47F | Ordinal: 1152
        void createTopology(int, int);

    // RVA: 0x4F4 | Ordinal: 1269
        void getBranchConductance(int) const;

    // RVA: 0x4F5 | Ordinal: 1270
        void getBranchEMF(int) const;

    // RVA: 0x773 | Ordinal: 1908
        void injectToDebugUI(char const *);

    // RVA: 0x7B5 | Ordinal: 1974
        void pushSourceToNode(class EagleFM::Elec::ItemBase *, int, int);

    // RVA: 0x7B6 | Ordinal: 1975
        void pushSourceToNodes(class EagleFM::Elec::ItemBase *, int);

    // RVA: 0x817 | Ordinal: 2072
        void setBranchSign(int, int, int);

    // RVA: 0x921 | Ordinal: 2338
        void setVoltageEps(double);

    // RVA: 0x18E | Ordinal: 399
        void _CalculateManager(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CALCULATEMANAGER_HPP
