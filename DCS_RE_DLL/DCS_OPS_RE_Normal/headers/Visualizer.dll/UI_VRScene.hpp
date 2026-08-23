#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: UI_VRScene
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace HMDUtils {

class UI_VRScene
{
public:

    // RVA: 0x1E | Ordinal: 31
        void UI_VRScene(class smSceneManager *, struct lua_State *);

    // RVA: 0x1F | Ordinal: 32
        void UI_VRScene(class smSceneManager *, struct lua_State *, char const *, char const *);

    // RVA: 0xA2 | Ordinal: 163
        void applyChanges(void);

    // RVA: 0xA8 | Ordinal: 169
        void changeScene(char const *, char const *);

    // RVA: 0xB0 | Ordinal: 177
        void createLivery(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0xBD | Ordinal: 190
        void drawEye(int, struct DemoScene::Viewport *, class Graphics::Camera const *, class std::function<void __cdecl(class Graphics::Context const *, class osg::Vec4i const *)> const &);

    // RVA: 0xCE | Ordinal: 207
        void getCameraFar(void) const;

    // RVA: 0xD0 | Ordinal: 209
        void getCameraNear(void) const;

    // RVA: 0xDB | Ordinal: 220
        void getFOV(void) const;

    // RVA: 0xDE | Ordinal: 223
        void getGraphicsHandle(void) const;

    // RVA: 0xE9 | Ordinal: 234
        void getOutputFrameBuffer(void);

    // RVA: 0x106 | Ordinal: 263
        void initGraphics(void);

    // RVA: 0x117 | Ordinal: 280
        void onBeforeReset(void);

    // RVA: 0x119 | Ordinal: 282
        void onLoadScene(void);

    // RVA: 0x121 | Ordinal: 290
        void prepareForRendering(struct DCSDemoSceneFrameDesc &, int);

    // RVA: 0x132 | Ordinal: 307
        void reset_private_models(void);

    // RVA: 0x15C | Ordinal: 349
        void setHMDProjection(float *);

    // RVA: 0x164 | Ordinal: 357
        void setLiveryHandle(unsigned int);

    // RVA: 0x18D | Ordinal: 398
        void update(class wPosition3<double> const &);

    // RVA: 0x2D | Ordinal: 46
        void _UI_VRScene(void);
};

} // namespace HMDUtils

// DCS_OPS_RE_VISUALIZER.DLL_UI_VRSCENE_HPP
