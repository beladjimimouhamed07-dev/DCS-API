#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DistributeThreatsBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {
namespace Threat {

class DistributeThreatsBase
{
public:

    // RVA: 0x93 | Ordinal: 148
        void DistributeThreatsBase(float, class ed::vector<struct AI::Threat::Level, class ed::allocator<struct AI::Threat::Level>> &);

    // RVA: 0x44D | Ordinal: 1102
        void operator()(float, class AI::Threat::AirdefenceData const &);
};

} // namespace Threat
} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DISTRIBUTETHREATSBASE_HPP
