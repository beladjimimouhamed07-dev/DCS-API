#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: Graphics
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Graphics
{
public:

    // RVA: 0xC9 | Ordinal: 202
        void DEFERRED(void);

    // RVA: 0xCA | Ordinal: 203
        void EnableBonesDrawing(bool);

    // RVA: 0xCB | Ordinal: 204
        void EnableNodesPainting(bool);

    // RVA: 0xCC | Ordinal: 205
        void GetBoundingBoxNDC(void);

    // RVA: 0xCD | Ordinal: 206
        void GetCollisionShellRenderModeBits(void);

    // RVA: 0xCF | Ordinal: 208
        void GetDistanceAdder(void);

    // RVA: 0xCE | Ordinal: 207
        void GetDistanceAdder2(void);

    // RVA: 0xD1 | Ordinal: 210
        void GetDistanceMultiplier(void);

    // RVA: 0xD0 | Ordinal: 209
        void GetDistanceMultiplier2(void);

    // RVA: 0xD2 | Ordinal: 211
        void GetLodMults(float, float &, float &);

    // RVA: 0xD3 | Ordinal: 212
        void IsBonesDrawing(void);

    // RVA: 0xD4 | Ordinal: 213
        void IsNodesPainting(void);

    // RVA: 0xD6 | Ordinal: 215
        void SetBoundingBoxNDC(bool);

    // RVA: 0xD7 | Ordinal: 216
        void SetCollisionShellRenderModeBits(unsigned int);

    // RVA: 0xD8 | Ordinal: 217
        void SetDistanceMultipliers(float, float);

    // RVA: 0x124 | Ordinal: 293
        void calcMoonFactor(float);

    // RVA: 0x125 | Ordinal: 294
        void calcSunMoonDir(class osg::Vec3f const &, class osg::Vec3f const &, float);

    // RVA: 0x168 | Ordinal: 361
        void fireRendererCallbacks(enum Graphics::RendererCallbackEvent);

    // RVA: 0x193 | Ordinal: 404
        void getModelRenderMode(void);

    // RVA: 0x238 | Ordinal: 569
        void registerRendererCallback(class Graphics::RendererCallback *, enum Graphics::RendererCallbackEvent, int);

    // RVA: 0x289 | Ordinal: 650
        void setModelRenderMode(enum Graphics::ModelRenderMode);

    // RVA: 0x2A4 | Ordinal: 677
        void set_DEFERRED(bool);

    // RVA: 0x2B0 | Ordinal: 689
        void unregisterRendererCallback(class Graphics::RendererCallback *, enum Graphics::RendererCallbackEvent);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_GRAPHICS_HPP
