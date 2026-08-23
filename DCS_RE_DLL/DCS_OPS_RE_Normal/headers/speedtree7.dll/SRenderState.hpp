#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: SRenderState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class SRenderState
{
public:

    // RVA: 0x1CB | Ordinal: 460
        void GetInstanceType(void) const;

    // RVA: 0x1D3 | Ordinal: 468
        void GetPixelProperties(bool *const) const;

    // RVA: 0x1E6 | Ordinal: 487
        void HasOnlyBranches(void) const;

    // RVA: 0x1E7 | Ordinal: 488
        void HasOnlyFronds(void) const;

    // RVA: 0x1E8 | Ordinal: 489
        void HasOnlyLeaves(bool, bool) const;

    // RVA: 0x1E9 | Ordinal: 490
        void HasOnlyRigidMeshes(void) const;

    // RVA: 0x1EF | Ordinal: 496
        void IsBranchWindEnabled(void) const;

    // RVA: 0x1F5 | Ordinal: 502
        void IsFullWindEnabled(void) const;

    // RVA: 0x1F7 | Ordinal: 504
        void IsGlobalWindEnabled(void) const;

    // RVA: 0x1F9 | Ordinal: 506
        void IsLightingModelInTransition(void) const;

    // RVA: 0x1FC | Ordinal: 509
        void IsPerPixelModelActive(void) const;

    // RVA: 0x1FF | Ordinal: 512
        void IsTextureLayerPresent(enum SpeedTree::ETextureLayer) const;

    // RVA: 0x20E | Ordinal: 527
        void MakeDepthOnly(void);

    // RVA: 0x20F | Ordinal: 528
        void MakeShadowCast(void);

    // RVA: 0x238 | Ordinal: 569
        void PixelDeclHash(void) const;

    // RVA: 0x239 | Ordinal: 570
        void PixelShaderHashName(enum SpeedTree::SRenderState::EShadowConfig) const;

    // RVA: 0x5A | Ordinal: 91
        void SRenderState(void);

    // RVA: 0x28D | Ordinal: 654
        void ShaderGenHasFixedDecls(void) const;

    // RVA: 0x28E | Ordinal: 655
        void ShaderGenerationMode(void) const;

    // RVA: 0x2AA | Ordinal: 683
        void VertexDeclHash(void) const;

    // RVA: 0x2AB | Ordinal: 684
        void VertexShaderHashName(class SpeedTree::CWind const &, enum SpeedTree::SRenderState::EShadowConfig) const;

    // RVA: 0x2AC | Ordinal: 685
        void WindStateHashName(class SpeedTree::CWind const &) const;

    // RVA: 0x94 | Ordinal: 149
        void _SRenderState(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_SRENDERSTATE_HPP
