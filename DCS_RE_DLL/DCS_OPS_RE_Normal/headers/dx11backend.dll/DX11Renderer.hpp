#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dx11backend.dll
// Class: DX11Renderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace RenderAPI {

class DX11Renderer
{
public:

    // RVA: 0x0 | Ordinal: 1
        void DX11Renderer(void);

    // RVA: 0x3 | Ordinal: 4
        void bakeFrameBuffer(class RenderAPI::DX11FrameBuffer *);

    // RVA: 0x4 | Ordinal: 5
        void beginDebugEvent(wchar_t const *);

    // RVA: 0x5 | Ordinal: 6
        void beginFrame(void);

    // RVA: 0x6 | Ordinal: 7
        void bindResource(unsigned int, struct RenderAPI::ITexture *);

    // RVA: 0x7 | Ordinal: 8
        void bindResource(unsigned int, struct RenderAPI::IConstantBuffer const *);

    // RVA: 0x8 | Ordinal: 9
        void bindResource(unsigned int, struct RenderAPI::IStructuredBuffer const *);

    // RVA: 0x9 | Ordinal: 10
        void bindResourceAsStencil(unsigned int, struct RenderAPI::ITexture *);

    // RVA: 0xA | Ordinal: 11
        void clearColor(class osg::Vec4f const *, int);

    // RVA: 0xB | Ordinal: 12
        void clearDepth(float);

    // RVA: 0xC | Ordinal: 13
        void clearFrameBuffer(class osg::Vec4f const &, float, unsigned int);

    // RVA: 0xD | Ordinal: 14
        void clearStencil(unsigned int);

    // RVA: 0xE | Ordinal: 15
        void clearUAV(struct RenderAPI::ITexture *, class osg::Vec4f const &);

    // RVA: 0xF | Ordinal: 16
        void clearUAV(struct RenderAPI::ITexture *, class osg::Vec4ui const &);

    // RVA: 0x10 | Ordinal: 17
        void compute(int, struct RenderAPI::IShader *, int, int, int);

    // RVA: 0x11 | Ordinal: 18
        void computeIndirect(int, struct RenderAPI::IShader *, struct RenderAPI::IBuffer *, unsigned int);

    // RVA: 0x12 | Ordinal: 19
        void copyBuffer(struct RenderAPI::IBuffer const *, struct RenderAPI::IBuffer const *);

    // RVA: 0x13 | Ordinal: 20
        void copyBuffer(struct RenderAPI::IBuffer const *, struct RenderAPI::IBuffer const *, int, int, int);

    // RVA: 0x14 | Ordinal: 21
        void copyStructuredBuffer(struct RenderAPI::IStructuredBuffer const *, struct RenderAPI::IStructuredBuffer const *);

    // RVA: 0x15 | Ordinal: 22
        void copyStructuredBuffer(struct RenderAPI::IStructuredBuffer const *, struct RenderAPI::IStructuredBuffer const *, int, int, int);

    // RVA: 0x16 | Ordinal: 23
        void copyStructuredToConstantBuffer(struct RenderAPI::IStructuredBuffer const *, struct RenderAPI::IConstantBuffer const *);

    // RVA: 0x17 | Ordinal: 24
        void copySubresourceRegion(int, struct ID3D11Buffer *, struct ID3D11Buffer *, int, int, int);

    // RVA: 0x18 | Ordinal: 25
        void copyTexture(struct RenderAPI::ITexture *, int, class osg::Vec4i const *, struct RenderAPI::ITexture *, int, class osg::Vec4i const *);

    // RVA: 0x19 | Ordinal: 26
        void createBuffer(enum render::FMT_ENUM, int, enum render::BUFFERUSAGE_ENUM, unsigned int, void const *, char const *);

    // RVA: 0x1A | Ordinal: 27
        void createConstantBuffer(int, enum render::BUFFERUSAGE_ENUM, char const *, void const *);

    // RVA: 0x1B | Ordinal: 28
        void createFrameBuffer(struct RenderAPI::TextureOrDesc const *const, unsigned int, struct RenderAPI::TextureOrDesc const *);

    // RVA: 0x1C | Ordinal: 29
        void createFrameBuffer(class ed::Ptr<struct RenderAPI::ITexture, struct RenderAPI::ITexture::Deleter> const *const, unsigned int, class ed::Ptr<struct RenderAPI::ITexture, struct RenderAPI::ITexture::Deleter>);

    // RVA: 0x1D | Ordinal: 30
        void createIndexBuffer(int, int, enum render::PRIMTYPE_ENUM, enum render::BUFFERUSAGE_ENUM, unsigned int, char const *, void const *);

    // RVA: 0x1E | Ordinal: 31
        void createRenderTarget(struct RenderAPI::TextureDescBackend const &, char const *);

    // RVA: 0x1F | Ordinal: 32
        void createStructuredBuffer(int, int, enum render::BUFFERUSAGE_ENUM, unsigned int, void const *, int, char const *);

    // RVA: 0x20 | Ordinal: 33
        void createVertexBuffer(int, enum render::ELEMENTTYPE_ENUM *, int, enum render::BUFFERUSAGE_ENUM, unsigned int, char const *, void const *);

    // RVA: 0x21 | Ordinal: 34
        void dev(void);

    // RVA: 0x22 | Ordinal: 35
        void devCtx(void);

    // RVA: 0x23 | Ordinal: 36
        void draw(int, struct RenderAPI::IShader *, enum render::PRIMTYPE_ENUM, int, int, int, char const *);

    // RVA: 0x24 | Ordinal: 37
        void drawIndirect(int, struct RenderAPI::IShader *, enum render::PRIMTYPE_ENUM, struct RenderAPI::IBuffer *, int, char const *);

    // RVA: 0x25 | Ordinal: 38
        void drawMultIndirect(int, struct RenderAPI::IShader *, enum render::PRIMTYPE_ENUM, struct RenderAPI::IBuffer *, int (__cdecl *)(int, void *), void *, char const *);

    // RVA: 0x26 | Ordinal: 39
        void drawWithOffset(int, struct RenderAPI::IShader *, enum render::PRIMTYPE_ENUM, int, int, int);

    // RVA: 0x27 | Ordinal: 40
        void emitBarrier(struct render::BarrierInfo2 const &);

    // RVA: 0x28 | Ordinal: 41
        void endDebugEvent(void);

    // RVA: 0x29 | Ordinal: 42
        void endFrame(void);

    // RVA: 0x2A | Ordinal: 43
        void enumModes(struct RenderAPI::ModeInfo *, int);

    // RVA: 0x2B | Ordinal: 44
        void flush(void);

    // RVA: 0x2C | Ordinal: 45
        void forceDrawRoutine(int);

    // RVA: 0x2D | Ordinal: 46
        void forceFlipPrimitiveWinding(bool);

    // RVA: 0x2E | Ordinal: 47
        void forceWireFrame(bool);

    // RVA: 0x2F | Ordinal: 48
        void freeStringMem(char const *);

    // RVA: 0x30 | Ordinal: 49
        void getAdapterDesc(struct ID3D11Device *, struct DXGI_ADAPTER_DESC *);

    // RVA: 0x31 | Ordinal: 50
        void getAdapterInfo(struct RenderAPI::AdapterInfo &);

    // RVA: 0x32 | Ordinal: 51
        void getBackendName(void) const;

    // RVA: 0x33 | Ordinal: 52
        void getBufferManager(void);

    // RVA: 0x34 | Ordinal: 53
        void getCapability(enum render::CAPABILITY_ENUM);

    // RVA: 0x35 | Ordinal: 54
        void getCoreCount(void) const;

    // RVA: 0x36 | Ordinal: 55
        void getCoreIdx(void) const;

    // RVA: 0x37 | Ordinal: 56
        void getCurrentColorBuffer(int);

    // RVA: 0x38 | Ordinal: 57
        void getCurrentDepthStencilBuffer(void);

    // RVA: 0x39 | Ordinal: 58
        void getCurrentFrameBuffer(void);

    // RVA: 0x3A | Ordinal: 59
        void getDevice(void);

    // RVA: 0x3B | Ordinal: 60
        void getDeviceContext(void);

    // RVA: 0x3C | Ordinal: 61
        void getDeviceFactory(struct ID3D11Device *);

    // RVA: 0x3D | Ordinal: 62
        void getGpuQuery(void);

    // RVA: 0x3E | Ordinal: 63
        void getHMD(void);

    // RVA: 0x3F | Ordinal: 64
        void getNGX(void);

    // RVA: 0x40 | Ordinal: 65
        void getRenderOption(struct render::RenderConfig const &, char const *, class ed::basic_string<char> *);

    // RVA: 0x41 | Ordinal: 66
        void getRenderTarget(char const *);

    // RVA: 0x42 | Ordinal: 67
        void getRenderTargetInternal(char const *);

    // RVA: 0x43 | Ordinal: 68
        void getResourcesList(void);

    // RVA: 0x44 | Ordinal: 69
        void getShaderManager(void);

    // RVA: 0x45 | Ordinal: 70
        void getShaderResourcesCount(enum RenderAPI::enShaderType) const;

    // RVA: 0x46 | Ordinal: 71
        void getSlotBinder(void) const;

    // RVA: 0x47 | Ordinal: 72
        void getStateManager(void);

    // RVA: 0x48 | Ordinal: 73
        void getStatistic(char const *);

    // RVA: 0x49 | Ordinal: 74
        void getStatistics(void);

    // RVA: 0x4A | Ordinal: 75
        void getTargetDims(void);

    // RVA: 0x4B | Ordinal: 76
        void getTextureManager(void);

    // RVA: 0x4C | Ordinal: 77
        void getVSyncMode(void);

    // RVA: 0x4D | Ordinal: 78
        void getViewportDims(void);

    // RVA: 0x4E | Ordinal: 79
        void getViewportPos(void);

    // RVA: 0x4F | Ordinal: 80
        void init(struct render::RenderConfig const &);

    // RVA: 0x51 | Ordinal: 82
        void initDevice(enum D3D_DRIVER_TYPE, int, int, bool, int, int, struct HWND__*, enum render::MSAA_ENUM, bool);

    // RVA: 0x50 | Ordinal: 81
        void initDevice2(int, int, bool, int, int, int, struct HWND__*, enum render::MSAA_ENUM, bool);

    // RVA: 0x52 | Ordinal: 83
        void initializeScreenFrameBuffer(int, int, bool);

    // RVA: 0x53 | Ordinal: 84
        void interframeResourceSync(bool);

    // RVA: 0x54 | Ordinal: 85
        void isDump(enum RenderAPI::enDumpTypes);

    // RVA: 0x55 | Ordinal: 86
        void isRenderTargetExists(char const *);

    // RVA: 0x56 | Ordinal: 87
        void popFrameBuffer(void);

    // RVA: 0x57 | Ordinal: 88
        void popScissor(void);

    // RVA: 0x58 | Ordinal: 89
        void popStreamOutput(void);

    // RVA: 0x59 | Ordinal: 90
        void popViewport(void);

    // RVA: 0x5A | Ordinal: 91
        void printLeaks(void);

    // RVA: 0x5B | Ordinal: 92
        void pushFrameBuffer(unsigned int, struct RenderAPI::RenderTargetBindInfo const *const, struct RenderAPI::RenderTargetBindInfo);

    // RVA: 0x5C | Ordinal: 93
        void pushFrameBuffer(struct RenderAPI::IFrameBuffer *, int, int);

    // RVA: 0x5D | Ordinal: 94
        void pushScissor(int, int, int, int);

    // RVA: 0x5E | Ordinal: 95
        void pushStreamOutput(struct RenderAPI::IVertexBuffer *);

    // RVA: 0x5F | Ordinal: 96
        void pushViewport(int, int, int, int, float, float, bool);

    // RVA: 0x60 | Ordinal: 97
        void queryCommandStreamRenderer(void);

    // RVA: 0x61 | Ordinal: 98
        void resetSlots(enum RenderAPI::enShaderType);

    // RVA: 0x62 | Ordinal: 99
        void resetSlotsSRV(enum RenderAPI::enShaderType);

    // RVA: 0x63 | Ordinal: 100
        void resize(int, int, bool);

    // RVA: 0x64 | Ordinal: 101
        void setCSUnorderedAccessViews(unsigned int, unsigned int, struct ID3D11UnorderedAccessView *const *, unsigned int const *);

    // RVA: 0x65 | Ordinal: 102
        void setDebugEvents(bool);

    // RVA: 0x66 | Ordinal: 103
        void setFrameBuffer(class RenderAPI::DX11FrameBuffer *, int, int);

    // RVA: 0x67 | Ordinal: 104
        void setFullscreen(bool);

    // RVA: 0x68 | Ordinal: 105
        void setIndices(struct RenderAPI::IShader *, struct RenderAPI::IIndexBuffer *);

    // RVA: 0x69 | Ordinal: 106
        void setNewFrameBuffer(class RenderAPI::DX11FrameBuffer *);

    // RVA: 0x6A | Ordinal: 107
        void setOMRenderTargetsAndUnorderedAccessViews(unsigned int, struct ID3D11RenderTargetView *const *, struct ID3D11DepthStencilView *, unsigned int, unsigned int, struct ID3D11UnorderedAccessView *const *, unsigned int const *);

    // RVA: 0x6B | Ordinal: 108
        void setRenderGraphResourceTracking(bool);

    // RVA: 0x6C | Ordinal: 109
        void setShader(struct RenderAPI::IShader *, unsigned __int64);

    // RVA: 0x6D | Ordinal: 110
        void setShaderResources(enum RenderAPI::enShaderType, void (__cdecl ID3D11DeviceContext::*)(unsigned int, unsigned int, struct ID3D11ShaderResourceView *const *), unsigned int, unsigned int, struct ID3D11ShaderResourceView *const *);

    // RVA: 0x6E | Ordinal: 111
        void setVertexBuffers(class RenderAPI::DX11Shader *, class RenderAPI::DX11ShaderTechnique &, int);

    // RVA: 0x6F | Ordinal: 112
        void setupSlotBinder(int, int);

    // RVA: 0x70 | Ordinal: 113
        void shutdown(void);

    // RVA: 0x71 | Ordinal: 114
        void strToPtr(class ed::basic_string<char> const &);

    // RVA: 0x72 | Ordinal: 115
        void tesselatorIsActive(void) const;

    // RVA: 0x73 | Ordinal: 116
        void test(char const *);

    // RVA: 0x74 | Ordinal: 117
        void trackResourceByRenderGraph(struct RenderAPI::IBuffer *);

    // RVA: 0x75 | Ordinal: 118
        void trackResourceByRenderGraph(struct RenderAPI::IConstantBuffer *);

    // RVA: 0x76 | Ordinal: 119
        void trackResourceByRenderGraph(struct RenderAPI::IStructuredBuffer *);

    // RVA: 0x77 | Ordinal: 120
        void trackResourceByRenderGraph(struct RenderAPI::ITexture *);

    // RVA: 0x78 | Ordinal: 121
        void turnOffSpecificWarnings(void);

    // RVA: 0x79 | Ordinal: 122
        void unbindResource(unsigned int, enum render::RESOURCE_TYPE_ENUM);

    // RVA: 0x7A | Ordinal: 123
        void useTesselatorStage(bool);

    // RVA: 0x7B | Ordinal: 124
        void waitForIdle(void);

    // RVA: 0x1 | Ordinal: 2
        void _DX11Renderer(void);
};

} // namespace RenderAPI

// DCS_OPS_RE_DX11BACKEND.DLL_DX11RENDERER_HPP
