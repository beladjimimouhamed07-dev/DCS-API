#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: Compressor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace nvtt {

class Compressor
{
public:

    // RVA: 0x1 | Ordinal: 2
        void Compressor(void);

    // RVA: 0x23 | Ordinal: 36
        void compress(struct nvtt::CubeSurface const &, int, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x24 | Ordinal: 37
        void compress(struct nvtt::Surface const &, int, int, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x25 | Ordinal: 38
        void compress(int, int, int, int, int, float const *, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x36 | Ordinal: 55
        void enableCudaAcceleration(bool);

    // RVA: 0x38 | Ordinal: 57
        void estimateSize(struct nvtt::CubeSurface const &, int, struct nvtt::CompressionOptions const &) const;

    // RVA: 0x39 | Ordinal: 58
        void estimateSize(struct nvtt::InputOptions const &, struct nvtt::CompressionOptions const &) const;

    // RVA: 0x3A | Ordinal: 59
        void estimateSize(struct nvtt::Surface const &, int, struct nvtt::CompressionOptions const &) const;

    // RVA: 0x3B | Ordinal: 60
        void estimateSize(int, int, int, int, struct nvtt::CompressionOptions const &) const;

    // RVA: 0x4F | Ordinal: 80
        void isCudaAccelerationEnabled(void) const;

    // RVA: 0x56 | Ordinal: 87
        void outputHeader(struct nvtt::CubeSurface const &, int, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x57 | Ordinal: 88
        void outputHeader(struct nvtt::Surface const &, int, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x58 | Ordinal: 89
        void outputHeader(enum nvtt::TextureType, int, int, int, int, int, bool, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x5B | Ordinal: 92
        void process(struct nvtt::InputOptions const &, struct nvtt::CompressionOptions const &, struct nvtt::OutputOptions const &) const;

    // RVA: 0x97 | Ordinal: 152
        void setTaskDispatcher(struct nvtt::TaskDispatcher *);

    // RVA: 0x9 | Ordinal: 10
        void _Compressor(void);
};

} // namespace nvtt

// DCS_OPS_RE_NVTT.DLL_COMPRESSOR_HPP
