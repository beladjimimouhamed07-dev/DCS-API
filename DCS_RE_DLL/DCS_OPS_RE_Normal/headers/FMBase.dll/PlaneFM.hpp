#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: PlaneFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class PlaneFM
{
public:

    // RVA: 0x10B | Ordinal: 268
        void PlaneFM(class IwoLA *, double);

    // RVA: 0x4BA | Ordinal: 1211
        void getAfterburnerState(enum EagleFM::EngineIDs) const;

    // RVA: 0x548 | Ordinal: 1353
        void getEngineNozzleState(enum EagleFM::EngineIDs) const;

    // RVA: 0x54B | Ordinal: 1356
        void getEngineRelativeThrust(enum EagleFM::EngineIDs) const;

    // RVA: 0x54C | Ordinal: 1357
        void getEngineTurbineRelativePower(enum EagleFM::EngineIDs) const;

    // RVA: 0x1CB | Ordinal: 460
        void _PlaneFM(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PLANEFM_HPP
