#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: SMDImporter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class SMDImporter
{
public:

    // RVA: 0x114 | Ordinal: 277
        void AddBoneChildren(struct aiNode *, unsigned int);

    // RVA: 0x12D | Ordinal: 302
        void CanRead(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class Assimp::IOSystem *, bool) const;

    // RVA: 0x136 | Ordinal: 311
        void ComputeAbsoluteBoneTransformations(void);

    // RVA: 0x14F | Ordinal: 336
        void CreateOutputAnimations(void);

    // RVA: 0x150 | Ordinal: 337
        void CreateOutputMaterials(void);

    // RVA: 0x151 | Ordinal: 338
        void CreateOutputMeshes(void);

    // RVA: 0x152 | Ordinal: 339
        void CreateOutputNodes(void);

    // RVA: 0x17E | Ordinal: 383
        void FixTimeValues(void);

    // RVA: 0x1A3 | Ordinal: 420
        void GetInfo(void) const;

    // RVA: 0x1BC | Ordinal: 445
        void GetTextureIndex(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x1C5 | Ordinal: 454
        void InternReadFile(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct aiScene *, class Assimp::IOSystem *);

    // RVA: 0x1E0 | Ordinal: 481
        void LogErrorNoThrow(char const *);

    // RVA: 0x1E1 | Ordinal: 482
        void LogWarning(char const *);

    // RVA: 0x201 | Ordinal: 514
        void ParseFile(void);

    // RVA: 0x202 | Ordinal: 515
        void ParseFloat(char const *, char const **, float &);

    // RVA: 0x203 | Ordinal: 516
        void ParseNodeInfo(char const *, char const **);

    // RVA: 0x204 | Ordinal: 517
        void ParseNodesSection(char const *, char const **);

    // RVA: 0x205 | Ordinal: 518
        void ParseSignedInt(char const *, char const **, int &);

    // RVA: 0x206 | Ordinal: 519
        void ParseSkeletonElement(char const *, char const **, int);

    // RVA: 0x207 | Ordinal: 520
        void ParseSkeletonSection(char const *, char const **);

    // RVA: 0x208 | Ordinal: 521
        void ParseTriangle(char const *, char const **);

    // RVA: 0x209 | Ordinal: 522
        void ParseTrianglesSection(char const *, char const **);

    // RVA: 0x20A | Ordinal: 523
        void ParseUnsignedInt(char const *, char const **, unsigned int &);

    // RVA: 0x20B | Ordinal: 524
        void ParseVASection(char const *, char const **);

    // RVA: 0x20C | Ordinal: 525
        void ParseVertex(char const *, char const **, struct Assimp::SMD::Vertex &, bool);

    // RVA: 0x50 | Ordinal: 81
        void SMDImporter(class Assimp::SMDImporter const &);

    // RVA: 0x51 | Ordinal: 82
        void SMDImporter(void);

    // RVA: 0x24C | Ordinal: 589
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x252 | Ordinal: 595
        void SkipLine(char const *, char const **);

    // RVA: 0x253 | Ordinal: 596
        void SkipSpacesAndLineEnd(char const *, char const **);

    // RVA: 0x9A | Ordinal: 155
        void _SMDImporter(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_SMDIMPORTER_HPP
