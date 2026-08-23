#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Square
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {
namespace lsa5pureFile {

class Square
{
public:

    // RVA: 0x26 | Ordinal: 39
        void Square(void);

    // RVA: 0x13E | Ordinal: 319
        void addExpandMesh(struct landscape5::lsa5pureFile::Mesh const &, int);

    // RVA: 0x212 | Ordinal: 531
        void dump(struct offshore::Scene &, int, class ed::basic_string<char> const &) const;

    // RVA: 0x213 | Ordinal: 532
        void dump(class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct offshore::Scene &, int, class ed::basic_string<char> const &, class std::function<bool __cdecl(class ed::basic_string<char>)>) const;

    // RVA: 0x243 | Ordinal: 580
        void empty(void);

    // RVA: 0x255 | Ordinal: 598
        void faceSuperficialCount(int) const;

    // RVA: 0x2F4 | Ordinal: 757
        void getFaceCount(void) const;

    // RVA: 0x33A | Ordinal: 827
        void getMeshPtr(void) const;

    // RVA: 0x3D4 | Ordinal: 981
        void getStream(class ed::basic_string<char> const &) const;

    // RVA: 0x3DE | Ordinal: 991
        void getSuperficialCount(void) const;

    // RVA: 0x3DF | Ordinal: 992
        void getSuperficialFaceCount(int) const;

    // RVA: 0x4E2 | Ordinal: 1251
        void postloading(void);

    // RVA: 0x4F3 | Ordinal: 1268
        void preload(bool);

    // RVA: 0x5A7 | Ordinal: 1448
        void superficialFace(int, int) const;
};

} // namespace lsa5pureFile
} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SQUARE_HPP
