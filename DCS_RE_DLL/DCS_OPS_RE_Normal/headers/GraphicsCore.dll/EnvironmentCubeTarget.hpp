#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: EnvironmentCubeTarget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace environment {

class EnvironmentCubeTarget
{
public:

    // RVA: 0x18 | Ordinal: 25
        void EnvironmentCubeTarget(class render::RenderGraphTexture);

    // RVA: 0x13C | Ordinal: 317
        void create(class render::RenderGraph &, char const *, int, int, enum render::FMT_ENUM, int, int);

    // RVA: 0x13D | Ordinal: 318
        void create(class render::RenderGraph &, char const *, int, enum render::FMT_ENUM, int, int);

    // RVA: 0x13E | Ordinal: 319
        void create(char const *, int, int, enum render::FMT_ENUM, bool);

    // RVA: 0x13F | Ordinal: 320
        void create(char const *, int, enum render::FMT_ENUM);

    // RVA: 0x240 | Ordinal: 577
        void release(void);
};

} // namespace environment

// DCS_OPS_RE_GRAPHICSCORE.DLL_ENVIRONMENTCUBETARGET_HPP
