#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: LampParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class LampParams
{
public:

    // RVA: 0xE5 | Ordinal: 230
        void LampParams(double);

    // RVA: 0xE6 | Ordinal: 231
        void LampParams(void);

    // RVA: 0x794 | Ordinal: 1941
        void loadFromState(class Lua::Config &, char const *);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_LAMPPARAMS_HPP
