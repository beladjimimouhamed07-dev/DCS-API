#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: Surface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace nvtt {

class Surface
{
public:

    // RVA: 0x6 | Ordinal: 7
        void Surface(struct nvtt::Surface const &);

    // RVA: 0x7 | Ordinal: 8
        void Surface(void);

    // RVA: 0x10 | Ordinal: 17
        void abs(int);

    // RVA: 0x11 | Ordinal: 18
        void addChannel(struct nvtt::Surface const &, int, int, float);

    // RVA: 0x12 | Ordinal: 19
        void alphaMode(void) const;

    // RVA: 0x13 | Ordinal: 20
        void alphaTestCoverage(float, int) const;

    // RVA: 0x16 | Ordinal: 23
        void average(int, int, float) const;

    // RVA: 0x17 | Ordinal: 24
        void binarize(int, float, bool);

    // RVA: 0x18 | Ordinal: 25
        void blend(float, float, float, float, float);

    // RVA: 0x19 | Ordinal: 26
        void blockScaleCoCg(int, float);

    // RVA: 0x1A | Ordinal: 27
        void buildNextMipmap(enum nvtt::MipmapFilter, int);

    // RVA: 0x1B | Ordinal: 28
        void buildNextMipmap(enum nvtt::MipmapFilter, float, float const *, int);

    // RVA: 0x1C | Ordinal: 29
        void buildNextMipmapSolidColor(float const *const);

    // RVA: 0x1D | Ordinal: 30
        void canMakeNextMipmap(int);

    // RVA: 0x1E | Ordinal: 31
        void canvasSize(int, int, int);

    // RVA: 0x1F | Ordinal: 32
        void channel(int) const;

    // RVA: 0x22 | Ordinal: 35
        void clamp(int, float, float);

    // RVA: 0x26 | Ordinal: 39
        void convolve(int, int, float *);

    // RVA: 0x27 | Ordinal: 40
        void copy(struct nvtt::Surface const &, int, int, int, int, int, int, int, int, int);

    // RVA: 0x28 | Ordinal: 41
        void copyChannel(struct nvtt::Surface const &, int);

    // RVA: 0x29 | Ordinal: 42
        void copyChannel(struct nvtt::Surface const &, int, int);

    // RVA: 0x2C | Ordinal: 45
        void countMipmaps(int) const;

    // RVA: 0x2D | Ordinal: 46
        void countMipmaps(void) const;

    // RVA: 0x2E | Ordinal: 47
        void createCleanMap(void) const;

    // RVA: 0x2F | Ordinal: 48
        void createSubImage(int, int, int, int, int, int) const;

    // RVA: 0x30 | Ordinal: 49
        void createToksvigMap(float) const;

    // RVA: 0x32 | Ordinal: 51
        void data(void) const;

    // RVA: 0x33 | Ordinal: 52
        void depth(void) const;

    // RVA: 0x3C | Ordinal: 61
        void expandNormals(float, float);

    // RVA: 0x40 | Ordinal: 65
        void fill(float, float, float, float);

    // RVA: 0x41 | Ordinal: 66
        void flipX(void);

    // RVA: 0x42 | Ordinal: 67
        void flipY(void);

    // RVA: 0x43 | Ordinal: 68
        void flipZ(void);

    // RVA: 0x45 | Ordinal: 70
        void fromLUVW(float);

    // RVA: 0x46 | Ordinal: 71
        void fromLogScale(int, float);

    // RVA: 0x47 | Ordinal: 72
        void fromRGBE(int, int);

    // RVA: 0x48 | Ordinal: 73
        void fromRGBM(float, float);

    // RVA: 0x49 | Ordinal: 74
        void fromYCoCg(void);

    // RVA: 0x4A | Ordinal: 75
        void height(void) const;

    // RVA: 0x4B | Ordinal: 76
        void histogram(int, float, float, int, int *) const;

    // RVA: 0x50 | Ordinal: 81
        void isNormalMap(void) const;

    // RVA: 0x52 | Ordinal: 83
        void isNull(void) const;

    // RVA: 0x54 | Ordinal: 85
        void load(char const *, bool *);

    // RVA: 0x55 | Ordinal: 86
        void normalizeNormalMap(void);

    // RVA: 0x59 | Ordinal: 90
        void packNormals(float, float);

    // RVA: 0x5A | Ordinal: 91
        void premultiplyAlpha(void);

    // RVA: 0x5C | Ordinal: 93
        void quantize(int, int, bool, bool);

    // RVA: 0x5E | Ordinal: 95
        void range(int, float *, float *, int, float) const;

    // RVA: 0x5F | Ordinal: 96
        void reconstructNormals(enum nvtt::NormalTransform);

    // RVA: 0x64 | Ordinal: 101
        void resize(int, int, int, enum nvtt::ResizeFilter);

    // RVA: 0x65 | Ordinal: 102
        void resize(int, int, int, enum nvtt::ResizeFilter, float, float const *);

    // RVA: 0x66 | Ordinal: 103
        void resize(int, enum nvtt::RoundMode, enum nvtt::ResizeFilter);

    // RVA: 0x67 | Ordinal: 104
        void resize(int, enum nvtt::RoundMode, enum nvtt::ResizeFilter, float, float const *);

    // RVA: 0x68 | Ordinal: 105
        void resize_make_square(int, enum nvtt::RoundMode, enum nvtt::ResizeFilter);

    // RVA: 0x6D | Ordinal: 110
        void save(char const *, bool, bool) const;

    // RVA: 0x6E | Ordinal: 111
        void scaleAlphaToCoverage(float, float, int);

    // RVA: 0x6F | Ordinal: 112
        void scaleBias(int, float, float);

    // RVA: 0x71 | Ordinal: 114
        void setAlphaMode(enum nvtt::AlphaMode);

    // RVA: 0x72 | Ordinal: 115
        void setAtlasBorder(int, int, float, float, float, float);

    // RVA: 0x73 | Ordinal: 116
        void setBorder(float, float, float, float);

    // RVA: 0x80 | Ordinal: 129
        void setImage(int, int, int);

    // RVA: 0x81 | Ordinal: 130
        void setImage(enum nvtt::InputFormat, int, int, int, void const *, void const *, void const *, void const *);

    // RVA: 0x82 | Ordinal: 131
        void setImage(enum nvtt::InputFormat, int, int, int, void const *);

    // RVA: 0x7F | Ordinal: 128
        void setImage2D(enum nvtt::Format, enum nvtt::Decoder, int, int, void const *);

    // RVA: 0x8A | Ordinal: 139
        void setNormalMap(bool);

    // RVA: 0x9B | Ordinal: 156
        void setWrapMode(enum nvtt::WrapMode);

    // RVA: 0x9C | Ordinal: 157
        void swizzle(int, int, int, int);

    // RVA: 0x9D | Ordinal: 158
        void toCleanNormalMap(void);

    // RVA: 0x9F | Ordinal: 160
        void toGamma(int, float);

    // RVA: 0xA0 | Ordinal: 161
        void toGamma(float);

    // RVA: 0xA1 | Ordinal: 162
        void toGreyScale(float, float, float, float);

    // RVA: 0xA2 | Ordinal: 163
        void toLM(float, float);

    // RVA: 0xA3 | Ordinal: 164
        void toLUVW(float);

    // RVA: 0xA5 | Ordinal: 166
        void toLinear(int, float);

    // RVA: 0xA6 | Ordinal: 167
        void toLinear(float);

    // RVA: 0xA7 | Ordinal: 168
        void toLinearFromSrgb(void);

    // RVA: 0xA8 | Ordinal: 169
        void toLogScale(int, float);

    // RVA: 0xA9 | Ordinal: 170
        void toNormalMap(float, float, float, float);

    // RVA: 0xAA | Ordinal: 171
        void toRGBE(int, int);

    // RVA: 0xAB | Ordinal: 172
        void toRGBM(float, float);

    // RVA: 0xAC | Ordinal: 173
        void toSrgb(void);

    // RVA: 0xAD | Ordinal: 174
        void toXenonSrgb(void);

    // RVA: 0xAE | Ordinal: 175
        void toYCoCg(void);

    // RVA: 0xAF | Ordinal: 176
        void toneMap(enum nvtt::ToneMapper, float *);

    // RVA: 0xB0 | Ordinal: 177
        void transform(float const *const, float const *const, float const *const, float const *const, float const *const);

    // RVA: 0xB1 | Ordinal: 178
        void transformNormals(enum nvtt::NormalTransform);

    // RVA: 0xB2 | Ordinal: 179
        void type(void) const;

    // RVA: 0xB5 | Ordinal: 182
        void width(void) const;

    // RVA: 0xB6 | Ordinal: 183
        void wrapMode(void) const;

    // RVA: 0xD | Ordinal: 14
        void _Surface(void);
};

} // namespace nvtt

// DCS_OPS_RE_NVTT.DLL_SURFACE_HPP
