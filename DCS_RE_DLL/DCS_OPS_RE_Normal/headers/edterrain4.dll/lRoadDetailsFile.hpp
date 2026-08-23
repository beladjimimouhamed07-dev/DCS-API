#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lRoadDetailsFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lRoadDetailsFile
{
public:

    // RVA: 0x1E3 | Ordinal: 484
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x32A | Ordinal: 811
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x403 | Ordinal: 1028
        void getType(void);

    // RVA: 0x436 | Ordinal: 1079
        void intersection(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, class osg::Vec3d &, class osg::Matrixd &);

    // RVA: 0x44 | Ordinal: 69
        void lRoadDetailsFile(void);

    // RVA: 0x491 | Ordinal: 1170
        void load(char const *);

    // RVA: 0x492 | Ordinal: 1171
        void load(class io::MmfStream &);

    // RVA: 0x508 | Ordinal: 1289
        void queryFragmentObjects(class osg::BoundingBoxImpl<class osg::Vec3f> const &, struct std::pair<unsigned int, unsigned int> const &, class std::function<bool __cdecl(struct landscape4::lRoadDetailsFile::ObjectData &)>);

    // RVA: 0x54D | Ordinal: 1358
        void save(char const *);

    // RVA: 0x69 | Ordinal: 106
        void _lRoadDetailsFile(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LROADDETAILSFILE_HPP
