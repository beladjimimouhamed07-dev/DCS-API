#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLTexture
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLTexture
{
public:

    // RVA: 0x1D6 | Ordinal: 471
        void QOpenGLTexture(class QImage const &, enum QOpenGLTexture::MipMapGeneration);

    // RVA: 0x1D7 | Ordinal: 472
        void QOpenGLTexture(enum QOpenGLTexture::Target);

    // RVA: 0x9C8 | Ordinal: 2505
        void allocateStorage(enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType);

    // RVA: 0x9C9 | Ordinal: 2506
        void allocateStorage(void);

    // RVA: 0xA8A | Ordinal: 2699
        void bind(unsigned int, enum QOpenGLTexture::TextureUnitReset);

    // RVA: 0xA8B | Ordinal: 2700
        void bind(void);

    // RVA: 0xAD0 | Ordinal: 2769
        void borderColor(void) const;

    // RVA: 0xAD1 | Ordinal: 2770
        void borderColor(int *) const;

    // RVA: 0xAD2 | Ordinal: 2771
        void borderColor(unsigned int *) const;

    // RVA: 0xAD3 | Ordinal: 2772
        void borderColor(float *) const;

    // RVA: 0xAE1 | Ordinal: 2786
        void boundTextureId(unsigned int, enum QOpenGLTexture::BindingTarget);

    // RVA: 0xAE2 | Ordinal: 2787
        void boundTextureId(enum QOpenGLTexture::BindingTarget);

    // RVA: 0xC1E | Ordinal: 3103
        void comparisonFunction(void) const;

    // RVA: 0xC1F | Ordinal: 3104
        void comparisonMode(void) const;

    // RVA: 0xC8D | Ordinal: 3214
        void create(void);

    // RVA: 0xCCE | Ordinal: 3279
        void createTextureView(enum QOpenGLTexture::Target, enum QOpenGLTexture::TextureFormat, int, int, int, int) const;

    // RVA: 0xD45 | Ordinal: 3398
        void d_func(void);

    // RVA: 0xD46 | Ordinal: 3399
        void d_func(void) const;

    // RVA: 0xDEB | Ordinal: 3564
        void depth(void) const;

    // RVA: 0xDF7 | Ordinal: 3576
        void depthStencilMode(void) const;

    // RVA: 0xE13 | Ordinal: 3604
        void destroy(void);

    // RVA: 0x1019 | Ordinal: 4122
        void faces(void) const;

    // RVA: 0x10F1 | Ordinal: 4338
        void format(void) const;

    // RVA: 0x117B | Ordinal: 4476
        void generateMipMaps(int, bool);

    // RVA: 0x117C | Ordinal: 4477
        void generateMipMaps(void);

    // RVA: 0x4E65 | Ordinal: 20070
        void hasFeature(enum QOpenGLTexture::Feature);

    // RVA: 0x4E92 | Ordinal: 20115
        void height(void) const;

    // RVA: 0x4FCB | Ordinal: 20428
        void isAutoMipMapGenerationEnabled(void) const;

    // RVA: 0x4FD1 | Ordinal: 20434
        void isBound(unsigned int);

    // RVA: 0x4FD2 | Ordinal: 20435
        void isBound(void) const;

    // RVA: 0x4FFC | Ordinal: 20477
        void isCreated(void) const;

    // RVA: 0x5026 | Ordinal: 20519
        void isFixedSamplePositions(void) const;

    // RVA: 0x507F | Ordinal: 20608
        void isStorageAllocated(void) const;

    // RVA: 0x5085 | Ordinal: 20614
        void isTextureView(void) const;

    // RVA: 0x511E | Ordinal: 20767
        void layers(void) const;

    // RVA: 0x5157 | Ordinal: 20824
        void levelOfDetailRange(void) const;

    // RVA: 0x5158 | Ordinal: 20825
        void levelofDetailBias(void) const;

    // RVA: 0x51DB | Ordinal: 20956
        void magnificationFilter(void) const;

    // RVA: 0x5242 | Ordinal: 21059
        void maximumAnisotropy(void) const;

    // RVA: 0x5246 | Ordinal: 21063
        void maximumLevelOfDetail(void) const;

    // RVA: 0x5249 | Ordinal: 21066
        void maximumMipLevels(void) const;

    // RVA: 0x52C0 | Ordinal: 21185
        void minMagFilters(void) const;

    // RVA: 0x52C7 | Ordinal: 21192
        void minificationFilter(void) const;

    // RVA: 0x52CA | Ordinal: 21195
        void minimumLevelOfDetail(void) const;

    // RVA: 0x52D1 | Ordinal: 21202
        void mipBaseLevel(void) const;

    // RVA: 0x52D2 | Ordinal: 21203
        void mipLevelRange(void) const;

    // RVA: 0x52D3 | Ordinal: 21204
        void mipLevels(void) const;

    // RVA: 0x52D5 | Ordinal: 21206
        void mipMaxLevel(void) const;

    // RVA: 0x56B8 | Ordinal: 22201
        void release(unsigned int, enum QOpenGLTexture::TextureUnitReset);

    // RVA: 0x56B9 | Ordinal: 22202
        void release(void);

    // RVA: 0x5799 | Ordinal: 22426
        void samples(void) const;

    // RVA: 0x5854 | Ordinal: 22613
        void setAutoMipMapGenerationEnabled(bool);

    // RVA: 0x5874 | Ordinal: 22645
        void setBorderColor(int, int, int, int);

    // RVA: 0x5875 | Ordinal: 22646
        void setBorderColor(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x5876 | Ordinal: 22647
        void setBorderColor(float, float, float, float);

    // RVA: 0x5877 | Ordinal: 22648
        void setBorderColor(class QColor);

    // RVA: 0x58CB | Ordinal: 22732
        void setComparisonFunction(enum QOpenGLTexture::ComparisonFunction);

    // RVA: 0x58CC | Ordinal: 22733
        void setComparisonMode(enum QOpenGLTexture::ComparisonMode);

    // RVA: 0x58CF | Ordinal: 22736
        void setCompressedData(int, int, int, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D0 | Ordinal: 22737
        void setCompressedData(int, int, int, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D1 | Ordinal: 22738
        void setCompressedData(int, int, int, enum QOpenGLTexture::CubeMapFace, int, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D2 | Ordinal: 22739
        void setCompressedData(int, int, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D3 | Ordinal: 22740
        void setCompressedData(int, int, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D4 | Ordinal: 22741
        void setCompressedData(int, int, enum QOpenGLTexture::CubeMapFace, int, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D5 | Ordinal: 22742
        void setCompressedData(int, int, enum QOpenGLTexture::CubeMapFace, int, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D6 | Ordinal: 22743
        void setCompressedData(int, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58D7 | Ordinal: 22744
        void setCompressedData(int, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x58FE | Ordinal: 22783
        void setData(class QImage const &, enum QOpenGLTexture::MipMapGeneration);

    // RVA: 0x58FF | Ordinal: 22784
        void setData(int, int, int, int, int, int, int, int, enum QOpenGLTexture::CubeMapFace, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5900 | Ordinal: 22785
        void setData(int, int, int, int, int, int, int, int, enum QOpenGLTexture::CubeMapFace, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5901 | Ordinal: 22786
        void setData(int, int, int, int, int, int, int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5902 | Ordinal: 22787
        void setData(int, int, int, int, int, int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5903 | Ordinal: 22788
        void setData(int, int, int, int, int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5904 | Ordinal: 22789
        void setData(int, int, int, enum QOpenGLTexture::CubeMapFace, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5905 | Ordinal: 22790
        void setData(int, int, enum QOpenGLTexture::CubeMapFace, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5906 | Ordinal: 22791
        void setData(int, int, enum QOpenGLTexture::CubeMapFace, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5907 | Ordinal: 22792
        void setData(int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5908 | Ordinal: 22793
        void setData(int, int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5909 | Ordinal: 22794
        void setData(int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x590A | Ordinal: 22795
        void setData(int, enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x590B | Ordinal: 22796
        void setData(enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x590C | Ordinal: 22797
        void setData(enum QOpenGLTexture::PixelFormat, enum QOpenGLTexture::PixelType, void const *, class QOpenGLPixelTransferOptions const *const);

    // RVA: 0x5927 | Ordinal: 22824
        void setDepthStencilMode(enum QOpenGLTexture::DepthStencilMode);

    // RVA: 0x597C | Ordinal: 22909
        void setFixedSamplePositions(bool);

    // RVA: 0x59B7 | Ordinal: 22968
        void setFormat(enum QOpenGLTexture::TextureFormat);

    // RVA: 0x5A29 | Ordinal: 23082
        void setLayers(int);

    // RVA: 0x5A3D | Ordinal: 23102
        void setLevelOfDetailRange(float, float);

    // RVA: 0x5A3E | Ordinal: 23103
        void setLevelofDetailBias(float);

    // RVA: 0x5A49 | Ordinal: 23114
        void setMagnificationFilter(enum QOpenGLTexture::Filter);

    // RVA: 0x5A60 | Ordinal: 23137
        void setMaximumAnisotropy(float);

    // RVA: 0x5A63 | Ordinal: 23140
        void setMaximumLevelOfDetail(float);

    // RVA: 0x5A6F | Ordinal: 23152
        void setMinMagFilters(enum QOpenGLTexture::Filter, enum QOpenGLTexture::Filter);

    // RVA: 0x5A70 | Ordinal: 23153
        void setMinificationFilter(enum QOpenGLTexture::Filter);

    // RVA: 0x5A72 | Ordinal: 23155
        void setMinimumLevelOfDetail(float);

    // RVA: 0x5A78 | Ordinal: 23161
        void setMipBaseLevel(int);

    // RVA: 0x5A79 | Ordinal: 23162
        void setMipLevelRange(int, int);

    // RVA: 0x5A7A | Ordinal: 23163
        void setMipLevels(int);

    // RVA: 0x5A7B | Ordinal: 23164
        void setMipMaxLevel(int);

    // RVA: 0x5B66 | Ordinal: 23399
        void setSamples(int);

    // RVA: 0x5B8C | Ordinal: 23437
        void setSize(int, int, int);

    // RVA: 0x5BD6 | Ordinal: 23511
        void setSwizzleMask(enum QOpenGLTexture::SwizzleComponent, enum QOpenGLTexture::SwizzleValue);

    // RVA: 0x5BD7 | Ordinal: 23512
        void setSwizzleMask(enum QOpenGLTexture::SwizzleValue, enum QOpenGLTexture::SwizzleValue, enum QOpenGLTexture::SwizzleValue, enum QOpenGLTexture::SwizzleValue);

    // RVA: 0x5CD5 | Ordinal: 23766
        void setWrapMode(enum QOpenGLTexture::CoordinateDirection, enum QOpenGLTexture::WrapMode);

    // RVA: 0x5CD6 | Ordinal: 23767
        void setWrapMode(enum QOpenGLTexture::WrapMode);

    // RVA: 0x5E99 | Ordinal: 24218
        void swizzleMask(enum QOpenGLTexture::SwizzleComponent) const;

    // RVA: 0x5EC8 | Ordinal: 24265
        void target(void) const;

    // RVA: 0x5F1C | Ordinal: 24349
        void textureId(void) const;

    // RVA: 0x6151 | Ordinal: 24914
        void width(void) const;

    // RVA: 0x6193 | Ordinal: 24980
        void wrapMode(enum QOpenGLTexture::CoordinateDirection) const;

    // RVA: 0x49F | Ordinal: 1184
        void _QOpenGLTexture(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLTEXTURE_HPP
