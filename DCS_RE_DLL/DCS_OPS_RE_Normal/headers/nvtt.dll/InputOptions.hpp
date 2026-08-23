#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: InputOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace nvtt {

class InputOptions
{
public:

    // RVA: 0x4 | Ordinal: 5
        void InputOptions(void);

    // RVA: 0x61 | Ordinal: 98
        void reset(void);

    // RVA: 0x63 | Ordinal: 100
        void resetTextureLayout(void);

    // RVA: 0x70 | Ordinal: 113
        void setAlphaMode(enum nvtt::AlphaMode);

    // RVA: 0x76 | Ordinal: 119
        void setConvertToNormalMap(bool);

    // RVA: 0x7C | Ordinal: 125
        void setFormat(enum nvtt::InputFormat);

    // RVA: 0x7D | Ordinal: 126
        void setGamma(float, float);

    // RVA: 0x7E | Ordinal: 127
        void setHeightEvaluation(float, float, float, float);

    // RVA: 0x83 | Ordinal: 132
        void setKaiserParameters(float, float, float);

    // RVA: 0x84 | Ordinal: 133
        void setMaxExtents(int);

    // RVA: 0x85 | Ordinal: 134
        void setMipmapData(void const *, int, int, int, int, int);

    // RVA: 0x86 | Ordinal: 135
        void setMipmapFilter(enum nvtt::MipmapFilter);

    // RVA: 0x87 | Ordinal: 136
        void setMipmapGeneration(bool, int);

    // RVA: 0x88 | Ordinal: 137
        void setNormalFilter(float, float, float, float);

    // RVA: 0x89 | Ordinal: 138
        void setNormalMap(bool);

    // RVA: 0x8B | Ordinal: 140
        void setNormalizeMipmaps(bool);

    // RVA: 0x94 | Ordinal: 149
        void setRoundMode(enum nvtt::RoundMode);

    // RVA: 0x98 | Ordinal: 153
        void setTextureLayout(enum nvtt::TextureType, int, int, int, int);

    // RVA: 0x9A | Ordinal: 155
        void setWrapMode(enum nvtt::WrapMode);

    // RVA: 0xB | Ordinal: 12
        void _InputOptions(void);
};

} // namespace nvtt

// DCS_OPS_RE_NVTT.DLL_INPUTOPTIONS_HPP
