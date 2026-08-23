#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: IndirectLightVolumeModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class IndirectLightVolumeModule
{
public:

    // RVA: 0x20 | Ordinal: 33
        void IndirectLightVolumeModule(void);

    // RVA: 0x64 | Ordinal: 101
        void addUpdatePass(class render::RenderGraph &, struct render::IILVProvider &, class osg::Vec3f const &, class osg::Matrixd const &);

    // RVA: 0xA3 | Ordinal: 164
        void getGridBuffer(void) const;
};

} // namespace render

// DCS_OPS_RE_ENLIGHT.DLL_INDIRECTLIGHTVOLUMEMODULE_HPP
