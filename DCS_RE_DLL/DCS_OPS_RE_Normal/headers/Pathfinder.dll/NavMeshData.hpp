#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Pathfinder.dll
// Class: NavMeshData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class NavMeshData
{
public:

    // RVA: 0x6 | Ordinal: 7
        void MeshSquare_(void);

    // RVA: 0x7 | Ordinal: 8
        void MeshSquare_(class NavMeshData::SquareStorage<struct NavMeshData::MeshSquare> const &);

    // RVA: 0x8 | Ordinal: 9
        void NGSquare_(void);

    // RVA: 0x9 | Ordinal: 10
        void NGSquare_(class NavMeshData::SquareStorage<struct NavMeshData::NGSquare> const &);

    // RVA: 0x0 | Ordinal: 1
        void NavGraph_(void);

    // RVA: 0x1 | Ordinal: 2
        void NavGraph_(class Singleton<class NavMeshData::NavGraph> const &);

    // RVA: 0x2 | Ordinal: 3
        void NavMesh_(void);

    // RVA: 0x3 | Ordinal: 4
        void NavMesh_(class Singleton<class NavMeshData::NavMesh> const &);

    // RVA: 0x4 | Ordinal: 5
        void SquaresInfo_(void);

    // RVA: 0x5 | Ordinal: 6
        void SquaresInfo_(class Singleton<class NavMeshData::SquaresInfo> const &);

    // RVA: 0x5D | Ordinal: 94
        void getPath(class osg::Vec2d const &, class osg::Vec2d const &, struct NavMeshData::SearchParams const &, class NavMeshData::PathPoints &);

    // RVA: 0x5E | Ordinal: 95
        void getSquareArrayIndex(struct std::pair<int, int> const &);

    // RVA: 0x5F | Ordinal: 96
        void getSquareIndex(class osg::Vec2d const &);

    // RVA: 0x60 | Ordinal: 97
        void getSquareIndex(unsigned int);

    // RVA: 0x70 | Ordinal: 113
        void isInside(class NavMeshData::MeshPolygon const &, class osg::Vec2d const &);

    // RVA: 0x40 | Ordinal: 65
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, struct NavMeshData::SurfInfo const &);

    // RVA: 0x41 | Ordinal: 66
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &);

    // RVA: 0x42 | Ordinal: 67
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &);

    // RVA: 0x43 | Ordinal: 68
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, class NavMeshData::SquaresInfo const &);

    // RVA: 0x44 | Ordinal: 69
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> &, class osg::Vec2d const &);

    // RVA: 0x3B | Ordinal: 60
        void operator__(class std::basic_istream<char, struct std::char_traits<char>> &, struct NavMeshData::SurfInfo &);

    // RVA: 0x3C | Ordinal: 61
        void operator__(class std::basic_istream<char, struct std::char_traits<char>> &, class ed::vector<unsigned int, class ed::allocator<unsigned int>> &);

    // RVA: 0x3D | Ordinal: 62
        void operator__(class std::basic_istream<char, struct std::char_traits<char>> &, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> &);

    // RVA: 0x3E | Ordinal: 63
        void operator__(class std::basic_istream<char, struct std::char_traits<char>> &, class NavMeshData::SquaresInfo &);

    // RVA: 0x3F | Ordinal: 64
        void operator__(class std::basic_istream<char, struct std::char_traits<char>> &, class osg::Vec2d &);

    // RVA: 0x88 | Ordinal: 137
        void parseCompId(unsigned int, unsigned int &, unsigned int &);

    // RVA: 0x89 | Ordinal: 138
        void parseCompId(unsigned int, unsigned int &, struct std::pair<int, int> &);

    // RVA: 0x8F | Ordinal: 144
        void read(struct VFS_File *, struct NavMeshData::SurfInfo &);

    // RVA: 0x90 | Ordinal: 145
        void read(struct VFS_File *, class NavMeshData::SquaresInfo &);

    // RVA: 0xB7 | Ordinal: 184
        void write(struct VFS_File *, struct NavMeshData::SurfInfo const &);

    // RVA: 0xB8 | Ordinal: 185
        void write(struct VFS_File *, class NavMeshData::SquaresInfo const &);
};

// DCS_OPS_RE_PATHFINDER.DLL_NAVMESHDATA_HPP
