#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: GraphSceneObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class GraphSceneObject
{
public:

    // RVA: 0xDB | Ordinal: 220
        void collectRenderables(unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &);

    // RVA: 0x13D | Ordinal: 318
        void setDotBacherId(unsigned int);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_GRAPHSCENEOBJECT_HPP
