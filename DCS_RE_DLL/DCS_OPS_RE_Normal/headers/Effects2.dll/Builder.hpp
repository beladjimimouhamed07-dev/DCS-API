#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: Builder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FumeFX {

class Builder
{
public:

    // RVA: 0x40 | Ordinal: 65
        void generateGPUData(class ed::vector<struct FumeFX::Builder::Spline, class ed::allocator<struct FumeFX::Builder::Spline>> const &, struct FumeFX::GPUDataInitializer const &, struct FumeFX::GPUDataResult &);

    // RVA: 0x41 | Ordinal: 66
        void generateSplines(class ed::vector<struct FumeFX::Builder::Spline, class ed::allocator<struct FumeFX::Builder::Spline>> &, struct FumeFX::GPUDataInitializer const &);

    // RVA: 0x42 | Ordinal: 67
        void generateSplinesFromBox(class ed::vector<struct FumeFX::Builder::Spline, class ed::allocator<struct FumeFX::Builder::Spline>> &, unsigned int, class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x43 | Ordinal: 68
        void getAbsoluteSmokeMax(void) const;

    // RVA: 0x44 | Ordinal: 69
        void getAbsoluteSmokeMin(void) const;

    // RVA: 0x45 | Ordinal: 70
        void getAbsoluteTempMax(void) const;

    // RVA: 0x46 | Ordinal: 71
        void getAbsoluteTempMin(void) const;

    // RVA: 0x47 | Ordinal: 72
        void getAliveSplinesCountInFrame(unsigned int, class ed::vector<struct FumeFX::Builder::Spline, class ed::allocator<struct FumeFX::Builder::Spline>> const &, unsigned int) const;

    // RVA: 0x50 | Ordinal: 81
        void getFramesCount(void) const;

    // RVA: 0x52 | Ordinal: 83
        void getMaxAliveSplinesCountInFrameRange(unsigned int, unsigned int, class ed::vector<struct FumeFX::Builder::Spline, class ed::allocator<struct FumeFX::Builder::Spline>> const &, unsigned int) const;

    // RVA: 0x70 | Ordinal: 113
        void openFX(wchar_t const *, unsigned int, unsigned int, struct FumeFX::Builder::OpenParams const &);

    // RVA: 0x72 | Ordinal: 115
        void release(void);

    // RVA: 0xE | Ordinal: 15
        void _Builder(void);
};

} // namespace FumeFX

// DCS_OPS_RE_EFFECTS2.DLL_BUILDER_HPP
