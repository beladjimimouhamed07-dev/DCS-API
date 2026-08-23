#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: uvSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class uvSet
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void clear(void);

    // RVA: 0x117 | Ordinal: 280
        void fill(double);

    // RVA: 0x118 | Ordinal: 281
        void fill(class osg::Vec2d const &);

    // RVA: 0x119 | Ordinal: 282
        void fill(class osg::Vec3d const &);

    // RVA: 0x188 | Ordinal: 393
        void getUV(int, class osg::Vec2d &) const;

    // RVA: 0x189 | Ordinal: 394
        void getUV(int, class osg::Vec3d &) const;

    // RVA: 0x18A | Ordinal: 395
        void getUV(int, class osg::Vec4d &) const;

    // RVA: 0x1A6 | Ordinal: 423
        void invertV(void);

    // RVA: 0x1D2 | Ordinal: 467
        void push_back(double);

    // RVA: 0x1D3 | Ordinal: 468
        void push_backArray(double const *);

    // RVA: 0x1F6 | Ordinal: 503
        void reserve(int);

    // RVA: 0x1F7 | Ordinal: 504
        void resize(int);

    // RVA: 0x1F8 | Ordinal: 505
        void resize(int, double);

    // RVA: 0x1F9 | Ordinal: 506
        void resize(unsigned int, class osg::Vec2d const &);

    // RVA: 0x1FA | Ordinal: 507
        void resize(unsigned int, class osg::Vec3d const &);

    // RVA: 0x1FB | Ordinal: 508
        void resize(unsigned int, class osg::Vec4d const &);

    // RVA: 0x239 | Ordinal: 570
        void setUV(int, class osg::Vec2d const &);

    // RVA: 0x23A | Ordinal: 571
        void setUV(int, class osg::Vec3d const &);

    // RVA: 0x23B | Ordinal: 572
        void setUV(int, class osg::Vec4d const &);

    // RVA: 0x23C | Ordinal: 573
        void setUV(int, double);

    // RVA: 0x23D | Ordinal: 574
        void setUV(int, int const &);

    // RVA: 0x23E | Ordinal: 575
        void setUV(int, unsigned int const &);

    // RVA: 0x23F | Ordinal: 576
        void setUV(int, float const &);

    // RVA: 0x240 | Ordinal: 577
        void setUV(int, double const &);

    // RVA: 0x242 | Ordinal: 579
        void setUV(int, class osg::Vec2i const &);

    // RVA: 0x244 | Ordinal: 581
        void setUV(int, class osg::Vec3i const &);

    // RVA: 0x246 | Ordinal: 583
        void setUV(int, class osg::Vec4i const &);

    // RVA: 0x247 | Ordinal: 584
        void setUVarray(int, double *);

    // RVA: 0x257 | Ordinal: 600
        void transform(class osg::Matrixd const &);

    // RVA: 0xF | Ordinal: 16
        void uvSet(class ed::basic_string<char> const &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x10 | Ordinal: 17
        void uvSet(class ed::basic_string<char> const &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &);

    // RVA: 0x11 | Ordinal: 18
        void uvSet(class ed::basic_string<char> const &, class ed::vector<float, class ed::allocator<float>> const &);

    // RVA: 0x12 | Ordinal: 19
        void uvSet(class ed::basic_string<char> const &, class ed::vector<double, class ed::allocator<double>> const &);

    // RVA: 0x13 | Ordinal: 20
        void uvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &);

    // RVA: 0x14 | Ordinal: 21
        void uvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec2i, class ed::allocator<class osg::Vec2i>> const &);

    // RVA: 0x15 | Ordinal: 22
        void uvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x16 | Ordinal: 23
        void uvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec3i, class ed::allocator<class osg::Vec3i>> const &);

    // RVA: 0x17 | Ordinal: 24
        void uvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec4d, class ed::allocator<class osg::Vec4d>> const &);

    // RVA: 0x18 | Ordinal: 25
        void uvSet(class ed::basic_string<char> const &, class ed::vector<class osg::Vec4i, class ed::allocator<class osg::Vec4i>> const &);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_UVSET_HPP
