#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects.dll
// Class: PipeSmokeProvider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class PipeSmokeProvider
{
public:

    // RVA: 0x1F | Ordinal: 32
        void collectRenderables(unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS.DLL_PIPESMOKEPROVIDER_HPP
