#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lBlockSceneFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lBlockSceneFile
{
public:

    // RVA: 0x325 | Ordinal: 806
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x484 | Ordinal: 1157
        void load(class ed::basic_string<char> const &);

    // RVA: 0x485 | Ordinal: 1158
        void load(char const *);

    // RVA: 0x486 | Ordinal: 1159
        void load(class io::MmfStream &);

    // RVA: 0x503 | Ordinal: 1284
        void query(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class landscape4::lBlockSceneFile::ISink *) const;

    // RVA: 0x504 | Ordinal: 1285
        void query(class osg::Polytope const &, class landscape4::lBlockSceneFile::ISink *) const;

    // RVA: 0x505 | Ordinal: 1286
        void query(class osg::Vec3d const &, class osg::Vec3d const &, class landscape4::lBlockSceneFile::ISink *) const;

    // RVA: 0x541 | Ordinal: 1346
        void save(class ed::basic_string<char> const &);

    // RVA: 0x542 | Ordinal: 1347
        void save(char const *);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LBLOCKSCENEFILE_HPP
