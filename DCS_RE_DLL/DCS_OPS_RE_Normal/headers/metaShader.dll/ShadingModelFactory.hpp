#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: ShadingModelFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ShadingModelFactory
{
public:

    // RVA: 0x11 | Ordinal: 18
        void ShadingModelFactory(void);

    // RVA: 0x21 | Ordinal: 34
        void addShadingModel(class render::IShadingModel *);

    // RVA: 0x37 | Ordinal: 56
        void getInstance(void);

    // RVA: 0x3B | Ordinal: 60
        void getShadingModels(class ed::vector<class render::IShadingModel *, class ed::allocator<class render::IShadingModel *>> &);

    // RVA: 0x4F | Ordinal: 80
        void removeShadingModel(class render::IShadingModel *);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_SHADINGMODELFACTORY_HPP
