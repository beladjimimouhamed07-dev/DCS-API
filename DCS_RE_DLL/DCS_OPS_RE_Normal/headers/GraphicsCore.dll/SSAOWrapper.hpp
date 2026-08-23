#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SSAOWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class SSAOWrapper
{
public:

    // RVA: 0x3B | Ordinal: 60
        void SSAOWrapper(class deferredShading::SSAOWrapper &&);

    // RVA: 0x3C | Ordinal: 61
        void SSAOWrapper(void);

    // RVA: 0x1BA | Ordinal: 443
        void getTextures(void);

    // RVA: 0x1E1 | Ordinal: 482
        void init(class render::FrameBuffer &);

    // RVA: 0x1FD | Ordinal: 510
        void isValid(void) const;

    // RVA: 0x245 | Ordinal: 582
        void release(void);

    // RVA: 0x251 | Ordinal: 594
        void render(void);

    // RVA: 0x78 | Ordinal: 121
        void _SSAOWrapper(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_SSAOWRAPPER_HPP
