#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: CompressionOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace nvtt {

class CompressionOptions
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CompressionOptions(void);

    // RVA: 0x31 | Ordinal: 50
        void d3d9Format(void) const;

    // RVA: 0x60 | Ordinal: 97
        void reset(void);

    // RVA: 0x74 | Ordinal: 117
        void setColorWeights(float, float, float, float);

    // RVA: 0x78 | Ordinal: 121
        void setExternalCompressor(char const *);

    // RVA: 0x7B | Ordinal: 124
        void setFormat(enum nvtt::Format);

    // RVA: 0x8E | Ordinal: 143
        void setPitchAlignment(int);

    // RVA: 0x8F | Ordinal: 144
        void setPixelFormat(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x90 | Ordinal: 145
        void setPixelFormat(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x91 | Ordinal: 146
        void setPixelType(enum nvtt::PixelType);

    // RVA: 0x92 | Ordinal: 147
        void setQuality(enum nvtt::Quality);

    // RVA: 0x93 | Ordinal: 148
        void setQuantization(bool, bool, bool, int);

    // RVA: 0x96 | Ordinal: 151
        void setTargetDecoder(enum nvtt::Decoder);

    // RVA: 0x8 | Ordinal: 9
        void _CompressionOptions(void);
};

} // namespace nvtt

// DCS_OPS_RE_NVTT.DLL_COMPRESSIONOPTIONS_HPP
