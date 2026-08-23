#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects.dll
// Class: GraphicEffect_Impl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class GraphicEffect_Impl
{
public:

    // RVA: 0xE | Ordinal: 15
        void CreateActivity(void);

    // RVA: 0xF | Ordinal: 16
        void GetBoundingBox(void);

    // RVA: 0x10 | Ordinal: 17
        void GetCenter(void);

    // RVA: 0x11 | Ordinal: 18
        void GetDeltaT(void);

    // RVA: 0x12 | Ordinal: 19
        void GetPosition(void);

    // RVA: 0x13 | Ordinal: 20
        void GetRadius(void);

    // RVA: 0x0 | Ordinal: 1
        void GraphicEffect_Impl(class Effects::GraphicEffect_Impl const &);

    // RVA: 0x1 | Ordinal: 2
        void GraphicEffect_Impl(void);

    // RVA: 0x14 | Ordinal: 21
        void IsTerminated(void);

    // RVA: 0x15 | Ordinal: 22
        void LocalBox(double);

    // RVA: 0x16 | Ordinal: 23
        void NeedKill(void);

    // RVA: 0x17 | Ordinal: 24
        void NextStep(void);

    // RVA: 0x18 | Ordinal: 25
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x19 | Ordinal: 26
        void ParseForRender(class Graphics::ModelParser &);

    // RVA: 0x1A | Ordinal: 27
        void Position(double);

    // RVA: 0x1B | Ordinal: 28
        void TestVolume(class ClipVolume const &);

    // RVA: 0x1D | Ordinal: 30
        void changeLocalPosition(class wPosition3<float> const *);

    // RVA: 0x1E | Ordinal: 31
        void changeLocalPosition(class osg::Vec3f const *);

    // RVA: 0x34 | Ordinal: 53
        void showBBSphere(class Graphics::ModelParser &, class wPosition3<float> const &, float);

    // RVA: 0x35 | Ordinal: 54
        void undock(void);

    // RVA: 0x6 | Ordinal: 7
        void _GraphicEffect_Impl(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS.DLL_GRAPHICEFFECT_IMPL_HPP
