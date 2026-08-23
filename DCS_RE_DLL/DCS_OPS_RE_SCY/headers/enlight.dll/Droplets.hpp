#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: Droplets
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class Droplets
{
public:

    // RVA: 0x19 | Ordinal: 26
        void Droplets(int);

    // RVA: 0x5C | Ordinal: 93
        void addDrops(int);

    // RVA: 0x7E | Ordinal: 127
        void clearTargets(void);

    // RVA: 0x89 | Ordinal: 138
        void draw(void);

    // RVA: 0xF0 | Ordinal: 241
        void setDropletScale(float);

    // RVA: 0x104 | Ordinal: 261
        void update(class render::Texture, float, class osg::Vec3f const &, float, class osg::Vec2d const &, class render::Texture);

    // RVA: 0x33 | Ordinal: 52
        void _Droplets(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_DROPLETS_HPP
