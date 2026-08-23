#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: AtmosphereRendererForEnvironment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class AtmosphereRendererForEnvironment
{
public:

    // RVA: 0x4 | Ordinal: 5
        void AtmosphereRendererForEnvironment(class enlight::Atmosphere &);

    // RVA: 0x152 | Ordinal: 339
        void draw(class osg::Matrixf const &, class osg::Matrixf const &);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_ATMOSPHERERENDERERFORENVIRONMENT_HPP
