#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: RebindMesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace export5 {

class RebindMesh
{
public:

    // RVA: 0x1D | Ordinal: 30
        void RebindMesh(void);

    // RVA: 0x133 | Ordinal: 308
        void add(struct offshore::Mesh &);

    // RVA: 0x134 | Ordinal: 309
        void add(struct offshore::Mesh &, class osg::Matrixd const &);

    // RVA: 0x135 | Ordinal: 310
        void addAndReindex(struct offshore::Mesh &);

    // RVA: 0x15B | Ordinal: 348
        void apply(struct offshore::Mesh &, class osg::Matrixd const &, struct offshore::Mesh *);

    // RVA: 0x15C | Ordinal: 349
        void apply(struct offshore::Scene &, int, struct offshore::Mesh *);

    // RVA: 0x170 | Ordinal: 369
        void assemble(bool);

    // RVA: 0x1F2 | Ordinal: 499
        void curBindIndex(void);

    // RVA: 0x2FA | Ordinal: 763
        void getFullMesh(struct offshore::Mesh &);

    // RVA: 0x522 | Ordinal: 1315
        void reindex(struct offshore::Mesh &, class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x534 | Ordinal: 1333
        void save(class ed::basic_string<char> const &);
};

} // namespace export5

// DCS_OPS_RE_EDTERRAIN4.DLL_REBINDMESH_HPP
