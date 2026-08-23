#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: LOD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {
namespace lsa5pureFile {

class LOD
{
public:

    // RVA: 0x6 | Ordinal: 7
        void LOD(void);

    // RVA: 0x184 | Ordinal: 389
        void box(void);

    // RVA: 0x19F | Ordinal: 416
        void buildSpatialTree(void);

    // RVA: 0x1C9 | Ordinal: 458
        void checkStaticPointAsset(struct offshore::Mesh &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &);

    // RVA: 0x20C | Ordinal: 525
        void dump(struct offshore::Scene &, int, int);

    // RVA: 0x239 | Ordinal: 570
        void dumpSquare(int, struct offshore::Scene &, int, int);

    // RVA: 0x23E | Ordinal: 575
        void duplicatePolygon(int);

    // RVA: 0x23F | Ordinal: 576
        void duplicateVertex(int, class std::function<void __cdecl(int, int)> *);

    // RVA: 0x259 | Ordinal: 602
        void filter(class ed::set<int, struct std::less<int>, class ed::allocator<int>> const &, class ed::set<int, struct std::less<int>, class ed::allocator<int>> const &);

    // RVA: 0x275 | Ordinal: 630
        void fitSplineEndsToAnchors(void);

    // RVA: 0x3CF | Ordinal: 976
        void getStaticUniqueVerts(void);

    // RVA: 0x3D0 | Ordinal: 977
        void getStaticVerts(void);

    // RVA: 0x4DF | Ordinal: 1248
        void postloading(void);

    // RVA: 0x4F1 | Ordinal: 1266
        void preload(void);

    // RVA: 0x526 | Ordinal: 1319
        void remapVerts(class ed::vector<int, class ed::allocator<int>> const &);
};

} // namespace lsa5pureFile
} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_LOD_HPP
