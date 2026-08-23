#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Pathfinder.dll
// Class: NGSquare>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace NavMeshData {

class NGSquare_
{
public:

    // RVA: 0x55 | Ordinal: 86
        void clear(void);

    // RVA: 0x57 | Ordinal: 88
        void clearAdditionalData(void);

    // RVA: 0x6E | Ordinal: 111
        void isInit(void) const;

    // RVA: 0x74 | Ordinal: 117
        void isLoaded(struct std::pair<int, int> const &) const;

    // RVA: 0x7E | Ordinal: 127
        void loadData(unsigned int);

    // RVA: 0x8D | Ordinal: 142
        void postProcessSquare(struct std::pair<int, int> const &);

    // RVA: 0x92 | Ordinal: 147
        void readAdditionalData(struct VFS_File *);

    // RVA: 0xA8 | Ordinal: 169
        void square(struct std::pair<int, int> const &);

    // RVA: 0xA9 | Ordinal: 170
        void square(unsigned int);

    // RVA: 0xAA | Ordinal: 171
        void square(unsigned int) const;

    // RVA: 0xAB | Ordinal: 172
        void square(struct std::pair<int, int> const &) const;

    // RVA: 0xAC | Ordinal: 173
        void square(class osg::Vec2d const &) const;

    // RVA: 0xBA | Ordinal: 187
        void writeAdditionalData(struct VFS_File *) const;

    // RVA: 0xBD | Ordinal: 190
        void writeBinary(struct VFS_File *) const;

    // RVA: 0xBF | Ordinal: 192
        void writeText(class std::basic_ostream<char, struct std::char_traits<char>> &) const;
};

} // namespace NavMeshData

// DCS_OPS_RE_PATHFINDER.DLL_NGSQUARE_HPP
