#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: oceanFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class oceanFile
{
public:

    // RVA: 0x2AD | Ordinal: 686
        void getBumpIndex(int);

    // RVA: 0x2FD | Ordinal: 766
        void getH(void);

    // RVA: 0x417 | Ordinal: 1048
        void getX(void);

    // RVA: 0x418 | Ordinal: 1049
        void getZ(void);

    // RVA: 0x424 | Ordinal: 1061
        void init(void);

    // RVA: 0x4A2 | Ordinal: 1187
        void load(class io::MmfStream &);

    // RVA: 0x4C | Ordinal: 77
        void oceanFile(void);

    // RVA: 0x4FC | Ordinal: 1277
        void process(void);

    // RVA: 0x5C3 | Ordinal: 1476
        void update(float, float, class osg::Vec2f const &, float, float);

    // RVA: 0x5CB | Ordinal: 1484
        void updateWind(class osg::Vec2f, double);

    // RVA: 0x6F | Ordinal: 112
        void _oceanFile(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_OCEANFILE_HPP
