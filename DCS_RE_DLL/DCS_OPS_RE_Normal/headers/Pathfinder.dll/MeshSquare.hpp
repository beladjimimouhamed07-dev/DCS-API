#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Pathfinder.dll
// Class: MeshSquare>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace NavMeshData {

class MeshSquare_
{
public:

    // RVA: 0x54 | Ordinal: 85
        void clear(void);

    // RVA: 0x56 | Ordinal: 87
        void clearAdditionalData(void);

    // RVA: 0x6D | Ordinal: 110
        void isInit(void) const;

    // RVA: 0x73 | Ordinal: 116
        void isLoaded(struct std::pair<int, int> const &) const;

    // RVA: 0x7D | Ordinal: 126
        void loadData(unsigned int);

    // RVA: 0x8C | Ordinal: 141
        void postProcessSquare(struct std::pair<int, int> const &);

    // RVA: 0x91 | Ordinal: 146
        void readAdditionalData(struct VFS_File *);

    // RVA: 0xA3 | Ordinal: 164
        void square(struct std::pair<int, int> const &);

    // RVA: 0xA4 | Ordinal: 165
        void square(unsigned int);

    // RVA: 0xA5 | Ordinal: 166
        void square(unsigned int) const;

    // RVA: 0xA6 | Ordinal: 167
        void square(struct std::pair<int, int> const &) const;

    // RVA: 0xA7 | Ordinal: 168
        void square(class osg::Vec2d const &) const;

    // RVA: 0xB9 | Ordinal: 186
        void writeAdditionalData(struct VFS_File *) const;

    // RVA: 0xBC | Ordinal: 189
        void writeBinary(struct VFS_File *) const;

    // RVA: 0xBE | Ordinal: 191
        void writeText(class std::basic_ostream<char, struct std::char_traits<char>> &) const;
};

} // namespace NavMeshData

// DCS_OPS_RE_PATHFINDER.DLL_MESHSQUARE_HPP
