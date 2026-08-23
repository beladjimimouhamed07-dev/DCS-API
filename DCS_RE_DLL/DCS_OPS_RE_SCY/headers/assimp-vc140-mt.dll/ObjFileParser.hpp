#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: ObjFileParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class ObjFileParser
{
public:

    // RVA: 0x1A8 | Ordinal: 425
        void GetModel(void) const;

    // RVA: 0x3B | Ordinal: 60
        void ObjFileParser(class Assimp::IOStreamBuffer<char> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class Assimp::IOSystem *, class Assimp::ProgressHandler *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x3C | Ordinal: 61
        void ObjFileParser(void);

    // RVA: 0x276 | Ordinal: 631
        void copyNextWord(char *, unsigned __int64);

    // RVA: 0x27A | Ordinal: 635
        void createMesh(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x27B | Ordinal: 636
        void createObject(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x28F | Ordinal: 656
        void getComment(void);

    // RVA: 0x293 | Ordinal: 660
        void getFace(enum aiPrimitiveType);

    // RVA: 0x295 | Ordinal: 662
        void getGroupName(void);

    // RVA: 0x296 | Ordinal: 663
        void getGroupNumber(void);

    // RVA: 0x297 | Ordinal: 664
        void getGroupNumberAndResolution(void);

    // RVA: 0x298 | Ordinal: 665
        void getHomogeneousVector3(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x29F | Ordinal: 672
        void getMaterialDesc(void);

    // RVA: 0x2A0 | Ordinal: 673
        void getMaterialIndex(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2A1 | Ordinal: 674
        void getMaterialLib(void);

    // RVA: 0x2A3 | Ordinal: 676
        void getNewMaterial(void);

    // RVA: 0x2A6 | Ordinal: 679
        void getNumComponentsInDataDefinition(void);

    // RVA: 0x2A7 | Ordinal: 680
        void getObjectName(void);

    // RVA: 0x2B0 | Ordinal: 689
        void getTwoVectors3(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &, class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x2BB | Ordinal: 700
        void getVector(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x2B9 | Ordinal: 698
        void getVector2(class std::vector<class aiVector2t<float>, class std::allocator<class aiVector2t<float>>> &);

    // RVA: 0x2BA | Ordinal: 699
        void getVector3(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x2C9 | Ordinal: 714
        void needsNewMesh(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2D0 | Ordinal: 721
        void parseFile(class Assimp::IOStreamBuffer<char> &);

    // RVA: 0x2E3 | Ordinal: 740
        void reportErrorTokenInFace(void);

    // RVA: 0x2E9 | Ordinal: 746
        void setBuffer(class std::vector<char, class std::allocator<char>> &);

    // RVA: 0x8F | Ordinal: 144
        void _ObjFileParser(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_OBJFILEPARSER_HPP
