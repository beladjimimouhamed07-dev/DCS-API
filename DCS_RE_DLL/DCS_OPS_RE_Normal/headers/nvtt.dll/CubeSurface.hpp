#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: CubeSurface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace nvtt {

class CubeSurface
{
public:

    // RVA: 0x2 | Ordinal: 3
        void CubeSurface(struct nvtt::CubeSurface const &);

    // RVA: 0x3 | Ordinal: 4
        void CubeSurface(void);

    // RVA: 0x15 | Ordinal: 22
        void average(int) const;

    // RVA: 0x21 | Ordinal: 34
        void clamp(int, float, float);

    // RVA: 0x2A | Ordinal: 43
        void cosinePowerFilter(int, float, enum nvtt::EdgeFixup) const;

    // RVA: 0x2B | Ordinal: 44
        void countMipmaps(void) const;

    // RVA: 0x35 | Ordinal: 54
        void edgeLength(void) const;

    // RVA: 0x3D | Ordinal: 62
        void face(int);

    // RVA: 0x3E | Ordinal: 63
        void face(int) const;

    // RVA: 0x3F | Ordinal: 64
        void fastResample(int, enum nvtt::EdgeFixup) const;

    // RVA: 0x44 | Ordinal: 69
        void fold(struct nvtt::Surface const &, enum nvtt::CubeLayout);

    // RVA: 0x4E | Ordinal: 79
        void irradianceFilter(int, enum nvtt::EdgeFixup) const;

    // RVA: 0x51 | Ordinal: 82
        void isNull(void) const;

    // RVA: 0x53 | Ordinal: 84
        void load(char const *, int);

    // RVA: 0x5D | Ordinal: 94
        void range(int, float *, float *) const;

    // RVA: 0x6C | Ordinal: 109
        void save(char const *) const;

    // RVA: 0x9E | Ordinal: 159
        void toGamma(float);

    // RVA: 0xA4 | Ordinal: 165
        void toLinear(float);

    // RVA: 0xB3 | Ordinal: 180
        void unfold(enum nvtt::CubeLayout) const;

    // RVA: 0xA | Ordinal: 11
        void _CubeSurface(void);
};

} // namespace nvtt

// DCS_OPS_RE_NVTT.DLL_CUBESURFACE_HPP
