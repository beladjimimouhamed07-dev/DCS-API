#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects.dll
// Class: PipeSmokeProviderProxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class PipeSmokeProviderProxy
{
public:

    // RVA: 0x5 | Ordinal: 6
        void PipeSmokeProviderProxy(class DCSSceneProxy *, class std::function<float __cdecl(struct render::CollectionInfo const &)> const &);

    // RVA: 0x32 | Ordinal: 51
        void setSmokeDensity(int);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS.DLL_PIPESMOKEPROVIDERPROXY_HPP
