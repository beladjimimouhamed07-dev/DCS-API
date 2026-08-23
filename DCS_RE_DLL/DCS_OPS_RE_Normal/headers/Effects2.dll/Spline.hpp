#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: Spline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FumeFX {
namespace Builder {

class Spline
{
public:

    // RVA: 0xA | Ordinal: 11
        void Spline(struct FumeFX::Builder::Spline &&);

    // RVA: 0xB | Ordinal: 12
        void Spline(struct FumeFX::Builder::Spline const &);

    // RVA: 0xC | Ordinal: 13
        void Spline(void);

    // RVA: 0x26 | Ordinal: 39
        void addKnot(class osg::Vec3f const &, class osg::Vec3f const &, float, float, float, class osg::Vec3f const &);

    // RVA: 0x51 | Ordinal: 82
        void getLength(void) const;

    // RVA: 0x53 | Ordinal: 84
        void getMaxOpacity(unsigned int &) const;

    // RVA: 0x54 | Ordinal: 85
        void getMaxSmoke(unsigned int &) const;

    // RVA: 0x55 | Ordinal: 86
        void getMaxTemp(unsigned int &) const;

    // RVA: 0x66 | Ordinal: 103
        void isExistOnFrame(unsigned int, unsigned int) const;

    // RVA: 0x6A | Ordinal: 107
        void isValid(void) const;

    // RVA: 0x15 | Ordinal: 22
        void _Spline(void);
};

} // namespace Builder
} // namespace FumeFX

// DCS_OPS_RE_EFFECTS2.DLL_SPLINE_HPP
