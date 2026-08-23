#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ConsumerParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ConsumerParams
{
public:

    // RVA: 0x53 | Ordinal: 84
        void ConsumerParams(double, bool, double, double, double);

    // RVA: 0x54 | Ordinal: 85
        void ConsumerParams(void);

    // RVA: 0x793 | Ordinal: 1940
        void loadFromState(class Lua::Config &, char const *);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONSUMERPARAMS_HPP
